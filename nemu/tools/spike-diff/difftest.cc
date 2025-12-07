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

#include "mmu.h"
#include "sim.h"
#include "../../include/common.h"
#include <difftest-def.h>

#define NR_GPR MUXDEF(CONFIG_RVE, 16, 32)

static std::vector<std::pair<reg_t, abstract_device_t*>> difftest_plugin_devices;
static std::vector<std::string> difftest_htif_args;
static std::vector<std::pair<reg_t, mem_t*>> difftest_mem(
    1, std::make_pair(reg_t(DRAM_BASE), new mem_t(CONFIG_MSIZE)));
static debug_module_config_t difftest_dm_config = {
  .progbufsize = 2,
  .max_sba_data_width = 0,
  .require_authentication = false,
  .abstract_rti = 0,
  .support_hasel = true,
  .support_abstract_csr_access = true,
  .support_abstract_fpr_access = true,
  .support_haltgroups = true,
  .support_impebreak = true
};

struct diff_context_t {
  word_t gpr[MUXDEF(CONFIG_RVE, 16, 32)];
  word_t pc;
};

struct {
  word_t num;
  word_t csr_idx[4096];
}csr_list;

static sim_t* s = NULL;
static processor_t *p = NULL;
static state_t *state = NULL;

void sim_t::diff_init(int port) {
  p = get_core("0");
  state = p->get_state();
}

void sim_t::diff_step(uint64_t n) {
  step(n);
}

void sim_t::diff_get_csrs(void* diff_context) {
  word_t * csrs = (word_t*)diff_context;
  for(int i=0;i<csr_list.num;i++){
    csrs[i]=p->difftest_get_csr(csr_list.csr_idx[i]);
  }
}

void sim_t::diff_init_csr_idx(uint32_t *idx_list) {
  int idx=0;
  for(;idx_list[idx]!=0;idx++){
    csr_list.csr_idx[idx]=idx_list[idx];
  }
  csr_list.num=idx;
}

void sim_t::diff_get_regs(void* diff_context) {
  struct diff_context_t* ctx = (struct diff_context_t*)diff_context;
  for (int i = 0; i < NR_GPR; i++) {
    ctx->gpr[i] = state->XPR[i];
  }
  ctx->pc = state->pc;
}

void sim_t::diff_set_regs(void* diff_context) {
  struct diff_context_t* ctx = (struct diff_context_t*)diff_context;
  for (int i = 0; i < NR_GPR; i++) {
    state->XPR.write(i, (sword_t)ctx->gpr[i]);
  }
  state->pc = ctx->pc;
}

void sim_t::diff_memcpy(reg_t dest, void* src, size_t n) {
  mmu_t* mmu = p->get_mmu();
  for (size_t i = 0; i < n; i++) {
    mmu->store<uint8_t>(dest+i, *((uint8_t*)src+i));
  }
}

static word_t read_csr_by_index(state_t* state, int csr_idx) {
    if (state == nullptr) return 0;

    // CSR地址与state_t成员变量的映射
    switch (csr_idx) {
        // Machine模式CSR
        case 0x300: return state->mstatus ? state->mstatus->read() : 0; // mstatus
        case 0x301: return state->misa ? state->misa->read() : 0;       // misa
        case 0x304: return state->mie ? state->mie->read() : 0;         // mie
        case 0x305: return state->mtvec ? state->mtvec->read() : 0;     // mtvec
        case 0x340: { /* mscratch 可能通过 csrmap 访问 */ 
                     auto it = state->csrmap.find(csr_idx);
                     return it != state->csrmap.end() ? it->second->read() : 0; }
        case 0x341: return state->mepc ? state->mepc->read() : 0;       // mepc
        case 0x342: return state->mcause ? state->mcause->read() : 0;   // mcause
        case 0x343: return state->mtval ? state->mtval->read() : 0;     // mtval
        case 0x344: return state->mip ? state->mip->read() : 0;         // mip
        // Supervisor模式CSR (如果有)
        case 0x180: return state->satp ? state->satp->read() : 0;       // satp
        // ... 添加其他你在 csr_list 中定义的 CSR 索引
        default:
            // 尝试从 csrmap 中查找（对于一些通过map管理的CSR）
            auto it = state->csrmap.find(csr_idx);
            if (it != state->csrmap.end()) {
                return it->second->read();
            }
            // 如果没有实现，可以返回0，但最好记录一下以便调试
            // printf("Warning: CSR 0x%x not implemented for difftest.\n", csr_idx);
            return 0;
    }
}

void sim_t::diff_get_csr(void* diff_context) {
    word_t* csrs = (word_t*)diff_context;
    for(int i = 0; i < csr_list.num; i++) {
        // 使用辅助函数，而不是 p->difftest_get_csr
        csrs[i] = read_csr_by_index(state, csr_list.csr_idx[i]);
    }
}

extern bool difftest_dut_csr_notexist;

extern "C" {

__EXPORT void difftest_memcpy(paddr_t addr, void *buf, size_t n, bool direction) {
  if (direction == DIFFTEST_TO_REF) {
    s->diff_memcpy(addr, buf, n);
  } else {
    assert(0);
  }
}

__EXPORT void difftest_regcpy(void* dut, bool direction) {
  if (direction == DIFFTEST_TO_REF) {
    s->diff_set_regs(dut);
  } else {
    s->diff_get_regs(dut);
  }
}

__EXPORT void difftest_csrcpy(word_t* csr_array) {
  s->diff_get_csrs(csr_array);
}

__EXPORT void difftest_exec(uint64_t n) {
  s->diff_step(n);
}

__EXPORT void difftest_init(int port,uint32_t* csr_idx) {
  difftest_htif_args.push_back("");
  const char *isa = "RV" MUXDEF(CONFIG_RV64, "64", "32") MUXDEF(CONFIG_RVE, "E", "I") "MA";
  cfg_t cfg(/*default_initrd_bounds=*/std::make_pair((reg_t)0, (reg_t)0),
            /*default_bootargs=*/nullptr,
            /*default_isa=*/isa,
            /*default_priv=*/DEFAULT_PRIV,
            /*default_varch=*/DEFAULT_VARCH,
            /*default_misaligned=*/false,
            /*default_endianness*/endianness_little,
            /*default_pmpregions=*/16,
            /*default_mem_layout=*/std::vector<mem_cfg_t>(),
            /*default_hartids=*/std::vector<size_t>(1),
            /*default_real_time_clint=*/false,
            /*default_trigger_count=*/4);
  s = new sim_t(&cfg, false,
      difftest_mem, difftest_plugin_devices, difftest_htif_args,
      difftest_dm_config, nullptr, false, NULL,
      false,
      NULL,
      true);
  s->diff_init(port);
  s->diff_init_csr_idx(csr_idx);
}

__EXPORT void difftest_raise_intr(uint64_t NO) {
  trap_t t(NO);
  p->take_trap_public(t, state->pc);
}

__EXPORT void difftest_csr_notexist(void) {
  difftest_dut_csr_notexist = true;
}

}