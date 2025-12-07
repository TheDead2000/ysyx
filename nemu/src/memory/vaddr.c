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
#include <memory/paddr.h>
#include <setjmp.h>

uint32_t mem_access_status=NEMU_MEMA_NORMAL;
extern jmp_buf memerr_jump_buffer;

// TODO-MEM_RET_FAIL/CROSSPAGE不应该直接assert,应该设置状态!

word_t vaddr_ifetch(vaddr_t addr, int len) {
  paddr_t paddr=addr;
  switch (isa_mmu_check(paddr, len, 0)) {
  case MMU_DIRECT:
    break;
  case MMU_TRANSLATE:
    paddr = isa_mmu_translate(addr,len,NEMU_MEM_EXEC);
    break;
  case MMU_FAIL:
    assert(0);
    break;
  }
  if(paddr==MEM_RET_FAIL){
    longjmp(memerr_jump_buffer, NEMU_MEMA_FETCHERR);
  }
  assert(paddr != MEM_RET_CROSS_PAGE);
  //assert(paddr != MEM_RET_FAIL);
  return paddr_read(paddr, len);
}

word_t vaddr_read(vaddr_t addr, int len) {
  paddr_t paddr = addr;
  switch (isa_mmu_check(paddr, len, 0)) {
  case MMU_DIRECT:
    break;
  case MMU_TRANSLATE:
    paddr = isa_mmu_translate(addr, len, NEMU_MEM_READ);
    break;
  case MMU_FAIL:
    assert(0);
    break;
  }

  // 处理内存访问失败
  if (paddr == MEM_RET_FAIL) {
    longjmp(memerr_jump_buffer, NEMU_MEMA_READERR);
  }

  // 处理跨页访问：逐字节读取（确保len=1，避免host_read断言）
  if (paddr == MEM_RET_CROSS_PAGE) {
    uint8_t ret_buf[8] = {0}; // 足够容纳最大len（4字节，RISC-V32）
    // 逐字节遍历要读取的地址
    for (int i = 0; i < len; i++) {
      vaddr_t curr_vaddr = addr + i;
      // 翻译当前字节的物理地址
      paddr_t curr_paddr = isa_mmu_translate(curr_vaddr, 1, NEMU_MEM_READ);
      printf("read cross page vaddr:%x->paddr:%x\n",curr_vaddr,curr_paddr);
      if (curr_paddr == MEM_RET_FAIL) {
        longjmp(memerr_jump_buffer, NEMU_MEMA_READERR);
      }
      // 单个字节不会跨页，断言兜底
      assert(curr_paddr != MEM_RET_CROSS_PAGE);
      // 读取1字节（合法长度），存入缓冲区
      ret_buf[i] = paddr_read(curr_paddr, 1);
    }
    // 拼接字节为最终结果（小端模式，符合RISC-V规范）
    word_t ret = 0;
    memcpy(&ret, ret_buf, len);
    return ret;
  }

  // 非跨页访问：先检查len是否合法，再读取
  MUXDEF(CONFIG_RT_CHECK, assert(len == 1 || len == 2 || len == 4), );
  return paddr_read(paddr, len);
}


void vaddr_write(vaddr_t addr, int len, word_t data) {
  paddr_t paddr = addr;
  switch (isa_mmu_check(paddr, len, 1)) {
  case MMU_DIRECT:
    break;
  case MMU_TRANSLATE:
    paddr = isa_mmu_translate(addr, len, NEMU_MEM_WRITE);
    break;
  case MMU_FAIL:
    assert(0);
    break;
  }

  // 处理内存访问失败
  if (paddr == MEM_RET_FAIL) {
    longjmp(memerr_jump_buffer, NEMU_MEMA_STOREERR);
  }

  // 处理跨页访问：逐字节写入（确保len=1，避免host_read断言）
  if (paddr == MEM_RET_CROSS_PAGE) {
    uint8_t *data_buf = (uint8_t *)&data;
    // 逐字节遍历要写入的地址
    for (int i = 0; i < len; i++) {
      vaddr_t curr_vaddr = addr + i;
      // 翻译当前字节的物理地址
      paddr_t curr_paddr = isa_mmu_translate(curr_vaddr, 1, NEMU_MEM_WRITE);
      printf("write cross page vaddr:%x->paddr:%x\n",curr_vaddr,curr_paddr);
      if (curr_paddr == MEM_RET_FAIL) {
        longjmp(memerr_jump_buffer, NEMU_MEMA_STOREERR);
      }
      // 单个字节不会跨页，断言兜底
      assert(curr_paddr != MEM_RET_CROSS_PAGE);
      // 写入1字节（合法长度）
      paddr_write(curr_paddr, 1, data_buf[i]);
    }
    return;
  }

  // 非跨页访问：检查len合法性，再写入
  MUXDEF(CONFIG_RT_CHECK, assert(len == 1 || len == 2 || len == 4), );
  paddr_write(paddr, len, data);
}