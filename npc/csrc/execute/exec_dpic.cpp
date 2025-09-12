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

static const svOpenArrayHandle* csr_array_ptr = nullptr;

static svOpenArrayHandle global_csr_array = nullptr;

// 实现set_csr_ptr函数 - 注意参数类型是 svOpenArrayHandle
extern "C" void set_csr_ptr(const svOpenArrayHandle csr_array) {
    global_csr_array = csr_array;
    printf("CSR pointer set: %p\n", csr_array);
    
    // 如果需要，您可以在这里读取CSR寄存器的初始值
    if (csr_array) {
        // 获取数组大小
        int array_size = svSize(csr_array, 1); // 第二维的大小
        printf("CSR array size: %d\n", array_size);
        
        for (int i = 0; i < array_size; i++) {
            // 获取数组元素指针
            void* elem_ptr = svGetArrElemPtr1(csr_array, i);
            if (elem_ptr) {
                uint32_t csr_value = *reinterpret_cast<uint32_t*>(elem_ptr);
                printf("CSR[%d] = 0x%08x\n", i, csr_value);
            }
        }
    }
}

// 辅助函数：获取CSR寄存器值
uint32_t get_csr_value(int csr_index) {
    if (!global_csr_array || csr_index < 0) {
        return 0;
    }
    
    int array_size = svSize(global_csr_array, 1);
    if (csr_index >= array_size) {
        return 0;
    }
    
    void* elem_ptr = svGetArrElemPtr1(global_csr_array, csr_index);
    if (!elem_ptr) {
        return 0;
    }
    
    return *reinterpret_cast<uint32_t*>(elem_ptr);
}

// 辅助函数：设置CSR寄存器值
void set_csr_value(int csr_index, uint32_t value) {
    if (!global_csr_array || csr_index < 0) {
        return;
    }
    
    int array_size = svSize(global_csr_array, 1);
    if (csr_index >= array_size) {
        return;
    }
    
    void* elem_ptr = svGetArrElemPtr1(global_csr_array, csr_index);
    if (elem_ptr) {
        *reinterpret_cast<uint32_t*>(elem_ptr) = value;
    }
}

extern "C" void set_gpr_ptr(const svOpenArrayHandle gpr_array) {
    // 这里可以实现类似的逻辑来处理GPR寄存器数组
    // 例如，保存指针，打印信息等
    printf("GPR pointer set: %p\n", gpr_array);
}

extern "C" void inst_commit(int pc, int inst, svBit commit_valid) {

}

extern "C" void set_diffpc(int nextpc, int inst, svBit commit_valid) {

}

extern "C" void bpu_count(svBit bpu_ret){

}

extern "C" void set_mem_pc(int mem_pc){

}

extern "C" void icache_hit_count(int last_pc, int now_pc){

}
extern "C" void icache_unhit_count(){

}
extern "C" void dcache_hit_count(){

}
extern "C" void dcache_unhit_count(){

}