// the translate logic was defined in
// nemu/src/isa/riscv32/local-include/reg.h
// remember to update the display func in
// nemu/src/isa/riscv32/reg.c

#include <stdint.h>
#define CONCAT_IMPL(a, b) a##b
#define CONCAT(a, b) CONCAT_IMPL(a, b)

typedef union {
  struct {
    unsigned int      : 1;
    unsigned int SIE  : 1;
    unsigned int      : 1;
    unsigned int MIE  : 1;
    unsigned int      : 1;
    unsigned int SPIE : 1;
    unsigned int UBE  : 1;
    unsigned int MPIE : 1;
    unsigned int SPP  : 1;
    unsigned int VS   : 2;
    unsigned int MPP  : 2;
    unsigned int FS   : 2;
    unsigned int XS   : 2;
    unsigned int MPRV : 1;
    unsigned int SUM  : 1;
    unsigned int MXR  : 1;
    unsigned int TVM  : 1;
    unsigned int TW   : 1;
    unsigned int TSR  : 1;
    unsigned int SPELP: 1;
    unsigned int SDT  : 1;
    unsigned int      : 6;
    unsigned int SD   : 1;
  } bits;
  uint32_t value;
} mstatus_t;

typedef union {
  struct {
    unsigned int      : 1;
    unsigned int SIE  : 1;
    unsigned int      : 3;
    unsigned int SPIE : 1;
    unsigned int UBE  : 1;
    unsigned int      : 1;
    unsigned int SPP  : 1;
    unsigned int VS   : 2;
    unsigned int      : 2;
    unsigned int FS   : 2;
    unsigned int XS   : 2;
    unsigned int MPRV : 1;
    unsigned int SUM  : 1;
    unsigned int MXR  : 1;
    unsigned int SPELP: 1;
    unsigned int SDT  : 1;
    unsigned int      : 6;
    unsigned int SD   : 1;
  } bits;
  uint32_t value;
} sstatus_t;

#define NEMU_mstatus ((mstatus_t *)(&cpu.csr[NEMU_CSR_MSTATUS]))
#define NEMU_sstatus ((sstatus_t *)(&cpu.csr[NEMU_CSR_SSTATUS]))

// 需要和spike做diff的寄存器
#define CSR_DIFF_LIST \
  GenCSR(MHARTID, 0xf14) \
  GenCSR(MSTATUS, 0x300) \
  GenCSR(MISA, 0x301) \
  GenCSR(MEDELEG, 0x302) \
  GenCSR(MIDELEG, 0x303) \
  GenCSR(MIE, 0x304) \
  GenCSR(MTVEC, 0x305) \
  GenCSR(MSTATUSH, 0x310) \
  GenCSR(MSCRATCH, 0x340) \
  GenCSR(MEPC, 0x341) \
  GenCSR(MCAUSE, 0x342) \
  GenCSR(MTVAL, 0x343) \
  GenCSR(MIP, 0x344) \
  \
  GenCSR(SATP, 0x180) \
  GenCSR(SCAUSE, 0x142) \
  GenCSR(SEPC, 0x141) \
  GenCSR(SIE, 0x104) \
  GenCSR(SIP, 0x144) \
  GenCSR(SSCRATCH, 0x140) \
  GenCSR(SSTATUS, 0x100) \
  GenCSR(STVAL, 0x143) \
  GenCSR(STVEC, 0x105) \
  \
  GenCSR(PMPCFG0,  0x3A0) \
  GenCSR(PMPCFG1,  0x3A1) \
  GenCSR(PMPCFG2,  0x3A2) \
  GenCSR(PMPCFG3,  0x3A3) \
  GenCSR(PMPCFG4,  0x3A4) \
  GenCSR(PMPCFG5,  0x3A5) \
  GenCSR(PMPCFG6,  0x3A6) \
  GenCSR(PMPCFG7,  0x3A7) \
  GenCSR(PMPCFG8,  0x3A8) \
  GenCSR(PMPCFG9,  0x3A9) \
  GenCSR(PMPCFG10, 0x3AA) \
  GenCSR(PMPCFG11, 0x3AB) \
  GenCSR(PMPCFG12, 0x3AC) \
  GenCSR(PMPCFG13, 0x3AD) \
  GenCSR(PMPCFG14, 0x3AE) \
  GenCSR(PMPCFG15, 0x3AF) \
  GenCSR(PMPADDR0,  0x3B0) \
  GenCSR(PMPADDR1,  0x3B1) \
  GenCSR(PMPADDR2,  0x3B2) \
  GenCSR(PMPADDR3,  0x3B3) \
  GenCSR(PMPADDR4,  0x3B4) \
  GenCSR(PMPADDR5,  0x3B5) \
  GenCSR(PMPADDR6,  0x3B6) \
  GenCSR(PMPADDR7,  0x3B7) \
  GenCSR(PMPADDR8,  0x3B8) \
  GenCSR(PMPADDR9,  0x3B9) \
  GenCSR(PMPADDR10, 0x3BA) \
  GenCSR(PMPADDR11, 0x3BB) \
  GenCSR(PMPADDR12, 0x3BC) \
  GenCSR(PMPADDR13, 0x3BD) \
  GenCSR(PMPADDR14, 0x3BE) \
  GenCSR(PMPADDR15, 0x3BF) \
  GenCSR(MIPID, 0xF13) \

// 全部csr寄存器
#define CSR_LIST \
  GenCSR(MVENDROID, 0xF11) \
  GenCSR(MARCHID, 0xF12) \
  GenCSR(TIME, 0xC01) \
  GenCSR(TIMEH, 0xC81) \
  CSR_DIFF_LIST 
//GenCSR(MEDELEGH, 0x312)

// 生成静态常量定义
#define GenCSR(name, paddr) \
  static const uint32_t NEMU_CSR_V_##name = paddr; \
  static const uint32_t NEMU_CSR_##name = paddr;
CSR_LIST
#undef GenCSR

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-variable"
static uint32_t difftest_csr_idx[4096] = {
#define GenCSR(NAME,IDX) IDX,
  CSR_DIFF_LIST
#undef GenCSR
};

static const char *difftest_csr_name[] = {
#define GenCSR(NAME,IDX) #NAME,
  CSR_DIFF_LIST
#undef GenCSR
};
#pragma GCC diagnostic pop
//Old Def

//#define csr_gen(name, vaddr)  static const uint32_t NEMU_CSR_V_##name=vaddr;
//#define csr_lo_gen(name, paddr)  static const uint32_t NEMU_CSR_##name=paddr;
//#define gen(name, vaddr, paddr)  csr_gen(name, vaddr); csr_lo_gen(name, paddr);
//
//gen(MTVEC, 0x305, 0x0);
//gen(MCAUSE, 0x342, 0x1);
//gen(MSTATUS, 0x300, 0x2);
//gen(MEPC, 0x341, 0x3);
//gen(MVENDROID, 0xF11, 0x4);
//gen(MARCHID, 0xF12, 0x5);
//gen(SATP, 0x180, 0x6);
//gen(MSCRATCH,0x340,0x7)
//gen(DSCRATCH0,0x140,0x8)
//gen(SSTATUS,0x100,0x9)
//gen(MSTATUSH,0x310,0x10)
//gen(MIE,0x304,0x11)
//gen(MHARTID,0xf14,0x12)
//gen(MISA,0x301,0x13)
//gen(MIP,0x344,0x14)
//gen(PMPCFG0,0x3A0,0x15)
//gen(PMPADDR0,0x3B0,0x16)
//gen(PMPADDR1,0x3B1,0x17)
//gen(PMPADDR2,0x3B2,0x18)
//
