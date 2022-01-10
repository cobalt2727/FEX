#pragma once
#include <signal.h>
#include <syscall.h>
#include <sys/syscall.h>
#include <unistd.h>

namespace FEXCore::Utils {
// this allows for operating systems with older versions of glibc to function properly
  static inline int gettid() {
    return ::syscall(SYS_gettid);
  }
  static inline int tgkill(pid_t tgid, pid_t tid, int sig) {
    return ::syscall(SYS_tgkill, tgid, tid, sig);
  }
}

