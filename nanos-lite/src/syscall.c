#include <common.h>
#include "syscall.h"
#include <sys/time.h>

int fs_open(const char *pathname, int flags, int mode);
size_t fs_read(int fd, void *buf, size_t len);
size_t fs_write(int fd, const void *buf, size_t len);
size_t fs_lseek(int fd, size_t offset, int whence);
int fs_close(int fd);

void do_syscall(Context *c) {
  uintptr_t a[4];
  //int us = 0;

  a[0] = c->GPR1;// 系统调用号
  a[1] = c->GPR2;// 函数参数1
  a[2] = c->GPR3;// 函数参数2
  a[3] = c->GPR4;// 函数参数3

  switch (c->GPR1) {
    case SYS_exit:
      // printf("[Strace - do_syscall] SYS_exit.\n");
      // printf("c->GPR2:%d\n",c->GPR2);
      halt(0);
      break;
    case SYS_yield:
      printf("[Strace - do_syscall] SYS_yield.\n");
      yield();
      c->GPRx = 0;
      break;
    case SYS_brk:
      // printf("[Strace - do_syscall] SYS_brk\n");
      c->GPRx = 0;
      break;
    case SYS_open:
      // printf("[Strace - do_syscall] SYS_open\n");
      c->GPRx = fs_open((const char *)c->GPR2, c->GPR3, c->GPR4);
      break;
    case SYS_read:
      // printf("[Strace - do_syscall] SYS_read\n");
      c->GPRx = fs_read(c->GPR2, (void *)c->GPR3, c->GPR4);
      break;
    case SYS_write:
      // printf("[Strace - do_syscall] SYS_write\n");
      c->GPRx = fs_write(c->GPR2, (void *)c->GPR3, c->GPR4);
      break;
    case SYS_lseek:
      // printf("[Strace - do_syscall] SYS_lseek\n");
      c->GPRx = fs_lseek(c->GPR2, c->GPR3, c->GPR4);
      break;
    case SYS_close:
      // printf("[Strace - do_syscall] SYS_close\n");
      c->GPRx = fs_close(c->GPR2);
      break;
    case SYS_gettimeofday:
    // printf("SYS_gettimeofday a1:%d,a2:%d,a3:%d\n", a[1], a[2], a[3]);
      struct timeval* tv = (struct timeval*)a[1];
      int us = io_read(AM_TIMER_UPTIME).us;
      // printf("us is %d\n",us);
      tv->tv_sec = us / 1000000;
      // printf("tv_sec is %d\n",tv->tv_sec);
      tv->tv_usec = us % 1000000;
      // printf("tv_usec is %d\n",tv->tv_usec );
      c->GPRx = 0;
      break;
    case SYS_execve:
      printf("execve!!!\n");
      //char *fname = (char *)c->GPR2;
      //naive_uload(NULL, fname);
      c->GPRx = 0;
      break;

    default: panic("Unhandled syscall ID = %d", c->GPR1);
  }
}