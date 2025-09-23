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

  .text : {
    *(entry)
    *(.text .text.*)
  } > MROM

  .data : {
    *(.data .data.*)
    *(.sdata .sdata.*)
  } > SRAM

  .bss : {
    *(.bss .bss.*)
    *(.sbss .sbss.*)
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