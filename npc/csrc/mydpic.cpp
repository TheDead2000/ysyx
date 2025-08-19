#include <iostream>
#include <verilated_vcd_c.h>
#include <verilated.h>
#include <Vtop.h>
#include "verilated_dpi.h"
#include "simtop.h"
#include "simconf.h"

extern Simtop *mysim_p;

// extern "C" void now_pc(int nowpc){
//     #ifdef MTRACH
//     printf("nowpc:%x\n,", nowpc);
// #endif
// }

extern "C" void set_nextpc(int nextpc)
{
    // static bool isfirst_inst = true;
    // if (nextpc == 0)
    // {
    //     return;
    // }
    // // 第一条指令特殊处理
    // else if (isfirst_inst)
    // {
    //     printf("isfirst_inst\n");
    //     isfirst_inst = false;
    //     return;
    // }
    mysim_p->commited_list.nextpc.push_back(nextpc);
}

extern "C" void set_mem_pc(long long mem_pc)
{
#ifdef MTRACH
    printf("set_mem_pc:%p\n", (void *)mem_pc);
#endif
    mysim_p->mem_pc = mem_pc;
}

extern "C" void set_gpr_ptr(const svOpenArrayHandle r)
{
    mysim_p->setGPRregs((uint32_t *)(((VerilatedDpiOpenVar *)r)->datap()));
}

extern "C" void inst_commit(int pc, int inst, svBit commit_valid)
{
    if (commit_valid == 0)
    {
        return;
    }
    mysim_p->addCommitedInst(pc, inst);
#ifdef MTRACH
    // printf("commit:%x\n", (void *)pc);
#endif
    // printf("pc:%p,commit:%d\n", (void*)pc, commit_valid);
}

extern "C" void pmem_inst_read(int raddr, int *rdata, char rmask)
{
    // 总是读取地址为`raddr & ~0x7ull`的8字节返回给`rdata`
    if (rmask == 0)
    {
        return;
    }
#ifdef MTRACH
    printf("pmem_inst_read:%x,", raddr);
#endif
    *rdata = mysim_p->mem->paddr_read(raddr, 4);
#ifdef MTRACH
    printf("data:%x\n", *rdata);
#endif
};

extern "C" void pmem_read(int pc, int raddr, int *rdata, char rmask)
{
    // 总是读取地址为`raddr & ~0x7ull`的8字节返回给`rdata`
    if (rmask == 0)
    {
        printf("return!!!!!!!!!!!!!!!!!!!!\n");
        return;
    }
    mysim_p->mem_pc = pc; // 记录访存指令的 PC
#ifdef MTRACH
    printf("mem_pc is %x\n", mysim_p->mem_pc);
    printf("pmem_read:%x,", raddr);
#endif
    *rdata = mysim_p->mem->paddr_read(raddr, 4);
#ifdef MTRACH
    printf("data:%x\n", *rdata);
#endif
};
extern "C" void pmem_write(int pc, int waddr, int wdata, char wmask)
{
    // 总是往地址为`waddr & ~0x7ull`的8字节按写掩码`wmask`写入`wdata`
    // `wmask`中每比特表示`wdata`中1个字节的掩码,
    // 如`wmask = 0x3`代表只写入最低2个字节, 内存中的其它字节保持不变
    /* 隐式格式转换很坑 */
    uint32_t temp = (uint8_t)wmask;
    if (wmask == 0)
    {
        return;
    }
    // printf("pmem_write:%x,data:%x\n", waddr, wdata);
#ifdef MTRACH
    printf("pmem_write:%x,data:%x\n", waddr, wdata);
#endif
    mysim_p->mem_pc = pc; // 记录访存指令的 PC
    switch (temp)
    {
    case 1:
        mysim_p->mem->paddr_write(waddr, 1, wdata);
        break; // 0000_0001, 1byte.
    case 3:
        mysim_p->mem->paddr_write(waddr, 2, wdata);
        break; // 0000_0011, 2byte.
    case 15:
        mysim_p->mem->paddr_write(waddr, 4, wdata);
        break; // 0000_1111, 4byte.
    default:
        break;
    }
}

extern "C" void icache_hit_count(int last_pc, int now_pc)
{
    if (last_pc != now_pc)
    {
        mysim_p->icache_count++;
        mysim_p->icache_hit_count++;
    }
}

extern "C" void icache_unhit_count()
{
    mysim_p->icache_count++;
    mysim_p->icache_unhit_count++;
}

extern "C" void dcache_unhit_count()
{
    mysim_p->dcache_count++;
    mysim_p->dcache_unhit_count++;
}

extern "C" void dcache_hit_count()
{
    mysim_p->dcache_count++;
    mysim_p->dcache_hit_count++;
}

extern "C" void bpu_count(svBit bpu_ret) {
    
    mysim_p->bpu_count++;
    mysim_p->bpu_hit_count += bpu_ret;

}