/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <isa.h>
#include <stdint.h>
#include <string.h>
#define LENGTH(arr)         (sizeof(arr) / sizeof((arr)[0]))

const char *regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};

const char *csr_regs[] = {"mtvec",     "mcause",  "mstatus", "mepc",
                          "mvendorid", "marchid", "satp",   "mscratch" , "dscratch0", "sstatus"};
const uint32_t csr_num = LENGTH(csr_regs);
void print_csr_reg() {
//#ifdef CONFIG_RV64
//  printf("================================================csrs================================================\n");
//  printf("%-4s      \t%-20s\t%-10s\n", "Name", "Dec", "Hex");
//#else
//  printf("========================================csrs========================================\n");
//  printf("%-12s\t%-10s\t%-8s\n", "Name", "Dec", "Hex");
//#endif
//  for(int i=0;i<csr_num;i++){
//    MUXDEF(CONFIG_RV64, printf("%-12s      \t%-20ld\t%-10lx\n", csr_regs[i],
//                               cpu.csr[i], cpu.csr[i]);
//           , printf("%-12s\t%-10d\t%-8x\n", csr_regs[i], cpu.csr[i],
//                    cpu.csr[i]););
//  }
  printf("========================================csrs========================================\n");
  printf("%-12s\t%-10s\t%-8s\n", "Name", "Dec", "Hex");
#define GenCSR(name,paddr) \
  printf("%-12s\t%-10d\t%-8x\n", #name , cpu.csr[paddr] , cpu.csr[paddr]);
CSR_LIST
#undef GenCSR

}
void isa_reg_display() {
#ifndef CONFIG_RVE
#ifdef CONFIG_RV64
  printf("================================================regs================================================\n");
  printf("%-4s \t%-20s\t%-10s\t","Name","Dec","Hex");  
  printf(" | ");
  printf("%-4s \t%-20s\t%-10s\t\n", "Name", "Dec", "Hex");
#else
  printf("========================================regs========================================\n");
  printf("%-4s \t%-10s\t%-8s\t","Name","Dec","Hex");  
  printf(" | ");
  printf("%-4s \t%-10s\t%-8s\t\n", "Name", "Dec", "Hex");
#endif
  for(int i=0;i<16;i++){
    MUXDEF(CONFIG_RV64,printf("%-4s \t%-20ld\t%-10lx\t",regs[i],cpu.gpr[i],cpu.gpr[i]);,printf("%-4s \t%-10d\t%-8x\t",regs[i],cpu.gpr[i],cpu.gpr[i]););
      
      printf(" | ");
    MUXDEF(CONFIG_RV64,printf("%-4s \t%-20ld\t%-10lx\t",regs[i+16],cpu.gpr[i+16],cpu.gpr[i+16]);,printf("%-4s \t%-10d\t%-8x\t",regs[i+16],cpu.gpr[i+16],cpu.gpr[i+16]););

      
      printf("\n");
  }
  MUXDEF(CONFIG_RV64,printf("%-4s \t%-20ld\t%-10lx\t\n","pc",cpu.pc,cpu.pc);,printf("%-4s \t%-10d\t%-8x\t\n","pc",cpu.pc,cpu.pc););
  #else
   printf("================================================regs================================================\n");
  printf("%-4s \t%-20s\t%-10s\t","Name","Dec","Hex");  
  printf(" | ");
  printf("%-4s \t%-20s\t%-10s\t\n","Name","Dec","Hex");
  for(int i=0;i<8;i++){
    MUXDEF(CONFIG_RV64,printf("%-4s \t%-20ld\t%-10lx\t",regs[i],cpu.gpr[i],cpu.gpr[i]);,printf("%-4s \t%-20d\t%-10x\t",regs[i],cpu.gpr[i],cpu.gpr[i]););
      
      printf(" | ");
    MUXDEF(CONFIG_RV64,printf("%-4s \t%-20ld\t%-10lx\t",regs[i+8],cpu.gpr[i+8],cpu.gpr[i+8]);,printf("%-4s \t%-20d\t%-10x\t",regs[i+8],cpu.gpr[i+8],cpu.gpr[i+8]););

      
      printf("\n");
  }
  MUXDEF(CONFIG_RV64,printf("%-4s \t%-20ld\t%-10lx\t\n","pc",cpu.pc,cpu.pc);,printf("%-4s \t%-20d\t%-10x\t\n","pc",cpu.pc,cpu.pc););
  #endif
  print_csr_reg();
}
//获取寄存器的值，s应该传入$xx
word_t isa_reg_str2val(const char *s, bool *success) {
  *success=false;
  // printf("%lu",cpu.pc);
  if(s[0]=='$')
    s+=1;
  if(strcmp(s,"pc")==0){
    *success=true;
    return cpu.pc;
  }
  for(int i=0;i<32;i++){
    if(strcmp(regs[i],s)==0){
      *success=true;
      return cpu.gpr[i];
    }
  }
  for (int i = 0; i < csr_num; i++) {
    if (strcmp(csr_regs[i], s) == 0) {
      *success = true;
      return cpu.csr[i];
    }
  }
  return 0;
}
