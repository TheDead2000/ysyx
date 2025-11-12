// #define NPC
#include "isa.h"
#include "sdb.h"
#include "regs.h"
#include "common.h"
#ifndef NPC
#include "VysyxSoCFull.h"
#include "VysyxSoCFull___024root.h"
#include <nvboard.h>
#else
#include "Vraw_core.h"
#include "Vraw_core___024root.h"
#endif
#include "diftest.h"
#include "trace.h"
#include <verilated.h>
#include <verilated_vcd_c.h>

VerilatedVcdC *tfp; // 用于生成波形的指针

#ifndef NPC
VysyxSoCFull *dut;
void nvboard_bind_all_pins(VysyxSoCFull *dut);
#else
Vraw_core *dut;
#endif
uint64_t sim_time = 0;
uint64_t g_nr_guest_inst = 0;
uint64_t g_cycles = 0;
uint64_t g_timer = 0; // unit: us
extern "C" void disassemble(char *str, int size, uint64_t pc, uint8_t *code,
                            int nbyte);
extern bool wbu_valid;

void init_verilator(int argc, char *argv[]) {
  Verilated::commandArgs(argc, argv);
}

#define PRINT_INST_MIN 10

void statistic() {
#define NUMBERIC_FMT MUXDEF(CONFIG_TARGET_AM, "%", "%'") PRIu64
  Log("host time spent = " NUMBERIC_FMT " us", g_timer);
  Log("total guest instructions = " NUMBERIC_FMT, g_nr_guest_inst);
  Log("total cycles = " NUMBERIC_FMT, g_cycles);
  Log("IPC = %lf", (double)g_nr_guest_inst / g_cycles);
  if (g_timer > 0)
    Log("simulation frequency = " NUMBERIC_FMT " inst/s",
        g_nr_guest_inst * 1000000 / g_timer);
  else
    Log("Finish running in less than 1 us and can not calculate the simulation "
        "frequency");
}
void single_cycle() {
  dut->clock = 0;
  dut->eval();
  IFDEF(CONFIG_WAVE_FORM, tfp->dump(sim_time++);) // Dump波形信息
  IFDEF(CONFIG_WAVE_FORM, tfp->flush();)          // flush
  dut->clock = 1;
  dut->eval();
  IFDEF(CONFIG_WAVE_FORM, tfp->dump(sim_time++);) // Dump波形信息
  IFDEF(CONFIG_WAVE_FORM, tfp->flush();)          // flush
#ifndef NPC
  nvboard_update();
#endif
}


void single_inst() {

  int i = 0;
  do {
    g_cycles++;
    single_cycle();
    update_reg_state();
    if (check_watch_point() && nemu_state.state == NEMU_RUNNING)
    nemu_state.state = NEMU_STOP;
  } while (0); // need to check next cycle of wbu
                                        // valid!
  // wbu_valid = false;
  // single_cycle();
  //   #ifdef CONFIG_WATCHPOINT
  // if (check_watch_point() && nemu_state.state == NEMU_RUNNING)
  //   nemu_state.state = NEMU_STOP;
  // #endif


}

void reset(int n) {
  dut->reset = 1;
  dut->clock = 0;
  dut->eval();
  dut->clock = 1;
  dut->eval();
  while (n-- > 0)
    single_cycle();
  dut->reset = 0;
}

void init_runtime() {
#ifdef NPC
  dut = new Vraw_core;
#else
  dut = new VysyxSoCFull; // Initialize the DUT instance
#endif
  Verilated::traceEverOn(true); // 启用波形追踪
  tfp = new VerilatedVcdC;
  dut->trace(tfp, 99); // 跟踪99级信号
  printf("Trace file is generated at ./build/waveform.vcd\n");
 tfp->open("./waveform.vcd");
  // MUXDEF(CONFIG_WAVE_FORM, tfp->open("./build/waveform.vcd");
  //        , tfp->open("/dev/null");) // 打开VCD文件
#ifndef NPC
  nvboard_bind_all_pins(dut);
  nvboard_init();
#endif
  reset(5); // 复位5个周期
}

word_t inst=0;

int run(int step) {
  int now = step;
  uint64_t timer_start = get_time_local();
  while (likely((now) != 0)) {
    now = now >= 0 ? now - 1 : now; // 如果now>0,就正常递减，否则保持原来的值
    switch (nemu_state.state) {
    case NEMU_ABORT:
    case NEMU_END:
      printf("Program execution has ended. To restart the program, exit NEMU "
             "and run again.\n");
      return -1;
    default:
      nemu_state.state = NEMU_RUNNING;
    }
    uint32_t pc = PC_STRUCT;
    printf("PC_STRUCT=%x\n",pc);
    single_inst();
    // tfp->flush();
    g_nr_guest_inst++;
    // if (unlikely(step < PRINT_INST_MIN && step >= 0))
    //   print_inst_asm(dpic_pc, inst);
    
      //trace_and_difftest(dpic_pc, inst);
#ifdef CONFIG_WAVE_FORM
    // if (unlikely(g_nr_guest_inst == 800000)) {
    //   Warn("Waveform Enabled!May result in a very large file!");
    //   nemu_state.state = NEMU_STOP;
    // }

#endif
    if (unlikely(nemu_state.state != NEMU_RUNNING))
      break; // 出现异常
  }
  uint64_t timer_end = get_time_local();
  g_timer += timer_end - timer_start;
  return 0;
}

void assert_fail_msg() {
  isa_reg_display();
  IFDEF(CONFIG_IRINGBUF, print_iringbuf());
  statistic();
}
