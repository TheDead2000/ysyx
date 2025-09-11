#include "common.h"
#ifdef CONFIG_IRINGBUF
typedef struct
{
    paddr_t pc;
    word_t inst;
} inst_Node;

#define BUF_SIZE 20

inst_Node ibuf[BUF_SIZE];
int pbuf=0;
bool full=false;
extern "C" void disassemble(char *str, int size, uint64_t pc, uint8_t *code,
                            int nbyte);
void write_iringbuf(paddr_t pc, word_t inst){
    ibuf[pbuf].pc=pc;
    ibuf[pbuf].inst=inst;
    if(pbuf==BUF_SIZE-1)
        full=true;
    pbuf=(pbuf+1)%BUF_SIZE;
}

void print_inst(paddr_t pc, word_t inst,bool wrong){
    char logbuf[128];
    char *p=logbuf;
    if(wrong){
        p+=snprintf(p, 4, "-->");
    }else{
        p+=snprintf(p, 4, "   ");
        
    }
    p += snprintf(p, sizeof(logbuf)-3, FMT_WORD ": ", (vaddr_t)pc);//打印地址
    MUXDEF(CONFIG_RV64,p += snprintf(p, sizeof(logbuf) - (p-logbuf)-3,  "  0x%08lx\t", inst);,p += snprintf(p, sizeof(logbuf) - (p-logbuf)-3,  "  0x%08x\t", inst);)

    int ilen=4;
    //打印接下的东西
    #ifndef CONFIG_ISA_loongarch32r
    disassemble(p, logbuf + sizeof(logbuf) - p-3,
        pc, (uint8_t *)&inst, ilen);//反
    #else
    p[0] = '\0'; // the upstream llvm does not support loongarch32r
    #endif
    puts(logbuf);
}

void print_iringbuf(){
    Log("Recentl Instr");
    if(full){
        for(int i=(pbuf+1)%BUF_SIZE;i!=pbuf;i=(i+1)%BUF_SIZE){
            print_inst(ibuf[i].pc,ibuf[i].inst,i==pbuf-1);
        }
    }else{
        for(int i=0;i!=pbuf;i++){
            print_inst(ibuf[i].pc,ibuf[i].inst,i==pbuf-1);
        }
    }
}

#endif