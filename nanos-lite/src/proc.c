#include "am.h"
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
    Log("Hello World from Nanos-lite with arg '%s' for the %dth time!", (char *)arg, j);
    j ++;
    yield();
  }
}
void context_uload(PCB *pcb, const char *filename, char *const argv[], char *const envp[]);
void context_kload(PCB *pcb, void *func,void*args);
void naive_uload(PCB *pcb, const char *filename);
void init_proc() {
  // char *test[] =  {"/bin/exec-test","--skip",NULL };

  Log("Initializing processes...");
  switch_boot_pcb();
  // naive_uload(NULL, "/bin/float");
  // context_kload(&pcb[0], hello_fun, "aaa");
  // context_kload(&pcb[1], hello_fun, "BBB");
  char *argv[] = {NULL};
  char *envp[] = {NULL};
  context_uload(&pcb[0], "/bin/menu", argv, envp);
  context_uload(&pcb[2], "/bin/hello", argv, envp);

  // yield();  
  // assert(0);
  // load program here
}
void execue_menu() {
  char *argv[] = {"/bin/menu", NULL};
  char *envp[] = {NULL};
  context_uload(&pcb[0], "/bin/menu", argv, envp);
  switch_boot_pcb();
  yield();
}
//when program calls Sys_Exit
void handle_exit() {
  current->active=false;
  Log("EXIT!");
  execue_menu();
  yield();
  // TODO: menu
}
// 创建B的上下文之后, 通过switch_boot_pcb()修改当前的current指针,
// 然后调用yield()来强制触发进程调度.
// 这样以后, A的执行流就不会再被调度, 等到下一次调度的时候, 就可以恢复并执行B了.
void handle_execve(const char *filename, char *const argv[], char *const envp[]) {
  context_uload(current, filename, argv, envp);
  switch_boot_pcb();
  yield();
}
uint32_t count = 0;
int prev_schedule = 0;
Context *schedule(Context *prev) {
  count++;
  // Log("SHEDULE,%x",current);
  int robin = 0;
  bool find = false;
  // find context,start robin
  // update Context *
  current->cp = prev;

  if (count % 1000 == 0 || !pcb[0].active) {
    // time reach or pcb[0] inactive
    robin = prev_schedule;
    for (int i = (robin + 1) % MAX_NR_PROC; true; i = (i + 1) % MAX_NR_PROC) {
      // find any thread available
      if (pcb[i].active) {
        robin = i;
        current = &pcb[i];
        prev_schedule = i;
        find = true;
        break;
      }
      // if not found any thread available
      if (robin++ > MAX_NR_PROC) {
        robin = 0;
        find=false;
        break;
      }
    }
  } else {
    robin = 0;
    current = &pcb[0];
    find=true;
  }
  //Log("GOTO:%d",robin);
  // if(pcb[robin].cp!=prev)
  // Log("goto:%d-%x-%x",robin,pcb[robin].cp,pcb[robin].cp->mepc);
  if (!find) {
    Log("INFO:NoThread Found,return TO Main");
    switch_boot_pcb();
    // current=&pcb_boot;
    return pcb_boot.cp;
  }
  // return prev;
  return pcb[robin].cp;
}
