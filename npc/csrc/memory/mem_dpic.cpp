#include "mem.h"
#include "isa.h"
#include "svdpi.h"
#include "utils.h"
#include "trace.h"
#include "common.h"

extern uint64_t time_now;
// mtrace 使用dpi-c实现
extern "C" void flash_read(int32_t addr, int32_t *data) {
  *data = flash[addr / 4];
}
extern "C" void mrom_read(int32_t addr, int32_t *data) {
  *data = mrom[(addr - 0x20000000) / 4];
}

extern "C" void psram_read(int32_t addr, int32_t *data) {
  *data = psram[(addr - 0x80000000) / 4];
}
extern "C" void psram_write(int32_t addr, int32_t data) {

  ((uint8_t *)psram)[addr - 0x80000000] = data;
}

extern "C" int get_time(int raddr) {
  if (raddr == 0x10000048) {
    time_now = get_time_local();
    return (uint32_t)time_now;
  }
  if (raddr == 0x1000004c) {
    return (uint32_t)(time_now >> 32);
  }
  printf("get_time func recived addr : %x", raddr);
  assert(0);
  return -1;
}

extern "C" int pmem_read(int raddr) {
  // 总是读取地址为`raddr & ~0x3u`的4字节返回
  // Log("mem_read");
  int aligned_addr = raddr & ~0x3u; // 对齐地址
  return mem_read(aligned_addr);
}
extern "C" void pmem_write(int waddr, int wdata, char wmask) {
  int aligned_addr = waddr & ~0x3u; // 对齐地址
  int offset = waddr & 0x3u;
  if (aligned_addr == 0xa00003f8) {
    printf("%c", wdata);
    fflush(stdout);
    return;
  }
  uint32_t current_data = mem[(aligned_addr - 0x80000000) / 4];
  uint32_t new_data = current_data;

  for (int i = 0; i < 4; ++i) {
    if (wmask & (1 << (i))) {
      ((uint8_t *)&new_data)[i] = ((uint8_t *)&wdata)[i];
    }
  }
  mem[(aligned_addr - 0x80000000) / 4] = new_data;
}
extern "C" void record_inst(int unsigned addr, int unsigned inst) {
  // printf("addr=%xinst=%x\n", addr, inst);
  insert_icache_result(addr,inst);
}