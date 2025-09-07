/***************************************************************************************
 * Copyright (c) 2014-2022 Zihao Yu, Nanjing University
 *
 * NEMU is licensed under Mulan PSL v2.
 * You can use this software according to the terms and conditions of the Mulan
 *PSL v2. You may obtain a copy of Mulan PSL v2 at:
 *          http://license.coscl.org.cn/MulanPSL2
 *
 * THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY
 *KIND, EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO
 *NON-INFRINGEMENT, MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
 *
 * See the Mulan PSL v2 for more details.
 ***************************************************************************************/

#include "isa-def.h"
#include <isa.h>
#include <memory/paddr.h>

// this is not consistent with uint8_t
// but it is ok since we do not access the array directly
// t0:0x80000000
static const uint32_t img[] = {
    0x00000297, // auipc t0,0
    0x00028823, // sb  zero,16(t0)
    0x0102c503, // lbu a0,16(t0)
    0x00100073, // ebreak (used as nemu_trap)
    0xdeadbeef, // some data
};

extern bool soc_img;

static void restart() {
  /* Set the initial program counter. */
  if (soc_img)
    cpu.pc = FLASH_BASE;
  else
    cpu.pc = RESET_VECTOR;

  /* The zero register is always 0. */
  cpu.gpr[0] = 0;
}

void init_isa() {
  /* Load built-in image. */
  memcpy(guest_to_host(RESET_VECTOR), img, sizeof(img));

  /* Initialize this virtual computer system. */
  restart();
  // cpu.csr[NEMU_CSR_MCAUSE]=0xb;//mcause
  // cpu.csr[NEMU_CSR_MSTATUS] = 0x0; //TODO:WHY mstatus
  // cpu.PRIV = NEMU_PRIV_M;
  // cpu.csr[NEMU_CSR_MVENDROID] = 0x79737978; // ysyx
  // cpu.csr[NEMU_CSR_MARCHID] = 0x15fdf65;  // 学号
  // cpu.csr[NEMU_CSR_SATP] = 0;//satp
  // cpu.csr[NEMU_CSR_MISA] = 0x4014112d;//satp

  cpu.PRIV = NEMU_PRIV_M;
  cpu.csr[NEMU_CSR_V_MVENDROID] = 0x79737978; // ysyx
  cpu.csr[NEMU_CSR_V_MARCHID] = 0x15fdf65;    // 学号
  cpu.csr[NEMU_CSR_V_MISA] = 0x40141101;      // satp
  //work-arounds
  cpu.csr[NEMU_CSR_V_PMPCFG0] = 0x0000001f;
  cpu.csr[NEMU_CSR_V_PMPADDR0] = 0xffffffff;
}
