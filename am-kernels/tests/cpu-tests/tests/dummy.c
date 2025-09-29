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
// void debug_psram_access() {
//     // 强制访问 PSRAM 来测试
//     volatile uint32_t *test_ptr = (volatile uint32_t*)0x80000000;
//     uint32_t test_value = *test_ptr;  // 这会触发 psram_read
    
//     // 尝试写入
//     *test_ptr = 0x12345678;  // 这会触发 psram_write
// }
// void debug_etext_access() {
//     // 直接访问 _etext 段的字符串
//     extern char _etext[];
//     const char *str = _etext;
    
//     // 输出字符串地址
//     putch('E'); putch('T'); putch(':'); 
//     uint32_t addr = (uint32_t)str;
//     for(int i = 7; i >= 0; i--) {
//         putch("0123456789ABCDEF"[(addr >> (i*4)) & 0xF]);
//     }
//     putch('|');
    
//     // 逐个字符访问并显示
//     for(int i = 0; i < 5; i++) {
//         putch('[');
//         putch('0' + i);
//         putch(']');
//         putch(':');
//         putch(str[i]);
//         putch('|');
//     }
//     putch('\n');
// }
// void debug_memory_access_pattern() {
//     const char *str = "hello";
    
//     // 测试不同的访问模式
//     putch('D'); putch('1'); putch(':');
//     // 模式1：直接数组访问
//     for(int i = 0; i < 5; i++) {
//         putch(str[i]);
//     }
//     putch('|');
    
//     putch('D'); putch('2'); putch(':');
//     // 模式2：指针访问
//     const char *p = str;
//     for(int i = 0; i < 5; i++) {
//         putch(*p++);
//     }
//     putch('|');
    
//     putch('D'); putch('3'); putch(':');
//     // 模式3：强制字节访问
//     for(int i = 0; i < 5; i++) {
//         char c;
//         // 使用 volatile 和内联汇编确保字节访问
//         asm volatile ("lbu %0, %1" : "=r"(c) : "m"(str[i]));
//         putch(c);
//     }
//     putch('\n');
// }

// int main() {
//     debug_etext_access();
//     debug_memory_access_pattern();
//     return 0;
// }
// int main() {
    
//     // 原来的测试代码
//     const char *str = "hello";
//     for(int i = 0; i < 5; i++) {
//         putch(str[i]);
//         putch('|');
//     }
//     return 0;
// }

void test_sdram_byte_access() {
    volatile uint8_t *byte_ptr = (volatile uint8_t*)0xa0000000;
    
    // 测试字节写入和读取
    byte_ptr[0] = 'A';
    byte_ptr[1] = 'B'; 
    byte_ptr[2] = 'C';
    byte_ptr[3] = 'D';
    
    // 读取并输出
    putch(byte_ptr[0]);
    putch('|');
    putch(byte_ptr[1]);
    putch('|');
    putch(byte_ptr[2]);
    putch('|');
    putch(byte_ptr[3]);
    putch('\n');
}

int main() {
    test_sdram_byte_access();
    return 0;
}

