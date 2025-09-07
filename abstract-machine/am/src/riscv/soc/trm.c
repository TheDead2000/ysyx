#include <am.h>
#include <klib-macros.h>
// #include "../riscv.h"
#include "../soc.h"
#include <klib.h>
#include <stdint.h>
__attribute__((noinline)) void check_ok(bool cond) {
  if (!cond)
    halt(1);
}

extern char _heap_start;
extern char _heap_end;
int main(const char *args);

// extern char _pmem_start;
// #define PMEM_SIZE (128 * 1024 * 1024)
// #define PMEM_END ((uintptr_t)&_pmem_start + PMEM_SIZE)

Area heap = RANGE(&_heap_start, &_heap_end);
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


void init_uart(){
  outb(SERIAL_PORT+3,0x80);
  outb(SERIAL_PORT,0x08);   //写入Divisor Latch
  outb(SERIAL_PORT+1,0x00);
  outb(SERIAL_PORT + 3, 0x03);
  // outb(SERIAL_PORT, 0x01);
}

// uint32_t to_sig(uint32_t val) {
//   uint32_t vals[] = {
//       0b0000001, 0b1001111, 0b0010010, 0b0000110, 0b1001100, 0b0100100,
//       0b0100000, 0b0001111, 0b0000000, 0b0000000, 0b0000100, 0b0001000,
//       0b1100000, 0b0110001, 0b1000010, 0b0110000, 0b0111000,
//   };
//   return vals[val & 0xf];
// }

void print_welcome(){
  uint32_t ysyx, id;
  // csrrs a0, mvendorid, x0
  __asm__(
      "csrrs %0, mvendorid, x0"     // 复制ysyx
      : "=r"(ysyx)       
      :
      : "x0"             // 被修改的寄存器
  );
  __asm__("csrrs %0, marchid, x0" // 复制学号
          : "=r"(id)
          :
          : "x0" // 被修改的寄存器
  );
  printf("Hello from %c%c%c%c_%d! \nHave a good day!\n",
         (ysyx >> 24) & 0xff, (ysyx >> 16) & 0xff, (ysyx >> 8) & 0xff,
         (ysyx)&0xff, id);
  // uint32_t sig_reg = 0;
  // for (int i = 0; i < 8; i++) {
  //   sig_reg=(sig_reg<<4)|(id>>)
  // }
  outl(0x10002008L,id);
}



void _trm_init() {
  init_uart();
  // _bootloader();
  print_welcome();
  // int ret = main(mainargs);
  int ret = main(mainargs);
  halt(ret);
}



extern unsigned char _text_section_start, _data_section_end, _text_section_src,
    _bss_start, _bss_end;


void check_func() {
  unsigned char *src = &_text_section_src;
  // unsigned char *src = (unsigned char *)0x30000000L;
  unsigned char *dest = &_text_section_start;
  unsigned char *end = &_data_section_end;
  while (dest <= end) {
    check_ok(*dest == *src);
    src++;
    dest++;
  }
}
void __attribute__((section(".ssbl"))) _sbootloader() {
  // if (&_text_section_src != (unsigned char *)0x30000000L)
  //   halt(1);
  uint32_t *src = (uint32_t *)&_text_section_src;
  // unsigned char *src = (unsigned char *)0x30000000L;
  uint32_t *dest = (uint32_t *)&_text_section_start;
  uint32_t *end = (uint32_t *)&_data_section_end;
  while (dest <= end) {
    *dest = *src;
    dest++;
    src++;
  }
  //初始化bss段
  unsigned char *bss_src = &_bss_start;
  unsigned char *bss_end = &_bss_end;
  while (bss_src <= bss_end) {
    *(bss_src++) = 0;
  }
  // check_func();
  _trm_init();
}

extern unsigned char _ssbl_section_start, _ssbl_section_end, _ssbl_section_src;
void __attribute__((section(".fsbl"))) _fbootloader() {
  unsigned char *src = &_ssbl_section_src;
  unsigned char *dest = &_ssbl_section_start;
  unsigned char *end = &_ssbl_section_end;
  while (dest <= end) {
    *dest = *src;
    dest++;
    src++;
  }
  _sbootloader();
}
//可以通过extern这个变量来判断是不是soc
bool is_soc = true;
