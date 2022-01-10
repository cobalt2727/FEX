/*
$info$
tags: LinuxSyscalls|syscalls-shared
$end_info$
*/

#include "Tests/LinuxSyscalls/Syscalls.h"
#include "Tests/LinuxSyscalls/Types.h"
#include "Tests/LinuxSyscalls/x64/Syscalls.h"
#include "Tests/LinuxSyscalls/x32/Syscalls.h"

#include <sys/mman.h>
#include <FEXCore/Utils/SyscallWrappers.h>

namespace FEX::HLE {
  void RegisterKey() {
    REGISTER_SYSCALL_IMPL_PASS(add_key, [](FEXCore::Core::CpuStateFrame *Frame, const char *type, const char *description, const void *payload, size_t plen, key_serial_t keyring) -> uint64_t {
      uint64_t Result = syscall(SYS_add_key, type, description, payload, plen, keyring);
      SYSCALL_ERRNO();
    });

    REGISTER_SYSCALL_IMPL_PASS(request_key, [](FEXCore::Core::CpuStateFrame *Frame, const char *type, const char *description, const char *callout_info, key_serial_t dest_keyring) -> uint64_t {
      uint64_t Result = syscall(SYS_request_key, type, description, callout_info, dest_keyring);
      SYSCALL_ERRNO();
    });

    REGISTER_SYSCALL_IMPL_PASS(keyctl, [](FEXCore::Core::CpuStateFrame *Frame, int operation, uint64_t arg2, uint64_t arg3, uint64_t arg4, uint64_t arg5) -> uint64_t {
      uint64_t Result = syscall(SYS_keyctl, operation, arg2, arg3, arg4, arg5);
      SYSCALL_ERRNO();
    });

    REGISTER_SYSCALL_IMPL_PASS(pkey_mprotect, [](FEXCore::Core::CpuStateFrame *Frame, void *addr, size_t len, int prot, int pkey) -> uint64_t {
      // Added in Linux 4.9
      uint64_t Result = ::pkey_mprotect(addr, len, prot, pkey);
      SYSCALL_ERRNO();
    });

    REGISTER_SYSCALL_IMPL_PASS(pkey_alloc, [](FEXCore::Core::CpuStateFrame *Frame, unsigned int flags, unsigned int access_rights) -> uint64_t {
      // Added in Linux 4.9
      uint64_t Result = ::pkey_alloc(flags, access_rights);
      SYSCALL_ERRNO();
    });

    REGISTER_SYSCALL_IMPL_PASS(pkey_free, [](FEXCore::Core::CpuStateFrame *Frame, int pkey) -> uint64_t {
      // Added in Linux 4.9
      uint64_t Result = ::pkey_free(pkey);
      SYSCALL_ERRNO();
    });
  }
}
