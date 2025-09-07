#ifndef AM_H__
#define AM_H__
//am的所有API!!!
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include ARCH_H // this macro is defined in $CFLAGS
                // examples: "arch/x86-qemu.h", "arch/native.h", ...

// Memory protection flags
#define MMAP_NONE  0x00000000 // no access
#define MMAP_READ  0x00000001 // can read
#define MMAP_WRITE 0x00000002 // can write

// Memory area for [@start, @end)
typedef struct {
  void *start, *end;
} Area;

// Arch-dependent processor context
typedef struct Context Context;

// An event of type @event, caused by @cause of pointer @ref
typedef struct {
  enum {
    EVENT_NULL = 0,
    EVENT_YIELD, EVENT_SYSCALL, EVENT_PAGEFAULT, EVENT_ERROR,
    EVENT_IRQ_TIMER, EVENT_IRQ_IODEV,
  } event;
  uintptr_t cause, ref;
  const char *msg;
} Event;//事件

// A protected address space with user memory @area
// and arch-dependent @ptr
//pgsize用于指示页面的大小, area表示虚拟地址空间中用户态的范围, ptr是一个ISA相关的地址空间描述符指针, 用于指示具体的映射.
typedef struct {
  int pgsize;
  Area area;
  void *ptr;
} AddrSpace;

#ifdef __cplusplus
extern "C" {
#endif

// ----------------------- TRM: Turing Machine -----------------------
extern   Area        heap;
void     putch       (char ch);
void     halt        (int code) __attribute__((__noreturn__));

// -------------------- IOE: Input/Output Devices --------------------
bool     ioe_init    (void);
void     ioe_read    (int reg, void *buf);
void     ioe_write   (int reg, void *buf);
#include "amdev.h"

// ---------- CTE: Interrupt Handling and Context Switching ----------
bool     cte_init    (Context *(*handler)(Event ev, Context *ctx));//用于进行CTE相关的初始化操作. 其中它还接受一个来自操作系统的事件处理回调函数的指针, 当发生事件时, CTE将会把事件和相关的上下文作为参数, 来调用这个回调函数, 交由操作系统进行后续处理.
void     yield       (void);//用于进行自陷操作, 会触发一个编号为EVENT_YIELD事件. 不同的ISA会使用不同的自陷指令来触发自陷操作
bool     ienabled    (void);
void     iset        (bool enable);
Context *kcontext    (Area kstack, void (*entry)(void *), void *arg);
//创建内核线程-kstack是栈的范围, entry是内核线程的入口, arg则是内核线程的参数. 要求内核线程不能从entry返回,

// ----------------------- VME: Virtual Memory -----------------------
bool     vme_init    (void *(*pgalloc)(int), void (*pgfree)(void *));
void     protect     (AddrSpace *as);
void     unprotect   (AddrSpace *as);
void     map         (AddrSpace *as, void *vaddr, void *paddr, int prot);
Context *ucontext    (AddrSpace *as, Area kstack, void *entry);

// ---------------------- MPE: Multi-Processing ----------------------
bool     mpe_init    (void (*entry)());
int      cpu_count   (void);
int      cpu_current (void);
int      atomic_xchg (int *addr, int newval);

#ifdef __cplusplus
}
#endif

#endif
