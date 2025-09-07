#include <am.h>
#include <klib-macros.h>
#include "../riscv.h"
#include <klib.h>

extern char _heap_start;
int main(const char *args);

extern char _pmem_start;
#define PMEM_SIZE (128 * 1024 * 1024)
#define PMEM_END  ((uintptr_t)&_pmem_start + PMEM_SIZE)

Area heap = RANGE(&_heap_start, PMEM_END);
#ifndef MAINARGS
#define MAINARGS ""
#endif
static const char mainargs[] = MAINARGS;

// #define SERIAL_PORT 0x10000000L

void putch(char ch) {//实现putch
  while((inb(SERIAL_PORT+5)&0x20) == 0);
  outb(SERIAL_PORT, ch);
}

void halt(int code) {
  // code=1;
  // 将code加载到寄存器a0中，然后执行ebreak
  __asm__ volatile(
      "mv a0, %0\n" // 将code加载到a0寄存器
      "ebreak\n"    // 触发ebreak指令
      :             // 没有输出操作数
      : "r"(code)  // 输入操作数，将code传递给寄存器a0
      : "a0"        // 告诉编译器a0寄存器将被修改
  );
  while (1);
}

extern unsigned char  _data_section_start,_data_section_end,_data_section_src,_bss_start,_bss_end;
void  bootloader() {
    unsigned char *src = &_data_section_src;
    unsigned char *dest = &_data_section_start;
    unsigned char *end = &_data_section_end;
    while (dest <= end) {
        *dest = *src;
        dest++;
        src++;
    }
    //初始化bss段
    unsigned char *bss_src = &_bss_start;
    unsigned char *bss_end = &_bss_end;
    while (bss_src <= bss_end) {
        *(bss_src++ )= 0;
    }
}
void init_uart(){
  outb(SERIAL_PORT+3,0x80);
  outb(SERIAL_PORT,0x10);   //写入Divisor Latch
  outb(SERIAL_PORT+1,0x00); 
  outb(SERIAL_PORT+3,0x03);
}


void print_welcome(){
  uint32_t ysyx, id;
  // csrrs a0, mvendorid, x0
  __asm__(
      "csrrs %0, mvendorid, x0"     // 复制ysyx
      : "=r"(ysyx)       
      :
      : "x0"             // 被修改的寄存器
  );
    __asm__(
      "csrrs %0, marchid, x0"     // 复制学号
      : "=r"(id)       
      :
      : "x0"             // 被修改的寄存器
  );

  printf("Hello from %c%c%c%c_%d! \nHave a good day! =ω= \n",(ysyx>>24)&0xff,(ysyx>>16)&0xff,(ysyx>>8)&0xff,(ysyx)&0xff,id);
}


void _trm_init() {
  init_uart();
  bootloader();
  print_welcome();
  int ret = main(mainargs);
  halt(ret);
}
