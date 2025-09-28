ENTRY(_start)

MEMORY {
  sram  (rwx) : ORIGIN = 0x0f000000, LENGTH = 8K
  mrom  (r x) : ORIGIN = 0x20000000, LENGTH = 4K
  flash (rwx) : ORIGIN = 0x30000000, LENGTH = 16M
  psram (rwx) : ORIGIN = 0x80000000, LENGTH = 4M
  sdram (rwx) : ORIGIN = 0xa0000000, LENGTH = 64M
}

SECTIONS {
  _sram_start = ORIGIN(sram);
  _sram_end   = _sram_start + LENGTH(sram);

  _flash_start = ORIGIN(flash);
  _flash_end   = _flash_start + LENGTH(flash);

  _sdram_start = ORIGIN(sdram);
  _sdram_end   = _sdram_start + LENGTH(sdram);

  . = _flash_start;

  /* 启动代码放 flash */
  .bl.f : ALIGN(4) {
    *(.bl.f*)
    . = ALIGN(4);
  } > flash

  /* 一部分小代码放 SRAM */
  .bl.s : ALIGN(4) {
    _bl_s = .;
    *(.bl.s*)
    . = ALIGN(4);
    _ebl_s = .;
  } > sram AT> flash
  _bl_s_load = LOADADDR(.bl.s);

  /* text 段放 SDRAM，加载自 flash */
  .text : ALIGN(4) {
    _text = .;
    *(.text*)
    . = ALIGN(4);
    _etext = .;
  } > sdram AT> flash
  _text_load  = LOADADDR(.text);

  /* rodata 段放 SDRAM，加载自 flash */
  .rodata : ALIGN(4) {
    _rodata = .;
    *(.rodata*)
    *(.srodata*)
    . = ALIGN(4);
    _erodata = .;
  } > sdram AT> flash
  _rodata_load  = LOADADDR(.rodata);

  /* data 段放 SDRAM，加载自 flash */
  .data : ALIGN(4) {
    _data = .;
    *(.data*)
    *(.sdata*)
    . = ALIGN(4);
    _edata = .;
  } > sdram AT> flash
  _data_load = LOADADDR(.data);

  /* bss 段放 SDRAM */
  .bss (NOLOAD) : ALIGN(4) {
    _bss_start = .;
    *(.bss*)
    *(.sbss*)
    *(.scommon)
    . = ALIGN(4);
    _ebss = .;
  } > sdram

  PROVIDE(end = .);
  _end = .;

  . = ALIGN(8);
  _heap_start = _end;

  /* 栈放在 SRAM */
  .stack (NOLOAD) : ALIGN(8) {
    _stack_top = .;
    . += 2K;   /* 栈大小，你可以自己调 */
    _stack_pointer = .;
  } > sram
}
