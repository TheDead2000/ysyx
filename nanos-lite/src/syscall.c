#include "syscall.h"
#include "fs.h"
#include <common.h>
#include <proc.h>
#include <stdint.h>
#include <sys/time.h>
// uintptr_t end_symbol;
int mm_brk(uintptr_t brk);

extern const char *get_filename(int fd);
void handle_execve(const char *filename, char *const argv[], char *const envp[]);
void handle_exit();

const char *event_names[] = {
    "SYS_exit",  "SYS_yield",  "SYS_open",   "SYS_read",   "SYS_write",
    "SYS_kill",  "SYS_getpid", "SYS_close",  "SYS_lseek",  "SYS_brk",
    "SYS_fstat", "SYS_time",   "SYS_signal", "SYS_execve", "SYS_fork",
    "SYS_link",  "SYS_unlink", "SYS_wait",   "SYS_times",  "SYS_gettimeofday"};
void naive_uload(PCB *pcb, const char *filename);
void do_syscall(Context *c) {
#ifdef STRACE_ENABLE
  switch (c->GPR1) {
  case SYS_open:
    Log("Syscall: %s,%s,0x%x,0x%x", event_names[c->GPR1], c->GPR2, c->GPR3, c->GPR4);
    break;
  case SYS_read:
  case SYS_write:
  case SYS_lseek:
  case SYS_close:
    Log("Syscall: %s, %s,0x%x,0x%x", event_names[c->GPR1], get_filename(c->GPR2), c->GPR3, c->GPR4);
    break;
  default:
    Log("Syscall: %s,0x%x,0x%x,0x%x", event_names[c->GPR1], c->GPR2, c->GPR3, c->GPR4);
    break;
  }
#endif
  // Log("%x,%x,%x,%x", c->GPR1, c->GPR2, c->GPR3, c->GPR4);
  uintptr_t a[4];
  a[0] = c->GPR1;
  a[1] = c->GPR2;
  a[2] = c->GPR3;
  a[3] = c->GPR4;
  uint64_t time;
  switch (a[0]) {
  case SYS_exit:
    // exit_handler in proc.c
    // halt(a[1]);
    handle_exit();
    break;
  case SYS_yield:
    yield();
    c->GPRx=0;
    break;
  case SYS_write:
    c->GPRx = fs_write(a[1], (void *)a[2], a[3]);
    break;
  case SYS_read:
    c->GPRx = fs_read(a[1], (void *)a[2], a[3]);
    break;
  case SYS_open:
    c->GPRx = fs_open((const char *)a[1], a[2], a[3]);
    break;
  case SYS_close:
    c->GPRx = fs_close(a[1]);
    break;
  case SYS_lseek:
    c->GPRx = fs_lseek(a[1], a[2], a[3]);
    break;
  case SYS_brk:
    c->GPRx = mm_brk(a[1]);
    break;
  case SYS_time:
    time = io_read(AM_TIMER_UPTIME).us;
    ((struct timeval *)a[1])->tv_sec = time / 1000000;
    ((struct timeval *)a[1])->tv_usec = time % 1000000;
    c->GPRx = 0;
    break;
  case SYS_execve:
    // naive_uload(NULL,(const char*)a[1]);
    if (fs_open((const char *)a[1], 0, 0) == -1)
      c->GPRx = -2;
    else
      handle_execve((const char *)a[1], (char *const*)a[2], (char * const *)a[3]);
    break;
        default : panic("Unhandled syscall ID = 0x%x", a[0]);
    }
}
