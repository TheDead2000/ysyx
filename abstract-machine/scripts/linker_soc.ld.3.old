ENTRY(_start)
/*ENTRY*/
PHDRS { data PT_LOAD;bss PT_LOAD;rodata PT_LOAD; text PT_LOAD; }
MEMORY {
  mrom (rx) : ORIGIN = 0x20000000, LENGTH = 4K
  sram (rwx) : ORIGIN = 0x0f000000, LENGTH = 8K
  flash (rx) : ORIGIN = 0x30000000, LENGTH = 16M
  psram (rwx) : ORIGIN = 0x80000000, LENGTH = 4M
}
SECTIONS {
  . = ORIGIN(flash);
  .bl : {
  . = ALIGN(4);
    *(entry)
    *(.bl)
  } > flash
  _text_section_src = .;
    . = ALIGN(4);
  .text : {
  . = ALIGN(4);
  _text_section_start = .;
    *(.text*)
  } > sram AT> flash : text
    /* . = ALIGN(0x10); */
  _etext = .;
  .rodata : {
  . = ALIGN(4);
    *(.rodata*)
    *(.srodata.*)
  . = ALIGN(4);
  }> sram AT> flash : rodata
  _data_section_src = LOADADDR(.data);
  .data : {
  . = ALIGN(4);
    _data_section_start = .;
    *(.data)
    *(.data.*)
    *(.sdata)
    *(.sdata.*)
  . = ALIGN(4);
    _data_section_end = .;
  }> sram AT> flash : data
  .bss : {
  . = ALIGN(4);
	_bss_start = .;
    *(.bss*)
    *(.sbss*)
    *(.scommon)
  . = ALIGN(4);
	_bss_end = .;
  }> sram AT> flash : bss
  
  . = ORIGIN(sram);
  _pmem_start = . ;
  . +=  _bss_end - _text_section_start;
  _stack_top = ALIGN(0x4);
  . = _stack_top + 0x1000;
  _stack_pointer = .;
  _heap_start = ALIGN(0x10);

}
