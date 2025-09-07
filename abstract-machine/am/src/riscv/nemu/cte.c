#include <am.h>
#include <klib.h>
#include <riscv/riscv.h>

// func in vme.c ,切换地址空间描述符指针
// TODO:为什么不直接在Context切换中切换?
void __am_get_cur_as(Context *c);
void __am_switch(Context *c);

#define IRQ_TIMER 0x80000007 // for riscv32 TODO:WHY?

static Context *(*user_handler)(Event, Context *) = NULL;
// AM的Wrapper-Func,根据mcause 选择event
Context *__am_irq_handle(Context *c) {
  __am_get_cur_as(c);
  if (user_handler) {
    Event ev = {0};
    switch (c->mcause) {
      // default: ; ev.event = EVENT_YIELD; break;
      // TODO:: case 0x0: EVENT_SYSCALL
    case 0xb:
    case 0x8:
      c->mepc += 4;
#ifdef __riscv_e
      ev.event = c->gpr[15] == -1 ? EVENT_YIELD : EVENT_SYSCALL;
#else
      ev.event = c->gpr[17] == -1 ? EVENT_YIELD : EVENT_SYSCALL;
#endif
      break;
    case IRQ_TIMER:
      // c->mepc += 4;
      ev.event = EVENT_IRQ_TIMER;
      break;
    default:
      ev.event = EVENT_ERROR;
      break;
    }

    c = user_handler(ev, c);
    assert(c != NULL);
  }
  __am_switch(c);
  return c;
}

extern void __am_asm_trap(void);

bool cte_init(Context *(*handler)(Event, Context *)) {
  // initialize exception entry
  asm volatile("csrw mtvec, %0" : : "r"(__am_asm_trap));
  // 这里是将变量__am_asm_trap的值写入RISC-V处理器的mtvec寄存器. "r"表示使用一个通用寄存器
  // mtvec(Machine Trap
  // Vector)寄存器用于存储陷阱向量的基地址，当处理器发生异常或中断时，会跳转到这个地址去执行相应的处理程序。

  // 在Trap.S中，会跳转到__am_irq_handle

  // enable interrupt
  // uint32_t mie = 0x8;
  // asm volatile(
  //     "csrr t0, mstatus  \n\t"  // 从 mtvec 读取值到 t0
  //     "or t0,t0, %0      \n\t"  // 对 t0 和输入操作数进行按位与操作
  //     "csrw mstatus, t0 \n\t" // 将 t0 的值写入 mstatus
  //     : 
  //     : "r" (mie)             // 输入操作数
  //     : "t0"                  // 破坏描述符，表示 t0 寄存器被修改
  // );


  // register event handler
  user_handler = handler;

  return true;
}

Context *kcontext(Area kstack, void (*entry)(void *), void *arg) {
  // store data and args as Context Struct on top of the stack
  Context *top = (Context *)(((void *)kstack.end) - sizeof(Context));
  top->gpr[10] = (uint32_t)arg;
  top->mepc = (uintptr_t)entry;
  top->mstatus = 0x1800;
  top->mcause = 0xb;
  return top;
  // return NULL;
}

void yield() {
#ifdef __riscv_e
  asm volatile("li a5, -1; ecall");
#else
  asm volatile("li a7, -1; ecall");
#endif
}

bool ienabled() { return false; }

void iset(bool enable) {}
