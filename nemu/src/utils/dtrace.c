#include <common.h>
#include <debug.h>
//TODO:在某些条件下触发
void dtrace_read(const char * name,paddr_t addr,int len){
    Log("READ device %s at 0x%x len=%d",name,addr,len);
}

void dtrace_write(const char * name,paddr_t addr,int len,word_t data){
    Log("WRITE device -%s- at 0x%x len=%d data=0x%x",name,addr,len,data);
}