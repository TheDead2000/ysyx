#include "common.h"
#include<isa.h>
extern bool difftest_step;

void trace_and_difftest(paddr_t pc, word_t inst_in);
int update_reg_state();
void print_inst_asm(paddr_t pc, word_t inst);
void record_axi_write(const char *type, paddr_t addr, char wmask, word_t data);
void record_axi_read(const char *type, paddr_t addr, int len);
void record_pread(paddr_t addr, int len);
void record_pwrite(paddr_t addr, char wmask, word_t data);
void ftrace_check_inst(paddr_t pc_now, word_t inst);
void write_iringbuf(paddr_t pc, word_t inst);
void print_iringbuf();
void insert_icache_result(paddr_t addr, word_t inst);
word_t find_inst(vaddr_t addr);
extern uint64_t g_cycles;
extern uint64_t g_nr_guest_inst;
extern uint64_t cache_hit_times;