OUTPUT_ARCH("riscv")
ENTRY(_start)

MEMORY {
  flash (rx)   : ORIGIN = 0x30000000, LENGTH = 16M
  SRAM (rwx)   : ORIGIN = 0x0f000000, LENGTH = 8K
  psram (rwx)  : ORIGIN = 0x80000000, LENGTH = 4M
}

SECTIONS {
  _psram_start = ORIGIN(psram);
  _psram_end = _psram_start + LENGTH(psram);

  /* 代码段和只读数据段放在flash中 */
  .text : {
    *(entry)
    *(.text .text.*)
  } > flash

  .rodata : {
    *(.rodata .rodata.*)
    *(.srodata .srodata.*)
  } > flash

  /* 数据段：VMA在SRAM中，LMA在flash中 */
  .data : ALIGN(4) {
    _data_vma_start = .;    /* 数据段在SRAM中的起始地址(VMA) */
    *(.data .data.*)
    *(.sdata .sdata.*)
    _data_vma_end = .;      /* 数据段在SRAM中的结束地址(VMA) */
  } > SRAM AT> flash

  _data_lma_start = LOADADDR(.data);  /* 数据段在flash中的起始地址(LMA) */
  _data_lma_end = _data_lma_start + SIZEOF(.data);

  /* BSS段：在SRAM中 */
  .bss (NOLOAD) : ALIGN(4) {
    _bss_start = .;
    *(.bss .bss.*)
    *(.sbss .sbss.*)
    *(COMMON)
    _bss_end = .;
  } > SRAM

  _heap_start = _psram_start;

  /* 栈放在PSRAM中（避免SRAM溢出） */
  .stack (NOLOAD) : ALIGN(8) {
    _stack_top = .;
    . += 4K;  /* 栈大小4KB */
    . = ALIGN(8);
    _stack_pointer = .;
  } > SRAM
}