#include <proc.h>
#include <common.h>
#define MAX_NR_PROC 4

static PCB pcb[MAX_NR_PROC] __attribute__((used)) = {};
static PCB pcb_boot = {};
PCB *current = NULL;

void switch_boot_pcb() {
  current = &pcb_boot;
}

void hello_fun(void *arg) {
  int j = 1;
  while (1) {
    Log("Hello World from Nanos-lite with arg '%p' for the %dth time!", (uintptr_t)arg, j);
    j ++;
    yield();
  }
}

void init_proc() {

  switch_boot_pcb();

  Log("Initializing processes...");
  context_kload(&pcb[0], hello_fun, "A");
  context_kload(&pcb[1], hello_fun, "B");

  // load program here
  // naive_uload(NULL, "/bin/menu");
}

Context* schedule(Context *prev) {
// save the context pointer
printf("schedule prev:%p\n", prev);
current->cp = prev;

// switch between pcb[0] and pcb[1]
current = (current == &pcb[0] ? &pcb[1] : &pcb[0]);

// then return the new context
return current->cp;

}
