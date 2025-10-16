#include <am.h>
#include <stdio.h>
#include <klib.h>

int main() {
  // const char *str = "hello,world!\n";
  // putch('h');
  // putch('e');
  // putch('l');
  // putch('l');
  // putch('o');
  // putch(',');
  // putch('w');
  // putch('o');
  // putch('r');
  // putch('l');
  // putch('d');
  // putch('\n');
  // printf("%s",str);
  // printf("%s",str);
  static const char *p = "help\ndate\nversion\nfree\nps\npwd\nls\nmemtrace\nmemcheck\nutest_list\n";
  while((*p) != '\0')
  printf("get ch %c \n",(*p++));
  while(1);
  return 0;
}
// int main() {
    
//     // 原来的测试代码
//     const char *str = "hello";
//     for(int i = 0; i < 5; i++) {
//         putch(str[i]);
//         putch('|');
//     }
//     return 0;
// }
