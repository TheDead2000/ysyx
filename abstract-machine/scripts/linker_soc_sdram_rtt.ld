ENTRY(_start)
/*ENTRY*/
PHDRS { fsbl PT_LOAD;ssbl PT_LOAD;text PT_LOAD;rodata PT_LOAD;data_ext PT_LOAD;data PT_LOAD;bss_ext PT_LOAD;bss PT_LOAD;  }
MEMORY {
  mrom  : ORIGIN = 0x20000000, LENGTH = 4K
  sram  : ORIGIN = 0x0f000000, LENGTH = 8K
  flash : ORIGIN = 0x30000000, LENGTH = 120M
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
  
  .data.extra : {
       /* section information for finsh shell */
    __fsymtab_start = .;
    KEEP(*(FSymTab))
    __fsymtab_end = .;
    . = ALIGN(8);
    __vsymtab_start = .;
    KEEP(*(VSymTab))
    __vsymtab_end = .;
    . = ALIGN(8);

    /* section information for initial. */
    . = ALIGN(8);
    __rt_init_start = .;
    KEEP(*(SORT(.rti_fn*)))
    __rt_init_end = .;
    . = ALIGN(8);

    __rt_utest_tc_tab_start = .;
    KEEP(*(UtestTcTab))
    __rt_utest_tc_tab_end = .;

    . = ALIGN(8);
    __am_apps_data_start = .;
    *(__am_apps.data*)
    *(__am_apps.sdata*)
    __am_apps_data_end = .;
    . = ALIGN(8);
  }> sdram AT> flash : data_ext
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
  .bss.extra : {
	_bss_start = .;
    . = ALIGN(8);
    __am_apps_bss_start = .;
    *(__am_apps.bss*)
    *(__am_apps.sbss*)
    *(__am_apps.scommon*)
    __am_apps_bss_end = .;
    . = ALIGN(8);
  }> sdram AT> flash : bss_ext
  .bss : {
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
  . = ORIGIN(psram)+LENGTH(psram);
  _heap_end = . ;

}
