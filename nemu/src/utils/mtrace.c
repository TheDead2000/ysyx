#include <common.h>

void record_pread(paddr_t addr, int len){
    Info_N("ReadAddr at: 0x%x len:%d\n",addr,len);
}

void record_pwrite(paddr_t addr, int len, word_t data){
    
    MUXDEF(CONFIG_RV64,Info_R("WriteAddr at: 0x%x len:%d 0x%lx\n",addr,len,data);,Info_R("WriteAddr at: 0x%x len:%d 0x%x\n",addr,len,data);)
}