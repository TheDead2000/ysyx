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
#include <cpu/cpu.h>
#include <difftest-def.h>
#include <memory/paddr.h>

void copy_reg(CPU_state* src,CPU_state* dst){
  for(int i=0;i<MUXDEF(CONFIG_RVE,16,32);i++){
    // printf("copying %d",src->gpr[i]);
    dst->gpr[i]=src->gpr[i];
  }
  dst->pc=src->pc;
    // printf("copying %d",src->pc);

}


// 在DUT host memory的`buf`和REF guest memory的`addr`之间拷贝`n`字节,
// `direction`指定拷贝的方向, `DIFFTEST_TO_DUT`表示往DUT拷贝, `DIFFTEST_TO_REF`表示往REF拷贝
__EXPORT void difftest_memcpy(paddr_t addr, void *buf, size_t n, bool direction) {
  // assert(0);
  if(DIFFTEST_TO_DUT){//向npc拷贝
    memcpy(buf,guest_to_host(addr),n);
  }else{
    memcpy(guest_to_host(addr),buf,n);
  }
}
// `direction`为`DIFFTEST_TO_DUT`时, 获取REF的寄存器状态到`dut`;
__EXPORT void difftest_regcpy(void *dut, bool direction) {
  // assert(0);
  if(direction==DIFFTEST_TO_DUT){
    copy_reg(&cpu,(CPU_state*)dut);
  }else{
    copy_reg((CPU_state*)dut,&cpu);
  }
}
// 让REF执行`n`条指令
__EXPORT void difftest_exec(uint64_t n) {
  // assert(0);
  cpu_exec(n);
}

//为中断准备
__EXPORT void difftest_raise_intr(word_t NO) {
  assert(0);
}
// 初始化REF的DiffTest功能
__EXPORT void difftest_init(int port) {
  Log("FROM-NEMU:Initing difftest!");
  void init_mem();
  init_mem();
  /* Perform ISA dependent initialization. */
  init_isa();
}
