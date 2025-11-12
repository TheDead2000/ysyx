#include "isa.h"
#include "common.h"

void record_pread(paddr_t addr, int len)
{
    Info_N("ReadAddr at: 0x%x len:%d", addr, len);
}

void record_pwrite(paddr_t addr, char wmask, word_t data)
{
    int strsize = 9;
    char binaryStr[strsize];
    int index = strsize - 2;       // 最后一位留给 null 终止符
    binaryStr[strsize - 1] = '\0'; // 设置字符串终止符

    while (index >= 0)
    {
        binaryStr[index] = (wmask & 1) ? '1' : '0';
        wmask >>= 1;
        index--;
    }
    MUXDEF(CONFIG_RV64, Info_R("WriteAddr at: 0x%x wmask:%s 0x%lx", addr, binaryStr, data);, Info_R("WriteAddr at: 0x%x wmask:%s 0x%x", addr, binaryStr, data);)
}

void record_axi_read(const char *type, paddr_t addr, int len) {
#ifdef CONFIG_MTRACE
  Info_N("ReadAddr(%s) at: 0x%x len:%d", type, addr, len);
  #endif
}

void record_axi_write(const char *type, paddr_t addr, char wmask, word_t data) {
#ifdef CONFIG_MTRACE

  Info_R("WriteAddr(%s) at: 0x%x wmask:%x 0x%x", type, addr, wmask, data);
#endif
}