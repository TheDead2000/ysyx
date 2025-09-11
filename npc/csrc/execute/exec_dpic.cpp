// #define NPC
#include "verilator_wrapper.h"
#include "regs.h"
#include "isa.h"
#include "common.h"
#include "diftest.h"
// #include "ydb_all.h"
#include "mem.h"
#include "trace.h"


extern "C" void print_char(char w_char) {
  printf("%c", w_char);
  fflush(stdout);
}

extern "C" void call_ebreak() {
  if (nemu_state.state ==
      NEMU_END) // Prevent_Display_Twice!!!!!
    return;
  Log("Ebreak Called!!");
  uint32_t regs_2_value = REG_10_STRUCT;
  uint32_t pc = PC_STRUCT;

  Log("YDB: %s at pc = " FMT_WORD,
      ((regs_2_value == 0 ? ANSI_FMT("HIT GOOD TRAP", ANSI_FG_GREEN)
                          : ANSI_FMT("HIT BAD TRAP", ANSI_FG_RED))),
      pc);

  tfp->flush(); // not-关闭VCD文件
  // delete tfp;
  nemu_state.state = NEMU_END;
  nemu_state.halt_ret = regs_2_value;
}

extern "C" void check_addr(uint32_t addr, svBit access_type, uint32_t wmask,
                           uint32_t wdata, uint32_t len) {
#ifndef NPC
  if (MEM_IN(addr, MROM_BASE, MROM_TOP)) { // mrom
    if (access_type) {
      record_axi_read("MROM", addr, len);
    } else {
      record_axi_write("MROM", addr, wmask, wdata);
    }
    return;
  }
  if (MEM_IN(addr, SRAM_BASE, SRAM_TOP)) { // sram
    if (access_type) {
      record_axi_read("SRAM", addr, len);
    } else {
      record_axi_write("SRAM", addr, wmask, wdata);
    }
    return;
  }
  if (MEM_IN(addr, FLASH_BASE, FLASH_TOP)) { // flash
    if (access_type) {
      record_axi_read("FLASH", addr, len);
    } else {
      record_axi_write("FLASH", addr, wmask, wdata);
    }
    return;
  }
  if (MEM_IN(addr, SDRAM_BASE, SDRAM_TOP)) { // sdram
    if (access_type) {
      record_axi_read("SDRAM", addr, len);
    } else {
      record_axi_write("SDRAM", addr, wmask, wdata);
    }
    return;
  }
  if (MEM_IN(addr, PSRAM_BASE, PSRAM_TOP)) { // psram
    if (access_type) {
      record_axi_read("PSRAM", addr, len);
    } else {
      record_axi_write("PSRAM", addr, wmask, wdata);
    }
    return;
  }
  if (access_type) {
    record_axi_read("Other", addr, len);
  } else {
    record_axi_write("Other", addr, wmask, wdata);
  }
  // Log("Difftest Stepping");
  difftest_step = true;
#else
  //run with npc
  if (access_type) {
    record_axi_read("NPC", addr, len);
  } else {
    record_axi_write("NPC", addr, wmask, wdata);
  }

  // record_axi_write("NPC", addr, wmask, wdata);
  if (addr >= 0xa0000000 || addr < 0x80000000)
    difftest_step = true;
#endif
}



extern "C" void trace_inst(unsigned int inst_now) {
//   inst = inst_now; 
}
bool wbu_valid = false;
uint32_t dpic_pc;
uint32_t dpic_n_pc;

extern "C" void trace_wbu(unsigned int pc,unsigned int n_pc) {
  // printf("writeback!pc=%x,,%x\n",pc,n_pc);
  wbu_valid = true;
  dpic_pc = pc;
  dpic_n_pc = n_pc;
  inst = find_inst(pc);
}