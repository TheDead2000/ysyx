ENTRY(_start)
/*ENTRY*/
PHDRS { fsbl PT_LOAD;ssbl PT_LOAD;text PT_LOAD;rodata PT_LOAD;data_ext PT_LOAD;data PT_LOAD;bss_ext PT_LOAD;bss PT_LOAD;  }
MEMORY {
  mrom  : ORIGIN = 0x20000000, LENGTH = 4K
  sram  : ORIGIN = 0x0f000000, LENGTH = 8K
  flash : ORIGIN = 0x30000000, LENGTH = 16M
  psram : ORIGIN = 0x80000000, LENGTH = 4M
  sdram : ORIGIN = 0xa0000000, LENGTH = 32M
}
SECTIONS {
  . = ORIGIN(flash);
  /* 一级加载 */
  .fsbl : {
  . = ALIGN(8);
    *(entry)
    *(.fsbl)
  . = ALIGN(8);
  }> flash : fsbl
  /* 二级加载 */
  _ssbl_section_src = LOADADDR(.ssbl);
  .ssbl : {
  _ssbl_section_start = .;
  . = ALIGN(8);
    *(.ssbl)
  _ssbl_section_end = .;
  . = ALIGN(8);
  }> sram AT> flash : ssbl
  /* text段，ssbl复制的起点 */
  _text_section_src = LOADADDR(.text);
  .text : {
  . = ALIGN(8);
  _text_section_start = .;
    *(.text*)
    *(.text.*)
  . = ALIGN(8);
  } > sdram AT> flash : text
  _etext = .;
  .rodata : {
  . = ALIGN(8);
    *(.rodata*)
    *(.rodata.*)
    *(.srodata.*)
  . = ALIGN(8);
  }> sdram AT> flash : rodata

  _data_section_src = LOADADDR(.data);
  .data : {
  . = ALIGN(8);
    _data_section_start = .;
    *(.data)
    *(.data.*)
    *(.sdata)
    *(.sdata.*)
  . = ALIGN(8);
    _data_section_end = .;
  }> sdram AT> flash : data

  .bss : {
	_bss_start = .;

  . = ALIGN(8);
    *(.bss*)
    *(.bss.*)
    *(.sbss*)
    *(.scommon)
  . = ALIGN(8);
	_bss_end = .;
  }> sdram AT> flash : bss
  /* ssbl复制的终点 */

  /* 栈顶指针 */
  _stack_top = ORIGIN(sram);
  _stack_pointer = _stack_top + LENGTH(sram);

  /* 堆区 */
  . = ORIGIN(psram);
  _heap_start = . ;
  /* . += _bss_end - _text_section_start; */
  /* _heap_start = ALIGN(0x10); */
  . = ORIGIN(psram)+LENGTH(psram);
  _heap_end = . ;

}
