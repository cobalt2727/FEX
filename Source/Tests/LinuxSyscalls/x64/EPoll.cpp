/*
$info$
meta: LinuxSyscalls|syscalls-x86-64 ~ x86-64 specific syscall implementations
tags: LinuxSyscalls|syscalls-x86-64
$end_info$
*/

#include "Common/MathUtils.h"

#include "Tests/LinuxSyscalls/Syscalls.h"
#include "Tests/LinuxSyscalls/x64/Syscalls.h"
#include <FEXCore/Debug/InternalThreadState.h>
#include <FEXCore/Utils/LogManager.h>

#include <algorithm>
#include <cstdint>
#include <sys/epoll.h>
#include <sys/syscall.h>
#include <unistd.h>
#include <vector>

namespace FEX::HLE::x64 {
  void RegisterEpoll(FEX::HLE::SyscallHandler *const Handler) {
    REGISTER_SYSCALL_IMPL_X64(epoll_wait, [](FEXCore::Core::CpuStateFrame *Frame, int epfd, epoll_event_x86 *events, int maxevents, int timeout) -> uint64_t {
      std::vector<struct epoll_event> Events(std::max(0, maxevents));
      uint64_t Result = ::syscall(SYS_epoll_pwait, epfd, Events.data(), maxevents, timeout, nullptr, 8);

      if (Result != -1) {
        for (size_t i = 0; i < Result; ++i) {
          events[i] = Events[i];
        }
      }
      SYSCALL_ERRNO();
    });

    REGISTER_SYSCALL_IMPL_X64(epoll_ctl, [](FEXCore::Core::CpuStateFrame *Frame, int epfd, int op, int fd, epoll_event_x86 *event) -> uint64_t {
      struct epoll_event Event;
      struct epoll_event *EventPtr{};
      if (event) {
        Event = *event;
        EventPtr = &Event;
      }
      uint64_t Result = ::syscall(SYS_epoll_ctl, epfd, op, fd, EventPtr);
      if (Result != -1 && event) {
        *event = Event;
      }
      SYSCALL_ERRNO();
    });

    REGISTER_SYSCALL_IMPL_X64(epoll_pwait, [](FEXCore::Core::CpuStateFrame *Frame, int epfd, epoll_event_x86 *events, int maxevent, int timeout, const uint64_t* sigmask, size_t sigsetsize) -> uint64_t {
      std::vector<struct epoll_event> Events(std::max(0, maxevent));

      uint64_t Result = ::syscall(SYS_epoll_pwait,
        epfd,
        Events.data(),
        maxevent,
        timeout,
        sigmask,
        sigsetsize);

      if (Result != -1) {
        for (size_t i = 0; i < Result; ++i) {
          events[i] = Events[i];
        }
      }

      SYSCALL_ERRNO();
    });

    if (Handler->GetHostKernelVersion() >= FEX::HLE::SyscallHandler::KernelVersion(5, 11, 0)) {
#ifndef SYS_epoll_pwait2
#define SYS_epoll_pwait2 354
#endif
      REGISTER_SYSCALL_IMPL_X64(epoll_pwait2, [](FEXCore::Core::CpuStateFrame *Frame, int epfd, epoll_event_x86 *events, int maxevent, timespec *timeout, const uint64_t* sigmask, size_t sigsetsize) -> uint64_t {
        std::vector<struct epoll_event> Events(std::max(0, maxevent));

        uint64_t Result = ::syscall(SYS_epoll_pwait2,
          epfd,
          Events.data(),
          maxevent,
          timeout,
          sigmask,
          sigsetsize);

        if (Result != -1) {
          for (size_t i = 0; i < Result; ++i) {
            events[i] = Events[i];
          }
        }

        SYSCALL_ERRNO();
      });
    }
    else {
      REGISTER_SYSCALL_IMPL_X64(epoll_pwait2, UnimplementedSyscallSafe);
    }
  }
}
