#include "mem.h"
#include "isa.h"
#include "svdpi.h"
#include "utils.h"
#include "trace.h"
#include "common.h"

extern uint64_t time_now;
// mtrace 使用dpi-c实现
// extern "C" void flash_read(int32_t addr, int32_t *data) {
//   // *data = flash[addr / 4];
//   // printf("addr=%x\n",addr);
//   // printf("data=%x\n",*data);
// }
extern "C" void flash_read(int32_t addr, int32_t *data) {
    uint32_t word = flash[addr / 4];
    
    // 如果是字节访问（地址不是4字节对齐），返回单个字节
    // 如果是字访问（地址4字节对齐），返回整个字
    if (addr % 4 == 0) {
        *data = word;  // 字访问，返回整个字
    } else {
        // 字节访问，返回对应的字节
        uint32_t byte_offset = addr % 4;
        *data = (word >> (byte_offset * 8)) & 0xFF;
        printf("flash_read: byte_offset=0x%08x, data=0x%08x\n", byte_offset, *data);
    }
    

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

// extern "C" void psram_read(int32_t addr, int32_t *data) {
//   *data = psram[(addr - 0x80000000) / 4];
//   printf("psram read data :%x\n",data);
// }

// extern "C" void psram_write(int32_t addr, int32_t data, int32_t mask) {

//     uint32_t wdata = data >> ((8-mask)*4);
//     printf("psram wdata %x\n",wdata);
//     printf("psram write addr :%x data:%x mask:%x\n",addr,wdata,mask);
//     ((uint8_t *)psram)[addr - 0x80000000] = data;
//     switch ( mask/2) {
//     case 1: ((uint8_t *)psram)[addr - 0x80000000] = data;return;
//     case 2: ((uint16_t *)psram)[addr - 0x80000000] = data; return;
//     case 4: ((uint32_t *)psram)[addr - 0x80000000] = data;return;
//   }
// }
#define PSRAM_START 0x80000000
#define PSRAM_END   0x9fffffff
#define PSRAM_MSIZE (PSRAM_END+1-PSRAM_START)

uint32_t* guest_to_host(uint32_t paddr) { 

  if(paddr >= PSRAM_START && paddr <= PSRAM_END){
    return psram + (paddr - PSRAM_START);
  } else {
    printf("Invalid Address: 0x%0x\n", paddr);
    assert(0);
    // return pmem + paddr - PMEM_START; 
  }
}

// void _pmem_write(uint32_t addr, uint32_t data, int len) {
//   uint32_t * paddr = guest_to_host(addr);
//   switch (len) {
//     case 1: *(uint8_t  *)paddr = data; return;
//     case 2: *(uint16_t *)paddr = data; return;
//     case 4: *(uint32_t *)paddr = data; return;
//   }
// }

void _pmem_write(uint32_t addr, uint32_t data, int len) {
    // 处理非对齐访问
    if ((addr & 0x3) != 0 || len < 4) {
        // 字节级写入
        uint8_t *byte_ptr = (uint8_t*)guest_to_host(addr & ~0x3u);
        uint32_t offset = addr & 0x3u;
        
        for (int i = 0; i < len; i++) {
            byte_ptr[offset + i] = (data >> (i * 8)) & 0xFF;
        }
    } else {
        // 对齐的4字节写入
        uint32_t *paddr = guest_to_host(addr);
        *paddr = data;
    }
}

uint32_t _pmem_read(uint32_t addr, int len) {
  uint32_t * paddr =  guest_to_host(addr);
  switch (len) {
    case 1: return *(uint8_t  *)paddr;
    case 2: return *(uint16_t *)paddr;
    case 4: return *(uint32_t *)paddr;
  }
  assert(0);
}

extern "C" void psram_read(int32_t addr, int32_t *data) {
  addr = PSRAM_START + addr; // SPI2PSRAM only cares low 24bits i.e. 16MB
  if(addr>=PSRAM_START && addr<=PSRAM_END) {
    // addr = addr & ~0x3u;
    //printf("psram_read addr: 0x%08x\n", addr);
    *data = _pmem_read(addr, 4);
    printf("psram_read addr: 0x%08x data: 0x%08x\n", addr, *data);
  }
}

// extern "C" void psram_write(int32_t addr, int32_t data, int32_t mask) {
//   addr = PSRAM_START + addr; // SPI2FLASH only cares low 24bits i.e. 16MB
//   if(addr>=PSRAM_START && addr<=PSRAM_END) {
//     // addr = addr & ~0x3u;
//     uint32_t wdata = data >> ((8-mask)*4);
//      printf("psram_write addr: 0x%08x data: 0x%08x mask: 0x%08x wdata: 0x%08x\n", addr, data, mask, wdata);
//     _pmem_write(addr, wdata, mask/2);
//     // printf("psram_write addr: 0x%08x data: 0x%08x\n", addr, data);
//   }
// }

extern "C" void psram_write(int32_t addr, int32_t data, int32_t mask) {
    addr = PSRAM_START + addr;
    
    if(addr >= PSRAM_START && addr <= PSRAM_END) {
        // mask现在表示写入的字节数
        int write_len = mask & 0x3;
        if (write_len == 0) write_len = 4;  // 默认4字节
        
        // 提取正确的字节数据
        uint32_t wdata;
        switch(write_len) {
            case 1: wdata = data & 0xFF; break;
            case 2: wdata = data & 0xFFFF; break;
            case 3: wdata = data & 0xFFFFFF; break;
            case 4: wdata = data; break;
            default: wdata = data; break;
        }
        
        printf("psram_write addr: 0x%08x data: 0x%08x bytes: %d wdata: 0x%08x\n", 
               addr, data, write_len, wdata);
        
        _pmem_write(addr, wdata, write_len);
    }
}


extern "C" void psram_wr(int32_t addr, int32_t wen, int32_t ren, int32_t wdata, int32_t size, int32_t* rdata) {
    // 将地址映射到数组索引（假设地址从0开始）
    uint32_t index = addr;
    if (wen) {
        // 写操作
        printf("w_addr:%x psram_write :%x size :%d\n",addr,wdata,size);
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
        printf("r_addr%x psram_read:%x size:%d\n",addr,*rdata,size);
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