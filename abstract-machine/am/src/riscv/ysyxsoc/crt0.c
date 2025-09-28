#include <stdint.h>

// 链接脚本提供的符号
extern unsigned char _data_load[], _data[], _edata[];
extern unsigned char _rodata_load[], _rodata[], _erodata[];
extern unsigned char _bss_start[], _ebss[];

// _start_c 保证驻留在 flash
__attribute__((section(".startup")))
void _start_c(void) {
    unsigned char *src, *dst;

    // 1. 拷贝 .data 段 (flash -> sdram)
    src = _data_load;
    dst = _data;
    while (dst < _edata) {
        *dst++ = *src++;
    }

    // 2. 拷贝 .rodata 段 (flash -> sdram)
    src = _rodata_load;
    dst = _rodata;
    while (dst < _erodata) {
        *dst++ = *src++;
    }

    // 3. 清零 .bss 段
    dst = _bss_start;
    while (dst < _ebss) {
        *dst++ = 0;
    }

    // 4. 跳到 main
    extern int main(void);
    int ret = main();

    // 5. main 返回则死循环
    while (1) {
        (void)ret;
    }
}
