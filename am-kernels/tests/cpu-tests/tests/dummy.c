#include <am.h>
#include <stdio.h>
#include <klib.h>

void test_amoswap() {
    printf("Testing amoswap.w instruction (fixed version)...\n");
    
    // 初始化内存位置和寄存器值
    uint32_t memory_value = 0x12345678;
    uint32_t new_value = 0xABCDEF00;
    uint32_t old_value;
    
    printf("Initial memory value: 0x%x\n", memory_value);
    printf("New value to swap: 0x%x\n", new_value);
    
    // 使用正确的地址加载方式
    __asm__ volatile (
        "mv x16, %[addr]\n"           // 将内存地址移动到x16
        "mv x17, %[new_val]\n"        // 将新值移动到x17
        "amoswap.w %[old_val], x17, (x16)\n"  // 执行原子交换，结果保存到old_val
        : [old_val] "=r" (old_value)
        : [addr] "r" (&memory_value), [new_val] "r" (new_value)
        : "x16", "x17", "memory"
    );
    
    printf("After amoswap.w:\n");
    printf("Memory now contains: 0x%08X\n", memory_value);
    printf("Returned old value: 0x%08X\n", old_value);
}


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
  // static const char *p = "help\ndate\nversion\nfree\nps\npwd\nls\nmemtrace\nmemcheck\nutest_list\n";
  // while((*p) != '\0')
  // printf("get ch %c \n",(*p++));
  // while(1);
  test_amoswap();

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
