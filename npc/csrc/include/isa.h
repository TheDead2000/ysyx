#include <stdint.h>
#include "macro.h"
#include "debug.h"

#ifndef ISA_H
#define ISA_H


#define word_t uint32_t 
#define paddr_t uint32_t 
#define vaddr_t uint32_t


typedef struct {
  word_t gpr[MUXDEF(CONFIG_RVE, 16, 32)];
  vaddr_t pc;
} CPU_state;

word_t isa_reg_str2val(const char *s, bool *success);
int run(int step);
void isa_reg_display();
uint32_t mem_read(uint32_t addr);
extern uint32_t dpic_pc;
extern uint32_t dpic_n_pc;
extern word_t inst;//TODO!!

#endif