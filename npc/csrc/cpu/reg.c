#include "isa.h"
#include "common.h"

CPU_state* cpu;

const char *regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};

static const char *csr_regs[] = {
  "mstatus", "mtvec", "mepc", "mcause", "mtval", 
  "mie", "mip", "medeleg", "mideleg", "stvec",
  "sepc", "scause", "stval", "sstatus", "sie",
  "sip", "satp", "privilege", "mxr", "sum",
  "tvm", "tw", "tsr", "mscratch", "pmpcfg0"
};

// CSR寄存器描述
static const char *csr_desc[] = {
  "Machine Status", "Machine Trap Vector", "Machine Exception PC", 
  "Machine Cause", "Machine Trap Value", "Machine Interrupt Enable",
  "Machine Interrupt Pending", "Machine Exception Delegation",
  "Machine Interrupt Delegation", "Supervisor Trap Vector",
  "Supervisor Exception PC", "Supervisor Cause", "Supervisor Trap Value",
  "Supervisor Status", "Supervisor Interrupt Enable",
  "Supervisor Interrupt Pending", "Supervisor Address Translation",
  "Privilege Level", "Make eXecutable Readable", "permit Supervisor User Memory access",
  "Trap Virtual Memory", "Timeout Wait", "Trap sret", "Machine Scratch", "PMP Configuration 0"
};


void reg_display(CPU_state* cpu) {
  printf("================================================regs================================================\n");
  printf("%-4s \t%-20s\t%-10s\t","Name","Dec","Hex");  
  printf(" | ");
  printf("%-4s \t%-20s\t%-10s\t\n","Name","Dec","Hex");
#ifdef CONFIG_RVE
  for(int i=0;i<8;i++){
    MUXDEF(CONFIG_RV64,printf("%-4s \t%-20ld\t%-10lx\t",regs[i],cpu->gpr[i],cpu->gpr[i]);,printf("%-4s \t%-20d\t%-10x\t",regs[i],cpu->gpr[i],cpu->gpr[i]););
      
      printf(" | ");
    MUXDEF(CONFIG_RV64,printf("%-4s \t%-20ld\t%-10lx\t",regs[i+8],cpu->gpr[i+8],cpu->gpr[i+8]);,printf("%-4s \t%-20d\t%-10x\t",regs[i+8],cpu->gpr[i+8],cpu->gpr[i+8]););

      
      printf("\n");
  }
#else
  for(int i=0;i<16;i++){
    MUXDEF(CONFIG_RV64,printf("%-4s \t%-20ld\t%-10lx\t",regs[i],cpu->gpr[i],cpu->gpr[i]);,printf("%-4s \t%-20d\t%-10x\t",regs[i],cpu->gpr[i],cpu->gpr[i]););
      
      printf(" | ");
    MUXDEF(CONFIG_RV64,printf("%-4s \t%-20ld\t%-10lx\t",regs[i+16],cpu->gpr[i+16],cpu->gpr[i+16]);,printf("%-4s \t%-20d\t%-10x\t",regs[i+16],cpu->gpr[i+16],cpu->gpr[i+16]););

      
      printf("\n");
  }
#endif

  MUXDEF(CONFIG_RV64,printf("%-4s \t%-20ld\t%-10lx\t\n","pc",cpu->pc,cpu->pc);,printf("%-4s \t%-20d\t%-10x\t\n","pc",cpu->pc,cpu->pc);)
}

// 新增CSR寄存器显示函数
void csr_display(CPU_state* cpu) {
  printf("\n================================================CSR Registers================================================\n");
  printf("%-12s \t%-30s\t%-10s\t%-10s\n", "Name", "Description", "Hex", "Dec");
  printf("------------------------------------------------------------------------------------------------------------\n");
  
  for(int i = 0; i < 25; i++) {
    if (i < 17 || i >= 23) { // 显示主要的CSR寄存器，跳过一些控制信号
      MUXDEF(CONFIG_RV64,
        printf("%-12s \t%-30s\t0x%-8lx\t%-10ld\n", csr_regs[i], csr_desc[i], cpu->csr_gpr[i], cpu->csr_gpr[i]);,
        printf("%-12s \t%-30s\t0x%-8x\t%-10d\n", csr_regs[i], csr_desc[i], cpu->csr_gpr[i], cpu->csr_gpr[i]);
      );
    }
  }
  
  // 单独显示MMU控制信号
  printf("\n================================================MMU Control Signals================================================\n");
  printf("%-12s \t%-30s\t%-10s\n", "Signal", "Description", "Value");
  printf("----------------------------------------------------------------------------------------------------------------\n");
  for(int i = 18; i <= 22; i++) {
    MUXDEF(CONFIG_RV64,
      printf("%-12s \t%-30s\t%-10ld\n", csr_regs[i], csr_desc[i], cpu->csr_gpr[i] & 1);,
      printf("%-12s \t%-30s\t%-10d\n", csr_regs[i], csr_desc[i], cpu->csr_gpr[i] & 1);
    );
  }
}

// 完整的寄存器显示（包括通用寄存器和CSR寄存器）
void full_reg_display(CPU_state* cpu) {
  reg_display(cpu);
  csr_display(cpu);
}

void isa_reg_display(){
  full_reg_display(cpu);
}

void reg_display_diff(CPU_state* nemu){
  printf("YPC Regs::\n");
  full_reg_display(cpu);
  printf("\nNEMU Regs::\n");
  full_reg_display(nemu);
}

// 获取寄存器值的函数，支持CSR寄存器
word_t isa_reg_str2val(const char *s, bool *success) {
  *success = false;
  
  if(s[0] == '$')
    s += 1;
    
  if(strcmp(s, "pc") == 0){
    *success = true;
    return cpu->pc;
  }
  
  // 检查通用寄存器
  for(int i = 0; i < 32; i++){
    if(strcmp(regs[i], s) == 0){
      *success = true;
      return cpu->gpr[i];
    }
  }
  
  // 检查CSR寄存器
  for(int i = 0; i < 25; i++){
    if(strcmp(csr_regs[i], s) == 0){
      *success = true;
      return cpu->csr_gpr[i];
    }
  }
  
  return 0;
}

// 设置CSR寄存器值的函数（用于调试）
void isa_csr_setval(const char *s, word_t val) {
  for(int i = 0; i < 25; i++){
    if(strcmp(csr_regs[i], s) == 0){
      cpu->csr_gpr[i] = val;
      printf("Set CSR %s = 0x%x\n", csr_regs[i], val);
      return;
    }
  }
  printf("Error: CSR register %s not found!\n", s);
}

void init_reg(){
  cpu = (CPU_state*)malloc(sizeof(CPU_state));
  // 初始化CSR寄存器为0
  for(int i = 0; i < 25; i++) {
    cpu->csr_gpr[i] = 0;
  }
}

// 新增：获取特定CSR寄存器的值
word_t get_csr_value(int csr_index) {
  if(csr_index >= 0 && csr_index < 25) {
    return cpu->csr_gpr[csr_index];
  }
  return 0;
}

// 新增：设置特定CSR寄存器的值
void set_csr_value(int csr_index, word_t value) {
  if(csr_index >= 0 && csr_index < 25) {
    cpu->csr_gpr[csr_index] = value;
  }
}