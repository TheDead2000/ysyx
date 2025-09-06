#include <stdint.h>
#include <stdlib.h>
#include <assert.h>

int main(int argc, char *argv[], char *envp[]);
extern char **environ;
void *_sbrk(intptr_t increment);
void call_main(uintptr_t *args) {
  // char *empty[] =  {NULL };
  // environ = empty;
  _sbrk(0);//init max_brk
  uint32_t argc = *(uint32_t *)args;
  char **argv = (char **)((char* *)args + 1);
  char **envp = (char **)((char **)args + 2 + argc);
  exit(main(argc, argv, envp));
  assert(0);
}
