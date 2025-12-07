#include "common.h"
#include "stdint.h"
#include "stdio.h"
#include <stdio.h>
FILE *fp;
FILE *fp_b;
// #define WRITE_PC
// #define WRITE_BRANCH
// #define FORWARD_CALC
enum {
  TYPE_I,
  TYPE_U,
  TYPE_S,
  TYPE_N, // none
  TYPE_J,
  TYPE_R,
  TYPE_B
};
// TODO:calc the times of each instr ,and the acc of the arg
int last_write = 0;
int forward_calc = 0;
struct {
  uint64_t jal_f;
  uint64_t jal; // 直接跳转
  uint64_t jalr_f;
  uint64_t jalr; //
  uint64_t b;
} inst_count;
void printInstCount() {
  printf("jal_f: %lu\n", inst_count.jal_f);
  printf("jal: %lu\n", inst_count.jal);
  printf("jalr_f: %lu\n", inst_count.jalr_f);
  printf("jalr: %lu\n", inst_count.jalr);
  printf("b: %lu\n", inst_count.b);
}

void trace_prev(vaddr_t pc, vaddr_t n_pc, word_t inst, int rs1, int rs2, int rd,
                int imm, int type, char *name) {
  // printf("PC: %x, Inst: %x, RS1: %d, RS2: %d, RD: %d\n", pc, inst, rs1, rs2,
  // rd);
#ifdef FORWARD_CALC
  if (rs1 != 0 && rs1 == last_write) {
    forward_calc++;
  } else if (rs2 != 0 && rs2 == last_write) {
    forward_calc++;
  }
  last_write = rd;
#endif
  // printf("%s\n",name);
  if (strcmp(name, "jal_f") == 0)
    inst_count.jal_f++;
  else if (strcmp(name, "jal") == 0)
    inst_count.jal++;
  else if (strcmp(name, "jalr_f") == 0)
    inst_count.jalr_f++;
  else if (strcmp(name, "jalr") == 0)
    inst_count.jalr++;
  else if (type == TYPE_B) {
    inst_count.b++;
  }
  IFDEF(WRITE_PC, fprintf(fp, "%x\n", pc);)
}
void trace_branch(vaddr_t pc, vaddr_t n_pc, int type, int imm, char *name) {
#ifdef WRITE_BRANCH
  if (type == TYPE_B) {
    fprintf(fp_b, "%x,%x,%x,%s\n", pc, n_pc, imm, "B_Type");
  }
  if (strcmp(name, "jal_f") == 0 || strcmp(name, "jal") == 0 ||
      strcmp(name, "jalr_f") == 0 || strcmp(name, "jalr") == 0 ||
    strcmp(name, "ret") == 0) {
    fprintf(fp_b, "%x,%x,%x,%s\n", pc, n_pc, imm, name);
  }
#endif
}
void init_pc_trace() {
  fp = fopen("pc_trace", "w");
  fp_b = fopen("b_trace", "w");
}
void close_pc_trace() {
  printInstCount();
  // printf("forward_times:%d",forward_calc);
  fclose(fp);
  fclose(fp_b);
}