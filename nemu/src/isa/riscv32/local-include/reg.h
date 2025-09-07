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

#ifndef __RISCV_REG_H__
#define __RISCV_REG_H__

#include "isa.h"
#include <common.h>
#include <cpu/decode.h>
#include <stdint.h>
void difftest_csr_notexist();

#pragma GCC diagnostic ignored "-Wunused-variable"

enum {NEMU_CSROP_CSRRW, NEMU_CSROP_CSRR, NEMU_CSROP_CSRRS, NEMU_CSROP_CSRRC, NEMU_CSROP_CSRRWI, NEMU_CSROP_CSRRSI,NEMU_CSROP_CSRRCI};

static inline int check_reg_idx(int idx) {
  IFDEF(CONFIG_RT_CHECK, assert(idx >= 0 && idx < MUXDEF(CONFIG_RVE, 16, 32)));
  return idx;
}

static inline int get_csr_reg(int idx) {
  IFDEF(CONFIG_RT_CHECK, assert(idx >= 0 && idx < 4096));
  return idx;
}

#define gpr(idx) (cpu.gpr[check_reg_idx(idx)])

static inline bool check_defined(uint32_t idx) {
  switch (idx) {
#define GenCSR(name, paddr)                                                    \
  case NEMU_CSR_V_##name:                                                      \
    return true;
    break;
    CSR_LIST
#undef GenCSR
  default:
      return false;
   //这里只做权限检查,更新的逻辑放在inst.c里面!
  }
}

#define CSR_READONLY_MASK 0b110000000000
#define CSR_PRIV_MASK 0b001100000000

static inline bool check_write(uint32_t idx) {
  if ((idx & CSR_READONLY_MASK) == CSR_READONLY_MASK) {
    return false;
  } else
    return check_defined(idx);
}



static inline bool check_read(uint32_t idx) {

  return check_defined(idx);
}

/*
// 统一读写宏（返回可赋值的左值）
// 尝试使用一个宏来判断,但是很失败,似乎单靠宏无法简单优雅的实现CSR的读写权限/掩码控制
#define csr(idx,s) \
  (*({                                                                         \
    uint32_t *__ptr = check_write(idx,s) ? &(cpu.csr[(idx)]) : &dummy; \
    (check_read(idx,s) ? (void)0 : (dummy = 0));              \
    __ptr;                                                                     \
  }))
*/

#define csr(idx) (cpu.csr[get_csr_reg(idx)])

static inline const char *reg_name(int idx) {
  extern const char *regs[];
  return regs[check_reg_idx(idx)];
}

#endif
