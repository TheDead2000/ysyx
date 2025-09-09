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

#ifndef __MEMORY_PADDR_H__
#define __MEMORY_PADDR_H__

#include <common.h>

#define PMEM_LEFT  ((paddr_t)CONFIG_MBASE)
#define PMEM_RIGHT ((paddr_t)CONFIG_MBASE + CONFIG_MSIZE - 1)
#define RESET_VECTOR (PMEM_LEFT + CONFIG_PC_RESET_OFFSET)

enum {NEMU_MEM_ERROR,NEMU_MEM_READ,NEMU_MEM_WRITE,NEMU_MEM_EXEC,NEMU_MEM_SCAN};
enum {NEMU_MEMA_NORMAL,NEMU_MEMA_FETCHERR,NEMU_MEMA_READERR,NEMU_MEMA_STOREERR};

/* convert the guest physical address in the guest program to host virtual address in NEMU */
uint8_t* guest_to_host(paddr_t paddr);
/* convert the host virtual address in NEMU to guest physical address in the guest program */
paddr_t host_to_guest(uint8_t *haddr);

#define MROM_BASE 0x20000000
#define MROM_TOP 0x20000fff
#define SRAM_BASE 0x0f000000
#define SRAM_TOP 0x0fffffff
#define FLASH_BASE 0x30000000
#define FLASH_TOP 0x3fffffff
#define SDRAM_BASE 0xa0000000
#define SDRAM_TOP 0xbfffffff
#define PSRAM_BASE 0x80000000
#define PSRAM_TOP 0x9fffffff
#define MROM_SIZE 0x2000
#define FLASH_SIZE 0x10000000
#define SRAM_SIZE 0x10000000
#define SDRAM_SIZE 0x20000000
#define PSRAM_SIZE 0x10000000
#define MEM_IN(addr, start, end) ((addr >= (start)) && (addr <= (end)))
#define PHY_IN(haddr,phy_addr, start, end) ((haddr-phy_addr >= 0) && (haddr-phy_addr <= (end)-(start)))

static inline bool in_pmem(paddr_t addr) {
#if defined(CONFIG_TARGET_SHARE) || defined(CONFIG_SOC_DEVICE)
  if (MEM_IN(addr, MROM_BASE, MROM_TOP)) // mrom
    return true;
  if (MEM_IN(addr, SRAM_BASE, SRAM_TOP)) // sram
    return true;
  if (MEM_IN(addr, FLASH_BASE, FLASH_TOP)) // flash
    return true;
  if (MEM_IN(addr, SDRAM_BASE, SDRAM_TOP)) // sdram
    return true;
  if (MEM_IN(addr, PSRAM_BASE, PSRAM_TOP)) // psram
    return true;
#endif
#ifdef CONFIG_HAS_PLIC
  if(MEM_IN(addr, CONFIG_PLIC_MEM_BASE,CONFIG_PLIC_MEM_BASE+CONFIG_PLIC_MEM_SIZE))
    return true;
#endif 
  return addr - CONFIG_MBASE < CONFIG_MSIZE;
}

word_t paddr_read(paddr_t addr, int len);
void paddr_write(paddr_t addr, int len, word_t data);

#endif
