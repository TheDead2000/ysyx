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

#include <memory/host.h>
#include <memory/paddr.h>
#include <device/mmio.h>
#include <isa.h>
#include <common.h>

// my-func
void record_pread(paddr_t addr, int len);
void record_pwrite(paddr_t addr, int len, word_t data);

#if defined(CONFIG_PMEM_MALLOC)
static uint8_t *pmem = NULL;
static uint8_t *flash = NULL;
static uint8_t *sram = NULL;
static uint8_t *mrom = NULL;
static uint8_t *sdram = NULL;
static uint8_t *psram = NULL;
static uint8_t *plic = NULL;
static uint8_t *rubbish = NULL;

#else // CONFIG_PMEM_GARRAY

static uint8_t pmem[CONFIG_MSIZE] PG_ALIGN = {};
static uint8_t flash[FLASH_SIZE] PG_ALIGN = {};
static uint8_t sram[SRAM_SIZE] PG_ALIGN = {};
static uint8_t mrom[MROM_SIZE] PG_ALIGN = {};
static uint8_t sdram[SDRAM_SIZE] PG_ALIGN = {};
static uint8_t psram[PSRAM_SIZE] PG_ALIGN = {};
static uint8_t plic[CONFIG_PLIC_MEM_SIZE] PG_ALIGN = {};
static uint8_t rubbish[0x8] PG_ALIGN = {};
#endif

extern bool is_skip_ref;

uint8_t *guest_to_host(paddr_t paddr)
{
#if defined(CONFIG_TARGET_SHARE) || defined(CONFIG_SOC_DEVICE)
  if (MEM_IN(paddr,MROM_BASE,MROM_TOP)) // mrom
    return mrom + paddr - MROM_BASE;
  if (MEM_IN(paddr, SRAM_BASE, SRAM_TOP)) // sram
    return sram + paddr - SRAM_BASE;
  if (MEM_IN(paddr, FLASH_BASE, FLASH_TOP)) // FLASH
    return flash + paddr - FLASH_BASE;
  if (MEM_IN(paddr, SDRAM_BASE, SDRAM_TOP)) // sdram
    return sdram + paddr - SDRAM_BASE;
  if (MEM_IN(paddr, PSRAM_BASE, PSRAM_TOP)) // psram
    return psram + paddr - PSRAM_BASE;
#endif
#ifdef CONFIG_HAS_PLIC
  if(MEM_IN(paddr, CONFIG_PLIC_MEM_BASE, CONFIG_PLIC_MEM_BASE+ CONFIG_PLIC_MEM_SIZE)){
    IFDEF(CONFIG_DIFFTEST,is_skip_ref = true;); 
    Log("accessing PLIC:(0x%x)",paddr);
    return plic + paddr - CONFIG_PLIC_MEM_BASE;
  }
#endif
  if (MEM_IN(paddr, CONFIG_MBASE, CONFIG_MBASE + CONFIG_MSIZE)) {
    return pmem + paddr - CONFIG_MBASE;
  }
  Log("Warning:assessing rubbish area!!!!");
  return rubbish;
}
paddr_t host_to_guest(uint8_t *haddr)
{
#if defined(CONFIG_TARGET_SHARE) || defined(CONFIG_SOC_DEVICE)
  if (PHY_IN(haddr, mrom, SRAM_BASE, SRAM_TOP)) // mrom
    return haddr - mrom + MROM_BASE;
  if (PHY_IN(haddr, sram, FLASH_BASE, FLASH_TOP)) // sram
    return haddr - sram + SRAM_BASE;
  if (PHY_IN(haddr, flash, FLASH_BASE, FLASH_TOP)) // flash
    return haddr - flash + FLASH_BASE;
  if (PHY_IN(haddr, sdram, SDRAM_BASE, SDRAM_TOP)) // sdram
    return haddr - sdram + SDRAM_BASE;
  if (PHY_IN(haddr, psram, PSRAM_BASE, PSRAM_TOP)) // psram
    return haddr - psram + PSRAM_BASE;
#endif
#ifdef CONFIG_HAS_PLIC
  if(PHY_IN(haddr,plic, CONFIG_PLIC_MEM_BASE, CONFIG_PLIC_MEM_BASE+ CONFIG_PLIC_MEM_SIZE)){
    return haddr - plic + CONFIG_PLIC_MEM_BASE;
  }
#endif
  if (PHY_IN(haddr, pmem, CONFIG_MBASE, CONFIG_MBASE + CONFIG_MSIZE))
    return haddr - pmem + CONFIG_MBASE;
  return haddr-rubbish;

}

static word_t pmem_read(paddr_t addr, int len)
{
  word_t ret = host_read(guest_to_host(addr), len);
  return ret;
}
// my-func
word_t warp_pmem_read(paddr_t addr)
{
  uint8_t *trans = pmem + (addr - CONFIG_MBASE);
  return *(uint32_t *)trans;
}

static void pmem_write(paddr_t addr, int len, word_t data)
{
  host_write(guest_to_host(addr), len, data);
}

static void out_of_bound(paddr_t addr) {
#ifdef CONFIG_SOC_DEVICE
  Log("address = " FMT_PADDR " is out of bound at pc = " FMT_WORD,
    addr, cpu.pc);
#else
  panic("address = " FMT_PADDR " is out of bound of pmem [" FMT_PADDR ", " FMT_PADDR "] at pc = " FMT_WORD,
        addr, PMEM_LEFT, PMEM_RIGHT, cpu.pc);
#endif

}

void init_mem()
{
#if defined(CONFIG_PMEM_MALLOC)
  pmem = malloc(CONFIG_MSIZE);
  flash = malloc(FLASH_SIZE);
  sram = malloc(SRAM_SIZE);
  mrom = malloc(MROM_SIZE);
  sdram = malloc(SDRAM_SIZE);
  psram = malloc(PSRAM_SIZE);
  plic = malloc(CONFIG_PLIC_MEM_SIZE);
  rubbish = malloc(0x8);
  assert(pmem);
  assert(flash);
  assert(sram);
  assert(mrom);
  assert(sdram);
  assert(psram);
  assert(rubbish);
#endif
  IFDEF(CONFIG_MEM_RANDOM, memset(pmem, rand(), CONFIG_MSIZE));
  Log("physical memory area [" FMT_PADDR ", " FMT_PADDR "]", PMEM_LEFT, PMEM_RIGHT);
}

// paddr_read()和paddr_write()会判断地址addr落在物理内存空间还是设备空间, 若落在物理内存空间, 就会通过pmem_read()和pmem_write()来访问真正的物理内存; 否则就通过map_read()和map_write()来访问相应的设备.
word_t paddr_read(paddr_t addr, int len)
{
  IFDEF(CONFIG_MTRACE, record_pread(addr, len);)
  if (likely(in_pmem(addr)))
    return pmem_read(addr, len);
  // IFDEF(CONFIG_SOC_DEVICE, return pmem_read(addr, len));
  IFDEF(CONFIG_DEVICE, return mmio_read(addr, len));
  out_of_bound(addr);
  return 100;
}

void paddr_write(paddr_t addr, int len, word_t data)
{
  IFDEF(CONFIG_MTRACE, record_pwrite(addr, len, data);)
  if (likely(in_pmem(addr)))
  {
    pmem_write(addr, len, data);
    return;
  }
  // IFDEF(CONFIG_SOC_DEVICE, pmem_write(addr, len, data);return;)
  IFDEF(CONFIG_DEVICE, mmio_write(addr, len, data); return);
  out_of_bound(addr);
}
