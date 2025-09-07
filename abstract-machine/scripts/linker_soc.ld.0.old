ENTRY(_start)
/*ENTRY*/
PHDRS { text PT_LOAD; data PT_LOAD;bss PT_LOAD; }
MEMORY {
  mrom : ORIGIN = 0x20000000, LENGTH = 4K
  sram : ORIGIN = 0x0f000000, LENGTH = 8K
}
SECTIONS {
  . = ORIGIN(mrom);
  .text : {
    *(entry)
    *(.text*)
  . = ALIGN(0x4);
  } > mrom : text
  /* etext = .; */
  _etext = .;
  .rodata : {
    *(.rodata*)
    . = ALIGN(0x10);
  }> mrom
  _data_section_src = LOADADDR(.data);
  .data : {
    _data_section_start = .;
    *(.data)
    *(.data.*)
    *(.sdata)
    *(.sdata.*)
    _data_section_end = .;
  }> sram AT> mrom : data
  /* edata = .; */
  /* _data = .; */
  .bss : {
	_bss_start = .;
    *(.bss*)
    *(.sbss*)
    *(.scommon)
	_bss_end = .;
  }> sram AT> mrom : bss

  . = ORIGIN(sram);
  . +=  _data_section_end - _bss_end;
  _stack_top = ALIGN(0x10);
  /* _stack_top = .; */
  . = _stack_top + 0x1000;
  _stack_pointer = .;
  /* end = .; */
  /* _end = .; */
  _heap_start = ALIGN(0x10);
  /* _heap_start = .; */
}
