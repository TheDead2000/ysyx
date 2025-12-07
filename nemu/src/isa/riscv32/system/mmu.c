// /***************************************************************************************
// * Copyright (c) 2014-2022 Zihao Yu, Nanjing University
// *
// * NEMU is licensed under Mulan PSL v2.
// * You can use this software according to the terms and conditions of the Mulan PSL v2.
// * You may obtain a copy of Mulan PSL v2 at:
// *          http://license.coscl.org.cn/MulanPSL2
// *
// * THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
// * EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
// * MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
// *
// * See the Mulan PSL v2 for more details.
// ***************************************************************************************/

// #include "common.h"
// #include <isa.h>
// #include <memory/vaddr.h>
// #include <memory/paddr.h>

// /***************************************************************************************
// * Copyright (c) 2014-2022 Zihao Yu, Nanjing University
// *
// * NEMU is licensed under Mulan PSL v2.
// * You can use this software according to the terms and conditions of the Mulan PSL v2.
// * You may obtain a copy of Mulan PSL v2 at:
// *          http://license.coscl.org.cn/MulanPSL2
// *
// * THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
// * EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
// * MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
// *
// * See the Mulan PSL v2 for more details.
// ***************************************************************************************/

// #include "common.h"
// #include "debug.h"
// #include <isa.h>
// #include <memory/vaddr.h>
// #include <memory/paddr.h>

// typedef uint32_t PTE;
// #define PTE_V 0x01
// #define PTE_R 0x02
// #define PTE_W 0x04
// #define PTE_X 0x08
// #define PTE_U 0x10
// #define PTE_A 0x40
// #define PTE_D 0x80

// #define PTE_PPN_MASK (0xFFFFFC00u)
// #define PTE_PPN(x) (((x) & PTE_PPN_MASK) >> 10)
// #define PGT1_ID(val) (val >> 22)
// #define PGT2_ID(val) ((val & 0x3fffff) >> 12)
// #define OFFSET(val) (val & 0xfff)

// paddr_t isa_mmu_translate(vaddr_t vaddr, int len, int type) {

//     if ( 
//         (vaddr >=0xa00003f8 && vaddr <=0xa00003ff)  || (vaddr>=0xa0000048 && vaddr <= 0xa000004f)  ) {
//         return vaddr;
//     }
//     else{
//     paddr_t pte_1_addr = (cpu.csr[NEMU_CSR_SATP] << 12) + PGT1_ID(vaddr) * 4;
//     PTE pte_1 = paddr_read(pte_1_addr, sizeof(PTE));
//     // printf("vaddr=%x\n", vaddr);
//     // printf("pte_1_addr=%x, pte_1=%x\n", pte_1_addr, pte_1);
//     // printf("pte_1 & PTE_V=%x\n", pte_1 & PTE_V);
//     Assert(pte_1 & PTE_V, "first class pte is not valid, vaddr=%x", vaddr);

//     // 检查一级页表项是否是叶子页表项（超级页）
//     if ((pte_1 & PTE_R) || (pte_1 & PTE_W) || (pte_1 & PTE_X)) {
//         // 超级页映射：使用一级页表项的PPN和vaddr的22位偏移
//         paddr_t pa = (PTE_PPN(pte_1) << 12) | (vaddr & 0x3FFFFF);
//         //printf("Super page mapping: pa=%x\n", pa);
//         // 更新访问和修改位
//         // 注意：对于超级页，我们更新一级页表项
//         if (type == MEM_TYPE_WRITE) {
//             pte_1 |= PTE_A | PTE_D;
//         } else {
//             pte_1 |= PTE_A;
//         }
//         // printf("run here\n");
//         paddr_write(pte_1_addr, 4, pte_1);
//         return pa;
//     }

//     // 否则，走二级页表
//     paddr_t pte_2_addr = (PTE_PPN(pte_1) << 12) + PGT2_ID(vaddr) * 4;
//     PTE pte_2 = paddr_read(pte_2_addr, sizeof(PTE));
//     //printf("pte_2_addr=%x, pte_2=%x\n", pte_2_addr, pte_2);
//     Assert(pte_2 & PTE_V, "second class pte is not valid, vaddr=%x", vaddr);

//     // 记录访问、写入标志。0 是取指，1 是读取，2 是写入
//     if (type == MEM_TYPE_WRITE) {
//         pte_2 |= PTE_A | PTE_D;
//     } else {
//         pte_2 |= PTE_A;
//     }
//     paddr_write(pte_2_addr, 4, pte_2);

//     paddr_t pa = PTE_PPN(pte_2) << 12 | OFFSET(vaddr);
//     //printf("4KB page mapping: pa=%x\n", pa);
//     return pa;
//     }


// }

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
#include <memory/vaddr.h>
#include <memory/paddr.h>
#include <stdint.h>

#define PAGE(x) ((x) << 12) //get page addr
#define PTEM(x) (((uint32_t)(x)) & 0xFFFFFC00)
#define PAGE_VALID(x) ((x) & 0x1)
#define XWR(x) (((x) >> 1) & 0b111)


void print_all_entry(vaddr_t vaddr){
  printf("All available PTEs:\n");
  for(int i=0;i<4096;i++){
  uint32_t *ptea1 = (uint32_t*)guest_to_host(vaddr + i*sizeof(uint32_t));
  uint32_t pte1 = *ptea1;
  if(pte1!=0)
    printf("%d,%x\n",i,pte1);
  }
}

extern uint32_t stval_nextvalue;

// page table walk
// pta page table address
// pte page table entry
// ptea page table entry address
// vpn virtual page number
// 对内存区间为[vaddr, vaddr + len), 类型为type的内存访问进行地址转换
// TODO:使用assertion检查页目录项和页表项的present/valid位, 如果发现了一个无效的表项, 及时终止NEMU的运行999
paddr_t isa_mmu_translate(vaddr_t vaddr, int len, int type) {
  // Log("Vaddr:%x,len:%x",vaddr,len);
  vaddr_t pta1 = PAGE(cpu.csr[NEMU_CSR_SATP] & 0x3FFFFF); // get root_page_table_addr
  vaddr_t vpn1 = vaddr >> 22;
  vaddr_t vpn0 = (vaddr >> 12) & 0x3FF;

  // do page_walk
  uint32_t *ptea1 = (uint32_t*)guest_to_host(pta1 + vpn1*sizeof(uint32_t));
  uint32_t pte1 = *ptea1;
  uint32_t pa = 0;
  uint32_t pte = 0;
  IFDEF(CONFIG_MMU_TRACE,Log("PTE1:0x%x-0x%x",vaddr,pte););

  //print_all_entry(pta1);
  if(!(PAGE_VALID(pte1))){
    IFDEF(CONFIG_MMU_TRACE,Log("Invalid PET1 for addr 0x%x,pte=0x%x",vaddr,pte1););
    IFDEF(CONFIG_MMU_TRACE,print_all_entry(pta1););
    stval_nextvalue = vaddr;
    return MEM_RET_FAIL;
  }
  if(XWR(pte1)!=0){
    //point to a 4MB's page
    vaddr_t offset = vaddr & 0x3FFFFF;
    if(offset+len>0x400000){
      IFDEF(CONFIG_MMU_TRACE,Log("MMU_ADDR_CROSS_PAGE1"););
      return MEM_RET_CROSS_PAGE;
    }
    pte = pte1;
    pa=(PTEM(pte1)<<2) + offset;
  }else{
    IFDEF(CONFIG_MMU_TRACE,Log("GOING TO PTE0 AT:0x%x",vaddr););
    vaddr_t offset = vaddr & 0xFFF;
    //point to the next level
    vaddr_t pta0 = (PTEM(pte1)<<2);
    uint32_t *ptea0 = (uint32_t *)guest_to_host(pta0 + vpn0*sizeof(uint32_t));
    uint32_t pte0 = *ptea0;
    IFDEF(CONFIG_MMU_TRACE,Log("PTE0:0x%x-0x%x",vaddr,pte0););
    if (!(PAGE_VALID(pte0))) {
      IFDEF(CONFIG_MMU_TRACE,Log("INVALID PTE0 for vaddr 0x%x pte 0x%x", vaddr, pte0););
      stval_nextvalue = vaddr;
      return MEM_RET_FAIL;
    }
    // check bounds
    if (offset + len > 0x1000) {
      IFDEF(CONFIG_MMU_TRACE,Log("CROSS_PAGE0"););
      stval_nextvalue = vaddr;
      return MEM_RET_CROSS_PAGE;
    }
    //final page address
    pte = pte0;
    pa = (PTEM(pte0)<<2) + offset;

  }
#define PTE_A 0x040
#define PTE_D 0x080

  // check RWX
  // 正常应该抛异常的,这里就简单实现了
  switch(type){
    case NEMU_MEM_READ:
      if(!(XWR(pte)&0b1)||!(pte&PTE_A)){
        stval_nextvalue = vaddr;
        IFDEF(CONFIG_MMU_TRACE,Log("MEM_RET_READ_FAIL"););
        return MEM_RET_FAIL;
      }
      break;
    case NEMU_MEM_WRITE:
      if(!(XWR(pte)&0b10)||!(pte&PTE_A)||!(pte&PTE_D)){
        stval_nextvalue = vaddr;
        IFDEF(CONFIG_MMU_TRACE,Log("MEM_RET_WRITE_FAIL"););
        return MEM_RET_FAIL;
      }
      break;
    case NEMU_MEM_EXEC:
      if(!(XWR(pte)&0b100)||!(pte&PTE_A)){
        stval_nextvalue = vaddr;
        IFDEF(CONFIG_MMU_TRACE,Log("MEM_RET_EXEC_FAIL"););
        return MEM_RET_FAIL;
      }
      break;
    case NEMU_MEM_SCAN:
      break;
    default:
      assert(0);
  }

  // pte HERE!
  // check U (TODO)
  // G&A&D don't care!

  Log("Translate_result:%x-%x",vaddr,pa);
  return pa;

  // | ppn1 | ppn0 | offset
}
// Translate/direct/fail!
/*
TODO:is this okey?
The NEMU Address Table:
disk: 0x80000000-???
programs:0x83000000-disk.end<-translate
device:0xa0000000
*/
// 检查当前系统状态下对内存区间为[vaddr, vaddr + len), 类型为type的访问是否需要经过地址转换.
int isa_mmu_check(vaddr_t vaddr, int len, int type) {
  vaddr_t translate= cpu.csr[NEMU_CSR_SATP]>>31; //enable sv32-> disables on M-mode!
  // vaddr_t end = vaddr+len;
  // if (vaddr > 0x80000000 && vaddr < 0xa0000000&&translate) {
  //   if(end > 0x80000000 && end < 0xa0000000)
  //     return MMU_TRANSLATE;
  //   else
  //     return MMU_FAIL;
  // }
  // else
  //   return MMU_DIRECT;
  if (translate)
    return MMU_TRANSLATE;
  else
   return MMU_DIRECT;;
}
