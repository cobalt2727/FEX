/*
$info$
tags: LinuxSyscalls|syscalls-x86-64
$end_info$
*/

#include "Tests/LinuxSyscalls/SignalDelegator.h"
#include "Tests/LinuxSyscalls/Syscalls.h"
#include "Tests/LinuxSyscalls/Syscalls/Thread.h"

#include "Tests/LinuxSyscalls/x64/Syscalls.h"

#include <FEXCore/Core/X86Enums.h>
#include <FEXCore/Core/SignalDelegator.h>

#include <FEXCore/Utils/SyscallWrappers.h>

namespace FEX::HLE::x64 {
  void RegisterSignals() {
    REGISTER_SYSCALL_IMPL_X64(rt_sigaction, [](FEXCore::Core::CpuStateFrame *Frame, int signum, const FEXCore::GuestSigAction *act, FEXCore::GuestSigAction *oldact, size_t sigsetsize) -> uint64_t {
      if (sigsetsize != 8) {
        return -EINVAL;
      }

      return FEX::HLE::_SyscallHandler->GetSignalDelegator()->RegisterGuestSignalHandler(signum, act, oldact);
    });

    REGISTER_SYSCALL_IMPL_X64(rt_sigtimedwait, [](FEXCore::Core::CpuStateFrame *Frame, uint64_t *set, siginfo_t *info, const struct timespec* timeout, size_t sigsetsize) -> uint64_t {
      return FEX::HLE::_SyscallHandler->GetSignalDelegator()->GuestSigTimedWait(set, info, timeout, sigsetsize);
    });
  }
}

