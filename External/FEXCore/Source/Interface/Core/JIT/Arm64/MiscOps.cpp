/*
$info$
tags: backend|arm64
$end_info$
*/

#include "Interface/Core/JIT/Arm64/JITClass.h"

namespace FEXCore::CPU {
static void PrintValue(uint64_t Value) {
  LogMan::Msg::DFmt("Value: 0x{:x}", Value);
}

static void PrintVectorValue(uint64_t Value, uint64_t ValueUpper) {
  LogMan::Msg::DFmt("Value: 0x{:016x}'{:016x}", ValueUpper, Value);
}

using namespace vixl;
using namespace vixl::aarch64;
#define DEF_OP(x) void Arm64JITCore::Op_##x(IR::IROp_Header *IROp, IR::NodeID Node)

DEF_OP(Fence) {
  auto Op = IROp->C<IR::IROp_Fence>();
  switch (Op->Fence) {
    case IR::Fence_Load.Val:
      dmb(FullSystem, BarrierReads);
      break;
    case IR::Fence_LoadStore.Val:
      dmb(FullSystem, BarrierAll);
      break;
    case IR::Fence_Store.Val:
      dmb(FullSystem, BarrierWrites);
      break;
    default: LOGMAN_MSG_A_FMT("Unknown Fence: {}", Op->Fence); break;
  }
}

DEF_OP(Break) {
  auto Op = IROp->C<IR::IROp_Break>();
  switch (Op->Reason) {
    case FEXCore::IR::Break_Unimplemented: // Hard fault
    case FEXCore::IR::Break_Interrupt: // Guest ud2
    case FEXCore::IR::Break_Overflow: // overflow
      hlt(4);
      break;
    case FEXCore::IR::Break_Halt: { // HLT
      // Time to quit
      // Set our stack to the starting stack location
      ldr(TMP1, MemOperand(STATE, offsetof(FEXCore::Core::CpuStateFrame, ReturningStackLocation)));
      add(sp, TMP1, 0);

      // Now we need to jump to the thread stop handler
      LoadConstant(TMP1, ThreadSharedData.Dispatcher->ThreadStopHandlerAddressSpillSRA);
      br(TMP1);
      break;
    }
    case FEXCore::IR::Break_Interrupt3: { // INT3
      ResetStack();

      LoadConstant(TMP1, ThreadSharedData.Dispatcher->ThreadPauseHandlerAddressSpillSRA);
      br(TMP1);
      break;
    }
    case FEXCore::IR::Break_InvalidInstruction:
    {
      ResetStack();

      LoadConstant(TMP1, ThreadSharedData.Dispatcher->UnimplementedInstructionAddress);
      br(TMP1);

      break;
    }
    default: LOGMAN_MSG_A_FMT("Unknown Break reason: {}", Op->Reason);
  }
}

DEF_OP(GetRoundingMode) {
  auto Dst = GetReg<RA_64>(Node);
  mrs(Dst, FPCR);
  lsr(Dst, Dst,  22);

  // FTZ is already in the correct location
  // Rounding mode is different
  and_(TMP1, Dst, 0b11);

  cmp(TMP1, 1);
  LoadConstant(TMP3, IR::ROUND_MODE_POSITIVE_INFINITY);
  csel(TMP2, TMP3, xzr, vixl::aarch64::Condition::eq);

  cmp(TMP1, 2);
  LoadConstant(TMP3, IR::ROUND_MODE_NEGATIVE_INFINITY);
  csel(TMP2, TMP3, TMP2, vixl::aarch64::Condition::eq);

  cmp(TMP1, 3);
  LoadConstant(TMP3, IR::ROUND_MODE_TOWARDS_ZERO);
  csel(TMP2, TMP3, TMP2, vixl::aarch64::Condition::eq);

  orr(Dst, Dst, TMP2);

  bfi(Dst, TMP2, 0, 2);
}

DEF_OP(SetRoundingMode) {
  auto Op = IROp->C<IR::IROp_SetRoundingMode>();
  auto Src = GetReg<RA_64>(Op->Header.Args[0].ID());

  // Setup the rounding flags correctly
  and_(TMP1, Src, 0b11);

  cmp(TMP1, IR::ROUND_MODE_POSITIVE_INFINITY);
  LoadConstant(TMP3, 1);
  csel(TMP2, TMP3, xzr, vixl::aarch64::Condition::eq);

  cmp(TMP1, IR::ROUND_MODE_NEGATIVE_INFINITY);
  LoadConstant(TMP3, 2);
  csel(TMP2, TMP3, TMP2, vixl::aarch64::Condition::eq);

  cmp(TMP1, IR::ROUND_MODE_TOWARDS_ZERO);
  LoadConstant(TMP3, 3);
  csel(TMP2, TMP3, TMP2, vixl::aarch64::Condition::eq);

  mrs(TMP1, FPCR);

  // Insert the rounding flags
  bfi(TMP1, TMP2, 22, 2);

  // Insert the FTZ flag
  lsr(TMP2, Src, 2);
  bfi(TMP1, TMP2, 24, 1);

  // Now save the new FPCR
  msr(FPCR, TMP1);
}

DEF_OP(Print) {
  auto Op = IROp->C<IR::IROp_Print>();

  PushDynamicRegsAndLR();

  if (IsGPR(Op->Header.Args[0].ID())) {
    mov(x0, GetReg<RA_64>(Op->Header.Args[0].ID()));
    LoadConstant(x3, reinterpret_cast<uint64_t>(PrintValue));
  }
  else {
    fmov(x0, GetSrc(Op->Header.Args[0].ID()).V1D());
    // Bug in vixl that source vector needs to b V1D rather than V2D?
    fmov(x1, GetSrc(Op->Header.Args[0].ID()).V1D(), 1);
    LoadConstant(x3, reinterpret_cast<uint64_t>(PrintVectorValue));
  }
  SpillStaticRegs();
  blr(x3);
  FillStaticRegs();

  PopDynamicRegsAndLR();
}

#undef DEF_OP
void Arm64JITCore::RegisterMiscHandlers() {
#define REGISTER_OP(op, x) OpHandlers[FEXCore::IR::IROps::OP_##op] = &Arm64JITCore::Op_##x
  REGISTER_OP(DUMMY,      NoOp);
  REGISTER_OP(IRHEADER,   NoOp);
  REGISTER_OP(CODEBLOCK,  NoOp);
  REGISTER_OP(BEGINBLOCK, NoOp);
  REGISTER_OP(ENDBLOCK,   NoOp);
  REGISTER_OP(FENCE,      Fence);
  REGISTER_OP(BREAK,      Break);
  REGISTER_OP(PHI,        NoOp);
  REGISTER_OP(PHIVALUE,   NoOp);
  REGISTER_OP(PRINT,      Print);
  REGISTER_OP(GETROUNDINGMODE, GetRoundingMode);
  REGISTER_OP(SETROUNDINGMODE, SetRoundingMode);
  REGISTER_OP(INVALIDATEFLAGS,   NoOp);
#undef REGISTER_OP
}
}

