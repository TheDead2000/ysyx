ENTRY(_start)
/*ENTRY*/
PHDRS { text PT_LOAD; data PT_LOAD;bss PT_LOAD; }
MEMORY {
  mrom : ORIGIN = 0x20000000, LENGTH = 4K
  sram : ORIGIN = 0x0f000000, LENGTH = 8K
  flash : ORIGIN = 0x30000000, LENGTH = 16M
}
SECTIONS {
  . = ORIGIN(flash);
  .text : {
    *(entry)
    *(.text*)
  . = ALIGN(0x4);
  } > flash : text
  /* etext = .; */
  _etext = .;
  .rodata : {
    *(.rodata*)
    . = ALIGN(0x10);
  }> flash
  _data_section_src = LOADADDR(.data);
  .data : {
    _data_section_start = .;
    *(.data)
    *(.data.*)
    *(.sdata)
    *(.sdata.*)
    _data_section_end = .;
  }> sram AT> flash : data
  /* edata = .; */
  /* _data = .; */
  .bss : {
	_bss_start = .;
    *(.bss*)
    *(.sbss*)
    *(.scommon)
	_bss_end = .;
  }> sram AT> flash : bss
  . = ORIGIN(sram);
  . +=  _data_section_end - _bss_end;
  _stack_top = ALIGN(0x4);
  . = ORIGIN(sram) + LENGTH(sram);
  /* . = _stack_top + 0x1500; */
  _stack_pointer = .;
  /* end = .; */
  /* _end = .; */
  /* _heap_start = ALIGN(0x10);
  _pmem_start = .;
  _entry_offset = 0; */

  /* _heap_start = .; */
}
