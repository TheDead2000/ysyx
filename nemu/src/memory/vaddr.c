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
  // return paddr_read(addr, len);
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
  
  if(paddr == MEM_RET_FAIL){
    longjmp(memerr_jump_buffer, NEMU_MEMA_READERR);
  }
  
  // 处理跨页访问的情况
  if(paddr == MEM_RET_CROSS_PAGE) {
    // 分段读取：分别读取两个页面的数据
    vaddr_t addr1 = addr;
    vaddr_t addr2 = addr + (0x1000 - (addr & (0x1000 - 1)));
    int len1 = addr2 - addr1;
    int len2 = len - len1;
    
    // 确保不会再次跨页
    assert(len1 > 0 && len1 <= len);
    assert(len2 > 0 && len2 <= len);
    
    // 分别读取两个部分
    word_t value1 = vaddr_read(addr1, len1);
    word_t value2 = vaddr_read(addr2, len2);
    
    // 合并结果（小端序）
    return value1 | (value2 << (len1 * 8));
  }
  
  //assert(paddr != MEM_RET_CROSS_PAGE);
  return paddr_read(paddr, len);
}

void vaddr_write(vaddr_t addr, int len, word_t data) {
  // paddr_write(addr, len, data);
  paddr_t paddr=addr;
  switch (isa_mmu_check(paddr, len, 0)) {
  case MMU_DIRECT:
    break;
  case MMU_TRANSLATE:
    paddr = isa_mmu_translate(addr,len,NEMU_MEM_WRITE);
    break;
  case MMU_FAIL:
    assert(0);
    break;
  }
  assert(paddr != MEM_RET_CROSS_PAGE);
  //assert(paddr != MEM_RET_FAIL);
  if(paddr==MEM_RET_FAIL){
    longjmp(memerr_jump_buffer, NEMU_MEMA_STOREERR);
  }
  paddr_write(paddr, len,data);
}
