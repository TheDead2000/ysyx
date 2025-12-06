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
#include <cpu/difftest.h>
#include "../local-include/reg.h"
extern const char* regs[];
bool isa_difftest_checkregs(CPU_state *ref_r, vaddr_t pc) {
  bool ret=true;
  if(!difftest_check_reg("pc",pc,ref_r->pc,cpu.pc))
    ret = false;
  for(int i=0;i<32;i++){
    if(!difftest_check_reg(regs[i],pc,ref_r->gpr[i],cpu.gpr[i]))
      ret =  false;
  }
  return ret;
}

bool isa_difftest_checkcsrs(word_t *ref_csr,vaddr_t pc) {
  bool ret=true;
  for(int i=0;difftest_csr_idx[i]!=0;i++){
    if(!difftest_check_reg(difftest_csr_name[i],pc,ref_csr[i],cpu.csr[difftest_csr_idx[i]]))
      ret =  false;
  }
  return ret;
}

void isa_difftest_attach() {
}
