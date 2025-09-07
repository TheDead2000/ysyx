#include <am.h>
#include <unistd.h>

Area heap;

void putch(char ch) {
  // TODO!!!!
  write(1,&ch,1);
}

void halt(int code) {
  _exit(code);
}
