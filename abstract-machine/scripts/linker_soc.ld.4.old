ENTRY(_start)
/*ENTRY*/
/* PHDRS { bl PT_LOAD;text PT_LOAD;rodata PT_LOAD;data_ext PT_LOAD;data PT_LOAD;bss_ext PT_LOAD;bss PT_LOAD;  } */
MEMORY {
  mrom  : ORIGIN = 0x20000000, LENGTH = 4K
  sram  : ORIGIN = 0x0f000000, LENGTH = 8K
  flash : ORIGIN = 0x30000000, LENGTH = 16M
  psram : ORIGIN = 0x80000000, LENGTH = 4M
}
SECTIONS {
  . = ORIGIN(flash);
  .bl : {
  . = ALIGN(4);
    *(entry)
    *(.bl)
  . = ALIGN(4);
  }> flash 
  _text_section_src = .;
  .text : {
  . = ALIGN(4);
  _text_section_start = .;
    *(.text*)
    /* *(.text.*) */
  . = ALIGN(4);
  } > psram AT> flash
    /* . = ALIGN(0x10); */
  _etext = .;
  .rodata : {
  . = ALIGN(4);
    *(.rodata*)
    *(.rodata.*)
    *(.srodata.*)
  . = ALIGN(4);
  }> psram AT> flash
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
  }> psram AT> flash
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
  }> psram AT> flash 
  .bss.extra : {
    . = ALIGN(8);
    __am_apps_bss_start = .;
    *(__am_apps.bss*)
    *(__am_apps.sbss*)
    *(__am_apps.scommon*)
    __am_apps_bss_end = .;
    . = ALIGN(8);
  }> psram AT> flash 
  .bss : {
  . = ALIGN(4);
	_bss_start = .;
    *(.bss*)
    *(.bss.*)
    *(.sbss*)
    *(.scommon)
  . = ALIGN(4);
	_bss_end = .;
  }> psram AT> flash
  
  _stack_top = ORIGIN(sram);
  _stack_pointer = _stack_top + LENGTH(sram);

  . = ORIGIN(psram);
  . += _bss_end - _text_section_start;
  _heap_start = ALIGN(0x10);
  _pmem_start = . ;

}
