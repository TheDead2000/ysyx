// #include "../include/ydb_all.h"
#include "common.h"
#include "isa.h"
#include "utils.h"

uint64_t time_now = 114514;

uint32_t mem_read(uint32_t pc);
// 默认的程序
uint32_t default_proj[0x80] = {
    0x00448493, 0x00448493, 0x00448493, 0x00448493, 0x00448493, 0x00448493,
    0x00448493, 0x00448493, 0x00448493, 0x00448493, 0x00448493, 0x00448493,
    0x00448493, 0x00448493, 0x00100073, 0x00448493, 0x00448493, 0x00448493,
    0x00448493, 0x00448493, 0x00448493,
};
//16MB pmem
uint32_t *mem;
// 4KB mrom
uint32_t *mrom;
// 16MB flash
uint32_t *flash;
// 4MB
uint32_t *psram;

word_t mem_size = 84;

uint32_t mem_read(uint32_t pc) {
  if (pc == 0xa0000048) {
    time_now = get_time_local();
    return (uint32_t)time_now;
  }
  if (pc == 0xa000004c) {
    return (uint32_t)(time_now >> 32);
  }
  return mem[(pc - 0x80000000) / 4];
}

void init_mrom(char *img_file) {
  if (!img_file)
    return;
  int size = 0;
  FILE *fp = fopen(img_file, "rb");
  fseek(fp, 0, SEEK_END);
  size = ftell(fp);
  fseek(fp, 0, SEEK_SET);
  fread(mrom, size, 1, fp);
  fclose(fp);
}

void init_flash() {
  for (int i = 0; i < 1000; i++) {
    flash[i] = i;
  }
}
void init_flash_img(char *img_file) {
  if (!img_file) {
    for (int i = 0; i < 20; i++)
      flash[i] = default_proj[i];
    return;
  }
  int size = 0;
  FILE *fp = fopen(img_file, "rb");
  fseek(fp, 0, SEEK_END);
  size = ftell(fp);
  fseek(fp, 0, SEEK_SET);
  fread(flash, size, 1, fp);
  fclose(fp);
}
void init_mem() {
  mrom = (uint32_t *)malloc(4 * 1024 * sizeof(uint8_t));
  flash = (uint32_t *)malloc(128 * 1024 * 1024 * sizeof(uint8_t));
  psram = (uint32_t *)malloc(4 * 1024 * 1024 * sizeof(uint8_t));
  mem = (uint32_t *)malloc(16 * 1024 * 1024 * sizeof(uint8_t));
}
void free_mem() {
  free(mrom);
  free(flash);
  free(psram);
}
void init_pmem_img(char *img_file) {
  if (img_file != NULL) {
    // 原本是把镜像加载进pmem中
    FILE *fp = fopen(img_file, "rb");
    fseek(fp, 0, SEEK_END);
    mem_size = ftell(fp);
    Log("The image is %s, size = %d", img_file, mem_size);
    // #ifdef CONFIG_USE_PMEM
    fseek(fp, 0, SEEK_SET);
    int ret = fread(mem, mem_size, 1, fp);
    // #endif
    fclose(fp);
  } else {
    Log("No Img file Loaded,Using Default IMG");
    for (int i = 0; i < 20; i++)
      mem[i] = default_proj[i];
    return;
  }
}

void init_img(char *img_file) {
  init_mem();
  // init_flash();
  // init_flash_img("/ysyx-workbench/npc/char-test.bin");
  init_flash_img(img_file);
  init_pmem_img(img_file);
  // init_mrom(img_file);

}