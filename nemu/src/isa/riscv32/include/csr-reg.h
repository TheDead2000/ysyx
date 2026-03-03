// the translate logic was defined in
// nemu/src/isa/riscv32/local-include/reg.h
// remember to update the display func in
// nemu/src/isa/riscv32/reg.c

#include <stdint.h>
#define CONCAT_IMPL(a, b) a##b
#define CONCAT(a, b) CONCAT_IMPL(a, b)

typedef union {
  struct {
    unsigned int      : 1; //0
    unsigned int SIE  : 1; //1 
    unsigned int      : 1; //2
    unsigned int MIE  : 1; //3
    unsigned int      : 1; //4
    unsigned int SPIE : 1; //5
    unsigned int UBE  : 1; //6
    unsigned int MPIE : 1; //7
    unsigned int SPP  : 1; //8
    unsigned int VS   : 2;//10
    unsigned int MPP  : 2;//12
    unsigned int FS   : 2;//14
    unsigned int XS   : 2;//16
    unsigned int MPRV : 1;//17
    unsigned int SUM  : 1;//18
    unsigned int MXR  : 1;//19
    unsigned int TVM  : 1;//20
    unsigned int TW   : 1;//21
    unsigned int TSR  : 1;//22
    unsigned int SPELP: 1;//23
    unsigned int SDT  : 1;//24
    unsigned int      : 6;//30
    unsigned int SD   : 1;//31
  } bits;
  uint32_t value;
} mstatus_t;

typedef union {
  struct {
    unsigned int      : 1;//0
    unsigned int SIE  : 1;//1
    unsigned int      : 3;//2-4
    unsigned int SPIE : 1;//5
    unsigned int UBE  : 1;//6
    unsigned int      : 1;//7
    unsigned int SPP  : 1;//8
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
  GenCSR(SATP, 0x180) \
  GenCSR(SCAUSE, 0x142) \
  GenCSR(SEPC, 0x141) \
  GenCSR(SIE, 0x104) \
  GenCSR(SIP, 0x144) \
  GenCSR(SSCRATCH, 0x140) \
  GenCSR(SSTATUS, 0x100) \
  GenCSR(STVAL, 0x143) \
  GenCSR(STVEC, 0x105) 

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
