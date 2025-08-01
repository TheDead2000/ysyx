#include <common.h>
#include <proc.h>


extern void do_syscall(Context* c);

static Context* do_event(Event e, Context* c) {
  switch (e.event) {
  case EVENT_YIELD:
    // printf("do_event:EVENT_YIELD\n");
    break;
  case EVENT_SYSCALL:
    // printf("do_event:EVENT_SYSCALL\n");
    do_syscall(c);
    break;
  default: panic("Unhandled event ID = %d", e.event);
  }
  return c;
}

void init_irq(void) {
  Log("Initializing interrupt/exception handler...");
  cte_init(do_event);
}
