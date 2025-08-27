#include <am.h>
#include <riscv/riscv.h>
#include <klib.h>

static Context* (*user_handler)(Event, Context*) = NULL;


Context* __am_irq_handle(Context *c) {
  if (user_handler) {
    Event ev = {0};
    // printf("c->mcause %d\n",c->mcause);
    switch (c->mcause) {
      case -1: ev.event = EVENT_YIELD; break;   // yield
      // case  0: ev.event = EVENT_SYSCALL; break; // exit
      // case  1: ev.event = EVENT_SYSCALL; break; // yield
      // case  2: ev.event = EVENT_SYSCALL; break; // open
      // case  3: ev.event = EVENT_SYSCALL; break; // read
      // case  4: ev.event = EVENT_SYSCALL; break; // write
      // case  7: ev.event = EVENT_SYSCALL; break; // close
      // case  8: ev.event = EVENT_SYSCALL; break; // lseek
      // case  9: ev.event = EVENT_SYSCALL; break; // brk
      case 11: ev.event = EVENT_YIELD; break;
      // case 19: ev.event = EVENT_SYSCALL; break; // gettimeofday
      default: ev.event = EVENT_SYSCALL; break;
    }

    c = user_handler(ev, c);
    assert(c != NULL);
  }
  c->mepc = c->mepc + 4;
  return c;
}

extern void __am_asm_trap(void);

bool cte_init(Context*(*handler)(Event, Context*)) {
  // initialize exception entry
  asm volatile("csrw mtvec, %0" : : "r"(__am_asm_trap));

  // register event handler
  user_handler = handler;

  return true;
}

Context *kcontext(Area kstack, void (*entry)(void *), void *arg) {
  printf("kstack.end:%p,kstack.start:%p,size:%d\n", kstack.end, kstack.start, kstack.end - kstack.start);
  Context* p = (Context*)(kstack.end - sizeof(Context));
  memset(p, 0, sizeof(Context));

  printf("Context size:%d\n", (kstack.end - (void*)p));
  assert((kstack.end - (void*)p) == sizeof(Context));

  printf("entry:%p\n", entry);
  p->mepc = (uintptr_t)entry;   // mret 后，进入 entry
  p->gpr[10] = (uintptr_t)arg; // a0 传惨,暂定为一个字符串


  p->mstatus = 0x1800; // for difftest

  return p;
}

void yield() {
#ifdef __riscv_e
  asm volatile("li a5, -1; ecall");
#else
  asm volatile("li a7, 11; ecall");
#endif
}

bool ienabled() {
  return false;
}

void iset(bool enable) {
}
