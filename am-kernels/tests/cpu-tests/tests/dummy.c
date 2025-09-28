#include <am.h>
#include <stdio.h>
#include <klib.h>
// char* str = "%shello,wolrd\n";
// int main() {
//   // putch('h');
//   // putch('e');
//   // putch('l');
//   // putch('l');
//   // putch('o');
//   // putch(',');
//   // putch('w');
//   // putch('o');
//   // putch('r');
//   // putch('l');
//   // putch('d');
//   // putch('\n');
//   // printf("%s",str);
//   printf("hello,world!\n");
//   return 0;
// }
int main() {
  // 直接测试内存访问
  const char *str = "hello,world!\n";
  
  // putch(str[0]);
  // putch('|');
  // putch(str[1]); 
  // putch('|');
  // putch(str[2]);
  // putch('|');
  // putch(str[3]);
  // putch('|');
  // putch(str[4]);
  // putch('\n');
  printf(str);
  return 0;
}