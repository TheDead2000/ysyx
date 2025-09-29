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
// int main() {
//   // 直接测试内存访问
//   const char *str = "hello,world!\n";
  
//   // putch(str[0]);
//   // putch('|');
//   // putch(str[1]); 
//   // putch('|');
//   // putch(str[2]);
//   // putch('|');
//   // putch(str[3]);
//   // putch('|');
//   // putch(str[4]);
//   // putch('\n');
//   printf(str);
//   return 0;
// }

void test_memory_layout() {
    // 测试字符串地址
    const char *test_str = "hello,world!\n";
    
    putch('@');
    // 打印字符串地址
    uint32_t addr = (uint32_t)test_str;
    for(int i = 7; i >= 0; i--) {
        putch("0123456789ABCDEF"[(addr >> (i*4)) & 0xF]);
    }
    putch(':');
    
    // 测试访问
    for(int i = 0; i < 5; i++) {
        putch(test_str[i]);
        putch('|');
    }
    putch('\n');
}
void debug_psram_access() {
    // 强制访问 PSRAM 来测试
    volatile uint32_t *test_ptr = (volatile uint32_t*)0x80000000;
    uint32_t test_value = *test_ptr;  // 这会触发 psram_read
    
    // 尝试写入
    *test_ptr = 0x12345678;  // 这会触发 psram_write
}

int main() {
    // 测试 PSRAM 访问
    debug_psram_access();
    
    // 原来的测试代码
    const char *str = "hello";
    for(int i = 0; i < 5; i++) {
        putch(str[i]);
        putch('|');
    }
    return 0;
}
// int main() {
//     test_memory_layout();
//     printf("hello,world!\n");
//     return 0;
// }