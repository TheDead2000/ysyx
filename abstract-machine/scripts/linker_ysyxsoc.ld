OUTPUT_ARCH("riscv")
ENTRY(_start)

MEMORY {
  MROM (rx) : ORIGIN = 0x20000000, LENGTH = 64K
  SRAM (rwx) : ORIGIN = 0x0f000000, LENGTH = 8K
  psram (rwx) : ORIGIN = 0x80000000, LENGTH = 4M
}

SECTIONS {
  _psram_start = ORIGIN(psram);
  _psram_end = _psram_start + LENGTH(psram);

  /* 代码段放在MROM中 */
  .text : {
    *(entry)
    *(.text .text.*)
  } > MROM

  /* 只读数据段放在MROM中 */
  .rodata : {
    *(.rodata .rodata.*)
    *(.srodata .srodata.*)
  } > MROM

  /* 数据段：VMA在SRAM中，LMA在MROM中 */
  .data : ALIGN(4) {
    _data_vma_start = .;    /* 数据段在SRAM中的起始地址(VMA) */
    *(.data .data.*)
    *(.sdata .sdata.*)
    _data_vma_end = .;      /* 数据段在SRAM中的结束地址(VMA) */
  } > SRAM AT> MROM

  _data_lma_start = LOADADDR(.data);  /* 数据段在MROM中的起始地址(LMA) */
  _data_lma_end = _data_lma_start + SIZEOF(.data);  /* 数据段在MROM中的结束地址(LMA) */

  /* BSS段：在SRAM中，不需要加载内容 */
  .bss (NOLOAD) : ALIGN(4) {
    _bss_start = .;
    *(.bss .bss.*)
    *(.sbss .sbss.*)
    *(COMMON)
    _bss_end = .;
  } > SRAM

  _heap_start = _psram_start;

  /* 设置栈顶指针到SRAM末尾 */
  .stack (NOLOAD) : ALIGN(8) {
    _stack_top = .;

    . += _stack_size;

    . = ALIGN(8);
    _stack_pointer = .;
  } > SRAM
}