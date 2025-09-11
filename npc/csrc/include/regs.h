// #define NPC

#ifdef NPC
#define PC_STRUCT dut->rootp->raw_core__DOT__ypc__DOT__ifu__DOT__pc
#define REG_0_STRUCT 0
#define REG_1_STRUCT dut->rootp->raw_core__DOT__ypc__DOT__reg_0__DOT__regs_0
#define REG_2_STRUCT dut->rootp->raw_core__DOT__ypc__DOT__reg_0__DOT__regs_1
#define REG_3_STRUCT dut->rootp->raw_core__DOT__ypc__DOT__reg_0__DOT__regs_2
#define REG_4_STRUCT dut->rootp->raw_core__DOT__ypc__DOT__reg_0__DOT__regs_3
#define REG_5_STRUCT dut->rootp->raw_core__DOT__ypc__DOT__reg_0__DOT__regs_4
#define REG_6_STRUCT dut->rootp->raw_core__DOT__ypc__DOT__reg_0__DOT__regs_5
#define REG_7_STRUCT dut->rootp->raw_core__DOT__ypc__DOT__reg_0__DOT__regs_6
#define REG_8_STRUCT dut->rootp->raw_core__DOT__ypc__DOT__reg_0__DOT__regs_7
#define REG_9_STRUCT dut->rootp->raw_core__DOT__ypc__DOT__reg_0__DOT__regs_8
#define REG_10_STRUCT dut->rootp->raw_core__DOT__ypc__DOT__reg_0__DOT__regs_9
#define REG_11_STRUCT dut->rootp->raw_core__DOT__ypc__DOT__reg_0__DOT__regs_10
#define REG_12_STRUCT dut->rootp->raw_core__DOT__ypc__DOT__reg_0__DOT__regs_11
#define REG_13_STRUCT dut->rootp->raw_core__DOT__ypc__DOT__reg_0__DOT__regs_12
#define REG_14_STRUCT dut->rootp->raw_core__DOT__ypc__DOT__reg_0__DOT__regs_13
#define REG_15_STRUCT dut->rootp->raw_core__DOT__ypc__DOT__reg_0__DOT__regs_14
#define REG_16_STRUCT dut->rootp->raw_core__DOT__ypc__DOT__reg_0__DOT__regs_15
#define REG_17_STRUCT dut->rootp->raw_core__DOT__ypc__DOT__reg_0__DOT__regs_16
#define REG_18_STRUCT dut->rootp->raw_core__DOT__ypc__DOT__reg_0__DOT__regs_17
#define REG_19_STRUCT dut->rootp->raw_core__DOT__ypc__DOT__reg_0__DOT__regs_18
#define REG_20_STRUCT dut->rootp->raw_core__DOT__ypc__DOT__reg_0__DOT__regs_19
#define REG_21_STRUCT dut->rootp->raw_core__DOT__ypc__DOT__reg_0__DOT__regs_20
#define REG_22_STRUCT dut->rootp->raw_core__DOT__ypc__DOT__reg_0__DOT__regs_21
#define REG_23_STRUCT dut->rootp->raw_core__DOT__ypc__DOT__reg_0__DOT__regs_22
#define REG_24_STRUCT dut->rootp->raw_core__DOT__ypc__DOT__reg_0__DOT__regs_23
#define REG_25_STRUCT dut->rootp->raw_core__DOT__ypc__DOT__reg_0__DOT__regs_24
#define REG_26_STRUCT dut->rootp->raw_core__DOT__ypc__DOT__reg_0__DOT__regs_25
#define REG_27_STRUCT dut->rootp->raw_core__DOT__ypc__DOT__reg_0__DOT__regs_26
#define REG_28_STRUCT dut->rootp->raw_core__DOT__ypc__DOT__reg_0__DOT__regs_27
#define REG_29_STRUCT dut->rootp->raw_core__DOT__ypc__DOT__reg_0__DOT__regs_28
#define REG_30_STRUCT dut->rootp->raw_core__DOT__ypc__DOT__reg_0__DOT__regs_29
#define REG_31_STRUCT dut->rootp->raw_core__DOT__ypc__DOT__reg_0__DOT__regs_30
#define IFU_STATE dut->rootp->raw_core__DOT__ypc__DOT__ifu__DOT__state

#else
#define PC_STRUCT                                                              \
  dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pc
#define REG_0_STRUCT 0
#define REG_1_STRUCT dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_0__DOT__regs_0
#define REG_2_STRUCT dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_0__DOT__regs_1
#define REG_3_STRUCT dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_0__DOT__regs_2
#define REG_4_STRUCT dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_0__DOT__regs_3
#define REG_5_STRUCT dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_0__DOT__regs_4
#define REG_6_STRUCT dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_0__DOT__regs_5
#define REG_7_STRUCT dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_0__DOT__regs_6
#define REG_8_STRUCT dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_0__DOT__regs_7
#define REG_9_STRUCT dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_0__DOT__regs_8
#define REG_10_STRUCT dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_0__DOT__regs_9
#define REG_11_STRUCT dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_0__DOT__regs_10
#define REG_12_STRUCT dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_0__DOT__regs_11
#define REG_13_STRUCT dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_0__DOT__regs_12
#define REG_14_STRUCT dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_0__DOT__regs_13
#define REG_15_STRUCT dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_0__DOT__regs_14
#define REG_16_STRUCT dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_0__DOT__regs_15
#define REG_17_STRUCT dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_0__DOT__regs_16
#define REG_18_STRUCT dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_0__DOT__regs_17
#define REG_19_STRUCT dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_0__DOT__regs_18
#define REG_20_STRUCT dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_0__DOT__regs_19
#define REG_21_STRUCT dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_0__DOT__regs_20
#define REG_22_STRUCT dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_0__DOT__regs_21
#define REG_23_STRUCT dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_0__DOT__regs_22
#define REG_24_STRUCT dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_0__DOT__regs_23
#define REG_25_STRUCT dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_0__DOT__regs_24
#define REG_26_STRUCT dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_0__DOT__regs_25
#define REG_27_STRUCT dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_0__DOT__regs_26
#define REG_28_STRUCT dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_0__DOT__regs_27
#define REG_29_STRUCT dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_0__DOT__regs_28
#define REG_30_STRUCT dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_0__DOT__regs_29
#define REG_31_STRUCT dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_0__DOT__regs_30
#define IFU_STATE                                                              \
  dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__state

#endif
