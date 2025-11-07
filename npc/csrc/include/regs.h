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
  dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__if2id__DOT___inst_addr_if_id_q
// 寄存器访问宏
#define GET_REG(dut, regnum) (dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_gpr_regfile__DOT__rf[regnum])
#define GET_CSR_REG(dut, regnum)                                                      \
  (dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__csr_regs[regnum])
// 特定寄存器宏
#define REG_0_STRUCT 0
#define REG_1_STRUCT GET_REG(dut, 1)
#define REG_2_STRUCT GET_REG(dut, 2)
#define REG_3_STRUCT GET_REG(dut, 3)
#define REG_4_STRUCT GET_REG(dut, 4)
#define REG_5_STRUCT GET_REG(dut, 5)
#define REG_6_STRUCT GET_REG(dut, 6)
#define REG_7_STRUCT GET_REG(dut, 7)
#define REG_8_STRUCT GET_REG(dut, 8)
#define REG_9_STRUCT GET_REG(dut, 9)
#define REG_10_STRUCT GET_REG(dut, 10)
#define REG_11_STRUCT GET_REG(dut, 11)
#define REG_12_STRUCT GET_REG(dut, 12)
#define REG_13_STRUCT GET_REG(dut, 13)
#define REG_14_STRUCT GET_REG(dut, 14)
#define REG_15_STRUCT GET_REG(dut, 15)
#define REG_16_STRUCT GET_REG(dut, 16)
#define REG_17_STRUCT GET_REG(dut, 17)
#define REG_18_STRUCT GET_REG(dut, 18)
#define REG_19_STRUCT GET_REG(dut, 19)
#define REG_20_STRUCT GET_REG(dut, 20)
#define REG_21_STRUCT GET_REG(dut, 21)
#define REG_22_STRUCT GET_REG(dut, 22)
#define REG_23_STRUCT GET_REG(dut, 23)
#define REG_24_STRUCT GET_REG(dut, 24)
#define REG_25_STRUCT GET_REG(dut, 25)
#define REG_26_STRUCT GET_REG(dut, 26)
#define REG_27_STRUCT GET_REG(dut, 27)
#define REG_28_STRUCT GET_REG(dut, 28)
#define REG_29_STRUCT GET_REG(dut, 29)
#define REG_30_STRUCT GET_REG(dut, 30)
#define REG_31_STRUCT GET_REG(dut, 31)


#define CSR_REG0_STRUCT GET_CSR_REG(dut, 0)
#define CSR_REG1_STRUCT GET_CSR_REG(dut, 1)
#define CSR_REG2_STRUCT GET_CSR_REG(dut, 2)
#define CSR_REG3_STRUCT GET_CSR_REG(dut, 3)
#define CSR_REG4_STRUCT GET_CSR_REG(dut, 4)
#define CSR_REG5_STRUCT GET_CSR_REG(dut, 5)
#define CSR_REG6_STRUCT GET_CSR_REG(dut, 6)
#define CSR_REG7_STRUCT GET_CSR_REG(dut, 7)
#define CSR_REG8_STRUCT GET_CSR_REG(dut, 8)
#define CSR_REG9_STRUCT GET_CSR_REG(dut, 9)
#define CSR_REG10_STRUCT GET_CSR_REG(dut, 10)
#define CSR_REG11_STRUCT GET_CSR_REG(dut, 11)
#define CSR_REG12_STRUCT GET_CSR_REG(dut, 12)
#define CSR_REG13_STRUCT GET_CSR_REG(dut, 13)
#define CSR_REG14_STRUCT GET_CSR_REG(dut, 14)
#define CSR_REG15_STRUCT GET_CSR_REG(dut, 15)
#define CSR_REG16_STRUCT GET_CSR_REG(dut, 16)
#define CSR_REG17_STRUCT GET_CSR_REG(dut, 17)
#define CSR_REG18_STRUCT GET_CSR_REG(dut, 18)
#define CSR_REG19_STRUCT GET_CSR_REG(dut, 19)
#define CSR_REG20_STRUCT GET_CSR_REG(dut, 20)
#define CSR_REG21_STRUCT GET_CSR_REG(dut, 21)
#define CSR_REG22_STRUCT GET_CSR_REG(dut, 22)
#define CSR_REG23_STRUCT GET_CSR_REG(dut, 23)
#define CSR_REG24_STRUCT GET_CSR_REG(dut, 24)


// #define IFU_STATE                                                              \
//   dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__state

#endif
