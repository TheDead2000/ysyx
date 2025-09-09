#include <proc.h>

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
      if (j % 2000 == 0) {
        Log("Hello World from Nanos-lite with arg '%s' for the %dth time!", (char *)arg, j);
      }
    j ++;
    yield();
  }
}



void init_proc() {
  
  char *argv[] = {NULL};
  char *envp[] = {NULL};
    switch_boot_pcb();
  // context_uload(&pcb[0], "/bin/dummy", argv,envp);
  // context_uload(&pcb[1], "/bin/menu", argv, envp);
  context_kload(&pcb[0], hello_fun, "Kthread");
  // context_kload(&pcb[1], hello_fun, "Kthread2");
  // context_uload(&pcb[0], "/bin/hello", argv, envp);
  context_uload(&pcb[1], "/bin/menu", argv, envp);


  Log("Initializing processes...");

  // load program here
  // naive_uload(NULL, "/bin/menu");
}

Context* schedule(Context *prev) {
    // save the context pointer
    current->cp = prev;

    // always select pcb[0] as the new process
    //current = &pcb[0];
    static int turn = 1;
    if (turn % 3 == 0) {
        current = &pcb[0];
        turn = 0;
    } else 
        current = &pcb[1];
    //current = (current == &pcb[0] ? &pcb[1] : &pcb[0]);
    //printf("pcb address = %p, context address = %p\n", current, current->cp);
    // then return the new context
    turn++;
    return current->cp;
}


// 创建B的上下文之后, 通过switch_boot_pcb()修改当前的current指针,
// 然后调用yield()来强制触发进程调度.
// 这样以后, A的执行流就不会再被调度, 等到下一次调度的时候, 就可以恢复并执行B了.
void handle_execve(const char *filename, char *const argv[], char *const envp[]) {
  context_uload(current, filename, argv, envp);
  switch_boot_pcb();
  yield();
}