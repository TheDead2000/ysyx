ENTRY(_start)
/*ENTRY*/
PHDRS { fsbl PT_LOAD;ssbl PT_LOAD;text PT_LOAD;rodata PT_LOAD;data PT_LOAD;bss PT_LOAD;  }
MEMORY {
  mrom  : ORIGIN = 0x20000000, LENGTH = 4K
  sram  : ORIGIN = 0x0f000000, LENGTH = 8K
  flash : ORIGIN = 0x30000000, LENGTH = 16M
  psram : ORIGIN = 0x80000000, LENGTH = 4M
}
SECTIONS {
  . = ORIGIN(flash);
  /* 一级加载 */
  .fsbl : {
  . = ALIGN(4);
    *(entry)
    *(.fsbl)
  . = ALIGN(4);
  }> flash : fsbl
  /* 二级加载 */
  _ssbl_section_src = LOADADDR(.ssbl);
  .ssbl : {
  _ssbl_section_start = .;
  . = ALIGN(4);
    *(.ssbl)
  _ssbl_section_end = .;
  . = ALIGN(4);
  }> sram AT> flash : ssbl
  /* text段，ssbl复制的起点 */
  _text_section_src = LOADADDR(.text);
  .text : {
  . = ALIGN(4);
  _text_section_start = .;
    *(.text*)
    *(.text.*)
  . = ALIGN(4);
  } > psram AT> flash : text
  _etext = .;
  .rodata : {
  . = ALIGN(4);
    *(.rodata*)
    *(.rodata.*)
    *(.srodata.*)
  . = ALIGN(4);
  }> psram AT> flash : rodata
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
  }> psram AT> flash : data
  .bss : {
    _bss_start = . ;
  . = ALIGN(4);
    *(.bss*)
    *(.bss.*)
    *(.sbss*)
    *(.scommon)
  . = ALIGN(4);
	_bss_end = .;
  }> psram AT> flash : bss
  /* ssbl复制的终点 */

  /* 栈顶指针 */
  _stack_top = ORIGIN(sram);
  _stack_pointer = _stack_top + LENGTH(sram);

  /* 堆区 */
  . = ORIGIN(psram);
  . += _bss_end - _text_section_start;
  _heap_start = ALIGN(0x10);
  _pmem_start = . ;

}
