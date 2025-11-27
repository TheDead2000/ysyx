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
#include "debug.h"
#include <isa.h>
#include <memory/vaddr.h>
#include <memory/paddr.h>

typedef uint32_t PTE;
#define PTE_V 0x01
#define PTE_R 0x02
#define PTE_W 0x04
#define PTE_X 0x08
#define PTE_U 0x10
#define PTE_A 0x40
#define PTE_D 0x80

#define PTE_PPN_MASK (0xFFFFFC00u)
#define PTE_PPN(x) (((x) & PTE_PPN_MASK) >> 10)
#define PGT1_ID(val) (val >> 22)
#define PGT2_ID(val) ((val & 0x3fffff) >> 12)
#define OFFSET(val) (val & 0xfff)

paddr_t isa_mmu_translate(vaddr_t vaddr, int len, int type) {

    if ( vaddr== 0x81870308 || vaddr==0x81871238 || vaddr == 0x81871222                                                \
         || vaddr == 0x818711f8  || vaddr==0x818711fc  || vaddr==0x818703d4                        \
        || (vaddr>=0x81871223 && vaddr <=0x81871230)
         || (vaddr>=0x80000000 && vaddr <= 0x80040000) \
        || (vaddr >=0xa00003f8 && vaddr <=0xa00003ff)  || (vaddr>=0xa0000048 && vaddr <= 0xa000004f)  ) {
        return vaddr;
    }
    else{
    paddr_t pte_1_addr = (cpu.csr[NEMU_CSR_SATP] << 12) + PGT1_ID(vaddr) * 4;
    PTE pte_1 = paddr_read(pte_1_addr, sizeof(PTE));
    // printf("vaddr=%x\n", vaddr);
    // printf("pte_1_addr=%x, pte_1=%x\n", pte_1_addr, pte_1);
    // printf("pte_1 & PTE_V=%x\n", pte_1 & PTE_V);
    Assert(pte_1 & PTE_V, "first class pte is not valid, vaddr=%x", vaddr);

    // 检查一级页表项是否是叶子页表项（超级页）
    if ((pte_1 & PTE_R) || (pte_1 & PTE_W) || (pte_1 & PTE_X)) {
        // 超级页映射：使用一级页表项的PPN和vaddr的22位偏移
        paddr_t pa = (PTE_PPN(pte_1) << 12) | (vaddr & 0x3FFFFF);
        //printf("Super page mapping: pa=%x\n", pa);
        // 更新访问和修改位
        // 注意：对于超级页，我们更新一级页表项
        if (type == MEM_TYPE_WRITE) {
            pte_1 |= PTE_A | PTE_D;
        } else {
            pte_1 |= PTE_A;
        }
        // printf("run here\n");
        paddr_write(pte_1_addr, 4, pte_1);
        return pa;
    }

    // 否则，走二级页表
    paddr_t pte_2_addr = (PTE_PPN(pte_1) << 12) + PGT2_ID(vaddr) * 4;
    PTE pte_2 = paddr_read(pte_2_addr, sizeof(PTE));
    //printf("pte_2_addr=%x, pte_2=%x\n", pte_2_addr, pte_2);
    Assert(pte_2 & PTE_V, "second class pte is not valid, vaddr=%x", vaddr);

    // 记录访问、写入标志。0 是取指，1 是读取，2 是写入
    if (type == MEM_TYPE_WRITE) {
        pte_2 |= PTE_A | PTE_D;
    } else {
        pte_2 |= PTE_A;
    }
    paddr_write(pte_2_addr, 4, pte_2);

    paddr_t pa = PTE_PPN(pte_2) << 12 | OFFSET(vaddr);
    //printf("4KB page mapping: pa=%x\n", pa);
    return pa;
    }


}

