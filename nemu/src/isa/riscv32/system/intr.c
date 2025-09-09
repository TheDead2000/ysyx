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

#include "common.h"
#include <isa.h>
#include <stdint.h>
#include <stdio.h>

uint32_t stval_nextvalue = 0;

paddr_t riscv_intr_gotos (word_t NO,vaddr_t epc){
  IFDEF(CONFIG_ETRACE,Log("Handle this exception on S_Mod"););
  cpu.csr[NEMU_CSR_SCAUSE]=NO;
  cpu.csr[NEMU_CSR_SEPC] = epc;
  // 关中断状态
  // sstatus.MIE->sstatus.MPIE;sstatus.MIE=0;
  bool sie = NEMU_sstatus->bits.SIE;
  NEMU_sstatus->bits.SPIE = sie;
  NEMU_mstatus->bits.SPIE = sie;
  NEMU_sstatus->bits.SIE = 0;
  NEMU_mstatus->bits.SIE = 0;
  // set previous privilege
  NEMU_mstatus->bits.SPP=cpu.PRIV==NEMU_PRIV_HS?1:0;
  NEMU_sstatus->bits.SPP=cpu.PRIV==NEMU_PRIV_HS?1:0;
  cpu.csr[NEMU_CSR_STVAL] = stval_nextvalue;
  stval_nextvalue = 0;//???ecall!
  cpu.PRIV=NEMU_PRIV_HS;
  return cpu.csr[NEMU_CSR_STVEC];
}

paddr_t riscv_intr_gotom (word_t NO,vaddr_t epc){
  cpu.csr[NEMU_CSR_MCAUSE]=NO;
  cpu.csr[NEMU_CSR_MEPC] = epc; 
  // 关中断状态

  NEMU_mstatus->bits.MPIE = NEMU_mstatus->bits.MIE;
  NEMU_mstatus->bits.MIE = 0;
  NEMU_mstatus->bits.MPP = cpu.PRIV;
  cpu.PRIV=NEMU_PRIV_M;
  return cpu.csr[NEMU_CSR_MTVEC];
}

word_t isa_raise_intr(word_t NO, vaddr_t epc) {
  //mepc寄存器 - 存放触发异常的PC
  //mstatus寄存器 - 存放处理器的状态
  //mcause寄存器 - 存放触发异常的原因
  IFDEF(CONFIG_ETRACE,Log("Trigged Exception!, No=%x Epc=%x",NO,epc););
  //medeleg bit of this interrupt was set!
  if(cpu.PRIV!=NEMU_PRIV_M&&(cpu.csr[NEMU_CSR_MEDELEG]>>(NO)&0x1)){
    printf("intr from S or U mode\n");
    return riscv_intr_gotos(NO,epc);
  }else{
    printf("intr from M or HS mode\n");
    return riscv_intr_gotom(NO,epc);
  }
}

word_t riscv_do_ecall(word_t NO, vaddr_t epc) {
  IFDEF(CONFIG_ETRACE,Log("Trigged ECALL!, No=%x Epc=%x",NO,epc););
  if(cpu.PRIV==NEMU_PRIV_M||cpu.PRIV==NEMU_PRIV_HS) {
    printf("ecall from M or HS mode\n");
    return riscv_intr_gotom(NO, epc);
  }else{
    printf("ecall from S or U mode\n");
    return riscv_intr_gotom(NO,epc);
  }
}


paddr_t isa_call_mret() {
  cpu.PRIV = NEMU_mstatus->bits.MPP;
  NEMU_mstatus->bits.MIE = NEMU_mstatus->bits.MPIE;
  NEMU_mstatus->bits.MPP = 0;
  NEMU_mstatus->bits.MPIE=1;
  return cpu.csr[NEMU_CSR_MEPC];
}

paddr_t isa_call_sret() {
  cpu.PRIV = NEMU_sstatus->bits.SPP;
  NEMU_sstatus->bits.SIE = NEMU_sstatus->bits.SPIE;
  NEMU_mstatus->bits.SIE = NEMU_mstatus->bits.SPIE;
  NEMU_sstatus->bits.SPIE = 1;
  NEMU_mstatus->bits.SPIE = 1;
  NEMU_sstatus->bits.SPP = 0;
  NEMU_mstatus->bits.SPP = 0;
  return cpu.csr[NEMU_CSR_SEPC];
}

void difftest_raise(uint64_t NO);
word_t isa_query_intr() {
  if ((cpu.PRIV==NEMU_PRIV_M?NEMU_mstatus->bits.MIE:NEMU_mstatus->bits.SIE) && cpu.INTR) {
    //Log("INTR_TAKE");
  IFDEF(CONFIG_DIFFTEST,difftest_raise(IRQ_TIMER););
    cpu.INTR = false;
    return IRQ_TIMER;
  }
  return INTR_EMPTY;
}
