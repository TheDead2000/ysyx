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

  // 处理内存访问失败（如权限错误）
  if (paddr == MEM_RET_FAIL) {
    longjmp(memerr_jump_buffer, NEMU_MEMA_READERR);
  }

  // 处理跨页访问：拆分访问为多个页内操作
  if (paddr == MEM_RET_CROSS_PAGE) {
    word_t ret = 0;
    int bytes_read = 0;
    vaddr_t curr_addr = addr;
    int curr_len = len;

    while (curr_len > 0) {
      // 计算当前页剩余的可访问字节数（4KB页边界）
      vaddr_t page_end = (curr_addr & ~0xFFF) + 0x1000;
      int chunk_len = page_end - curr_addr;
      if (chunk_len > curr_len) chunk_len = curr_len;

      // 翻译当前chunk的地址并读取
      paddr_t chunk_paddr = isa_mmu_translate(curr_addr, chunk_len, NEMU_MEM_READ);
      if (chunk_paddr == MEM_RET_FAIL) {
        longjmp(memerr_jump_buffer, NEMU_MEMA_READERR);
      }
      assert(chunk_paddr != MEM_RET_CROSS_PAGE); // 单个chunk不会跨页

      // 读取当前chunk的数据并拼接（小端模式，需注意字节序）
      word_t chunk_data = paddr_read(chunk_paddr, chunk_len);
      memcpy((uint8_t*)&ret + bytes_read, &chunk_data, chunk_len);

      // 更新剩余长度和地址
      bytes_read += chunk_len;
      curr_addr += chunk_len;
      curr_len -= chunk_len;
    }
    return ret;
  }

  // 非跨页访问，直接读取
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
