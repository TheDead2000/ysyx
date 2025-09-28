extern unsigned char _data_load[];
extern unsigned char _edata_load[];
extern unsigned char _data[];
extern unsigned char _edata[];

extern unsigned char _rodata_load[];
extern unsigned char _erodata_load[];
extern unsigned char _rodata[];
extern unsigned char _erodata[];

extern unsigned char _bss_start[];
extern unsigned char _ebss[];

void _start_c(void) {
    unsigned char *src, *dst;

    // 拷贝 .data 段 (flash -> sdram)
    src = _data_load;
    dst = _data;
    while (dst < _edata) {
        *dst++ = *src++;
    }

    // 拷贝 .rodata 段 (flash -> sdram)
    src = _rodata_load;
    dst = _rodata;
    while (dst < _erodata) {
        *dst++ = *src++;
    }

    // 清零 .bss 段
    dst = _bss_start;
    while (dst < _ebss) {
        *dst++ = 0;
    }

    extern int main(void);
    main();   // 跳到 main
}
