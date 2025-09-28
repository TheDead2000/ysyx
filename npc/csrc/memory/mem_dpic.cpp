#include "mem.h"
#include "isa.h"
#include "svdpi.h"
#include "utils.h"
#include "trace.h"
#include "common.h"

extern uint64_t time_now;
// mtrace 使用dpi-c实现
extern "C" void flash_read(int32_t addr, int32_t *data) {
    // 计算字地址和字节偏移
    uint32_t word_addr = addr & ~3;  // 对齐到字边界
    int byte_offset = addr & 3;      // 字节偏移 (0-3)
    
    // 读取整个字
    uint32_t word = flash[word_addr / 4];
    
    // 根据字节偏移提取对应的字节（小端序）
    uint8_t byte = (word >> (byte_offset * 8)) & 0xFF;
    
    // 返回零扩展的字节
    *data = byte;
    
    // 调试输出
    // printf("flash_read: addr=0x%08x, word_addr=0x%08x, offset=%d, word=0x%08x, byte=0x%02x\n", 
    //        addr, word_addr, byte_offset, word, byte);
}
extern "C" void mrom_read(int32_t addr, int32_t *data) {
  //  *data = 0x00100073;  // ebreak的机器码
  *data = mrom[(addr - 0x20000000) / 4];
  // printf("data=%x\n",*data);
}

// extern "C" void psram_read(int32_t addr, int32_t *data) {
//   *data = psram[(addr - 0x80000000) / 4];
// }
// extern "C" void psram_write(int32_t addr, int32_t data) {

//   ((uint8_t *)psram)[addr - 0x80000000] = data;
// }

extern "C" void psram_read(int32_t addr, int32_t *data) {
  *data = psram[(addr - 0x80000000) / 4];
  printf("psram read data :%x\n",data);
}

extern "C" void psram_write(int32_t addr, int32_t data, int32_t mask) {

    uint32_t wdata = data >> ((8-mask)*4);
    ((uint8_t *)psram)[addr - 0x80000000] = data;
    switch ( mask/2) {
    case 1: ((uint8_t *)psram)[addr - 0x80000000] = data;return;
    case 2: ((uint16_t *)psram)[addr - 0x80000000] = data; return;
    case 4: ((uint32_t *)psram)[addr - 0x80000000] = data;return;
  }
  printf("psram wdata %x\n",wdata);
}




extern "C" void psram_wr(int32_t addr, int32_t wen, int32_t ren, int32_t wdata, int32_t size, int32_t* rdata) {
    // 将地址映射到数组索引（假设地址从0开始）
    uint32_t index = addr;
    
    if (wen) {
        // 写操作
        printf("psram_write :%x\n",wdata);
        switch (size) {
            case 1: // 字节写
                psram[index] = wdata & 0xFF;
                break;
            case 3: // 半字写（2字节）
                psram[index] = (wdata >> 0) & 0xFF;
                psram[index + 1] = (wdata >> 8) & 0xFF;
                break;
            case 15: // 字写（4字节）
                psram[index] = (wdata >> 0) & 0xFF;
                psram[index + 1] = (wdata >> 8) & 0xFF;
                psram[index + 2] = (wdata >> 16) & 0xFF;
                psram[index + 3] = (wdata >> 24) & 0xFF;
                break;
            default:
                break;
        }
      }
    if (ren) {
        // 读操作
        printf("rdata :%x\n",rdata);
        switch (size) {
            case 1: // 字节读
                *rdata = psram[index];
                break;
            case 3: // 半字读（2字节）
                *rdata = (psram[index] << 0) | (psram[index + 1] << 8);
                break;
            case 15: // 字读（4字节）
                *rdata = (psram[index] << 0) | (psram[index + 1] << 8) | 
                         (psram[index + 2] << 16) | (psram[index + 3] << 24);
                break;
            default:
                *rdata = 0;
                break;
        }
    } else {
        *rdata = 0;
    }
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