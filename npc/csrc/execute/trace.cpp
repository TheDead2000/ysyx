// #define NPC
#include "regs.h"
#include "isa.h"
#include "common.h"
#include "diftest.h"
#include "ydb_all.h"
#include "verilator_wrapper.h"
#include "trace.h"

extern CPU_state *cpu;
bool difftest_step = false;

extern "C" void disassemble(char *str, int size, uint64_t pc, uint8_t *code,
                            int nbyte);

void print_inst_asm(paddr_t pc, word_t inst) {
  char buf[100];
  char *pbuf = buf;
  pbuf += snprintf(buf, 14, "0x%08x : ", pc);
  disassemble(pbuf, pbuf - buf + sizeof(buf), pc, (uint8_t *)(&inst),
              8); // 反编译
  printf("%s\n", buf); 
}
int prev_state = 0;
static bool state_valid() //检测从状态valid->fetching
{
  bool ret = false;
  if (prev_state == 3 && IFU_STATE == 1)
    ret = true;
  prev_state = IFU_STATE;
  return ret;
  // if(dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__state==2)
  //     return true;
}
int update_reg_state() {
  cpu->pc = dpic_n_pc;
  cpu->gpr[0] = REG_0_STRUCT;
  cpu->gpr[1] = REG_1_STRUCT;
  cpu->gpr[2] = REG_2_STRUCT;
  cpu->gpr[3] = REG_3_STRUCT;
  cpu->gpr[4] = REG_4_STRUCT;
  cpu->gpr[5] = REG_5_STRUCT;
  cpu->gpr[6] = REG_6_STRUCT;
  cpu->gpr[7] = REG_7_STRUCT;
  cpu->gpr[8] = REG_8_STRUCT;
  cpu->gpr[9] = REG_9_STRUCT;
  cpu->gpr[10] = REG_10_STRUCT;
  cpu->gpr[11] = REG_11_STRUCT;
  cpu->gpr[12] = REG_12_STRUCT;
  cpu->gpr[13] = REG_13_STRUCT;
  cpu->gpr[14] = REG_14_STRUCT;
  cpu->gpr[15] = REG_15_STRUCT;
#ifndef CONFIG_RVE
  cpu->gpr[16] = REG_16_STRUCT;
  cpu->gpr[17] = REG_17_STRUCT;
  cpu->gpr[18] = REG_18_STRUCT;
  cpu->gpr[19] = REG_19_STRUCT;
  cpu->gpr[20] = REG_20_STRUCT;
  cpu->gpr[21] = REG_21_STRUCT;
  cpu->gpr[22] = REG_22_STRUCT;
  cpu->gpr[23] = REG_23_STRUCT;
  cpu->gpr[24] = REG_24_STRUCT;
  cpu->gpr[25] = REG_25_STRUCT;
  cpu->gpr[26] = REG_26_STRUCT;
  cpu->gpr[27] = REG_27_STRUCT;
  cpu->gpr[28] = REG_28_STRUCT;
  cpu->gpr[29] = REG_29_STRUCT;
  cpu->gpr[30] = REG_30_STRUCT;
  cpu->gpr[31] = REG_31_STRUCT;
#endif
  return 0;
}

int init_reg_state() {
  cpu->pc = PC_STRUCT;
  cpu->gpr[0] = REG_0_STRUCT;
  cpu->gpr[1] = REG_1_STRUCT;
  cpu->gpr[2] = REG_2_STRUCT;
  cpu->gpr[3] = REG_3_STRUCT;
  cpu->gpr[4] = REG_4_STRUCT;
  cpu->gpr[5] = REG_5_STRUCT;
  cpu->gpr[6] = REG_6_STRUCT;
  cpu->gpr[7] = REG_7_STRUCT;
  cpu->gpr[8] = REG_8_STRUCT;
  cpu->gpr[9] = REG_9_STRUCT;
  cpu->gpr[10] = REG_10_STRUCT;
  cpu->gpr[11] = REG_11_STRUCT;
  cpu->gpr[12] = REG_12_STRUCT;
  cpu->gpr[13] = REG_13_STRUCT;
  cpu->gpr[14] = REG_14_STRUCT;
  cpu->gpr[15] = REG_15_STRUCT;
#ifndef CONFIG_RVE

  cpu->gpr[16] = REG_16_STRUCT;
  cpu->gpr[17] = REG_17_STRUCT;
  cpu->gpr[18] = REG_18_STRUCT;
  cpu->gpr[19] = REG_19_STRUCT;
  cpu->gpr[20] = REG_20_STRUCT;
  cpu->gpr[21] = REG_21_STRUCT;
  cpu->gpr[22] = REG_22_STRUCT;
  cpu->gpr[23] = REG_23_STRUCT;
  cpu->gpr[24] = REG_24_STRUCT;
  cpu->gpr[25] = REG_25_STRUCT;
  cpu->gpr[26] = REG_26_STRUCT;
  cpu->gpr[27] = REG_27_STRUCT;
  cpu->gpr[28] = REG_28_STRUCT;
  cpu->gpr[29] = REG_29_STRUCT;
  cpu->gpr[30] = REG_30_STRUCT;
  cpu->gpr[31] = REG_31_STRUCT;
#endif
  return 0;
}

void trace_and_difftest(paddr_t pc, word_t inst_in) {
  //   if (!state_valid())
  //     return;
  // print_inst_asm(pc, inst_in);

#ifdef CONFIG_ITRACE
  char buf[200];
  char *p = buf;
  p += snprintf(p, sizeof(buf), FMT_WORD ":", pc); // 打印地址
  // printf("0x%08x"
  //        ":",
  //        pc);
  int ilen = 4;
  int i;
  uint8_t *inst = (uint8_t *)&inst_in;
  for (i = ilen - 1; i >= 0; i--) {
    p += snprintf(p, 4, " %02x", inst[i]);
  }
  int ilen_max = 4;
  int space_len = ilen_max - ilen;
  if (space_len < 0)
    space_len = 0;
  space_len = space_len * 3 + 1;
  memset(p, ' ', space_len);
  p += space_len;
  disassemble(p, buf + sizeof(buf) - p, pc, (uint8_t *)&inst_in, ilen);
#ifdef CONFIG_ITRACE_COND // 在condition为true的时候记录！
  if (CONFIG_ITRACE_COND) {
    log_write("%s\n", buf);
  } // 把缓冲区数据打印出来
#endif
#endif
#ifdef CONFIG_IRINGBUF
  write_iringbuf(pc, inst_in);
#endif
#ifdef CONFIG_FTRACE
  // ftrace--------------------
  ftrace_check_inst(pc, inst_in);
#endif
#ifdef CONFIG_DIFFTEST
  if (unlikely(difftest_step)) {
    difftest_copy_regs();
    difftest_step = false;
  } else {
    difftest_exec(1);
    difftest_check_state();
  }
#endif
}
