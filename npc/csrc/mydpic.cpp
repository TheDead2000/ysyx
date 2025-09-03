#include <iostream>
#include <verilated_vcd_c.h>
#include <verilated.h>
#include <Vtop.h>
#include "verilated_dpi.h"
#include "simtop.h"
#include "simconf.h"

extern Simtop* mysim_p;


extern "C" void bpu_count(svBit bpu_ret) {

    mysim_p->bpu_count++;
    mysim_p->bpu_hit_count += bpu_ret;

}


extern "C" void icache_hit_count(int last_pc, int now_pc) {
    if (last_pc != now_pc) {
        mysim_p->icache_count++;
        mysim_p->icache_hit_count++;
    }
}

extern "C" void icache_unhit_count() {
    mysim_p->icache_count++;
    mysim_p->icache_unhit_count++;
}


extern "C" void dcache_unhit_count() {
    mysim_p->dcache_count++;
    mysim_p->dcache_unhit_count++;
}

extern "C" void dcache_hit_count() {
    mysim_p->dcache_count++;
    mysim_p->dcache_hit_count++;
}



extern "C" void set_diffpc(int pc, int inst,svBit commit_valid) {
    // NOP 指令对于的 PC 为 0
    if (pc == 0 || commit_valid == 0) {
        return;
    }
    if(inst == 0x13)
    {
        printf("nop!");
        return;
    }

#ifdef MTRACH
    printf("set_diffpc:%x\n", (void*)pc);
#endif

    mysim_p->commited_list.nextpc.push_back(pc);
}

extern "C" void set_mem_pc(int mem_pc) {
#ifdef MTRACH
    printf("DPIC:set_mem_pc:%p\n", (void*)mem_pc);
#endif
    mysim_p->mem_pc = mem_pc;
}


// DPI-C函数实现
extern "C" void set_csr_ptr(const svOpenArrayHandle r) {
    mysim_p->setCSRregs((uint32_t*)(((VerilatedDpiOpenVar*)r)->datap()));
}

extern "C" void set_gpr_ptr(const svOpenArrayHandle r) {
    mysim_p->setGPRregs((uint32_t*)(((VerilatedDpiOpenVar*)r)->datap()));
}

extern "C" void inst_commit(int pc, int inst, svBit commit_valid) {
    if (commit_valid == 0) {
        return;
    }
    mysim_p->addCommitedInst(pc, inst);
#ifdef MTRACH
    printf("commit:%x\n", (void*)pc);
#endif
    //printf("pc:%p,commit:%d\n", (void*)pc, commit_valid);
}

extern "C" void pmem_inst_read(int raddr, int* rdata, char rmask) {
    // 总是读取地址为`raddr & ~0x7ull`的8字节返回给`rdata`
    if (rmask == 0) {
        return;
    }
#ifdef MTRACH
    printf("pmem_inst_read:%llx,", raddr);
#endif
    * rdata = mysim_p->mem->paddr_read(raddr, 8);
#ifdef MTRACH
    printf("data:%llx\n", *rdata);
#endif
};

/**
 * @brief 采用 soc-simulator 后 已弃用
 *
 */
extern "C" void pmem_read(long raddr, int* rdata, char rmask) {
    // 总是读取地址为`raddr & ~0x7ull`的8字节返回给`rdata`
    if (rmask == 0) {
        return;
    }
#ifdef MTRACH
    printf("pmem_read:%llx,", raddr);
#endif
    * rdata = mysim_p->mem->paddr_read((paddr_t)raddr, 8);
#ifdef MTRACH
    printf("data:%llx\n", *rdata);
#endif
};

/**
 * @brief 采用 soc-simulator 后 已弃用
 *
 */
extern "C" void pmem_write(long waddr, int wdata, char wmask) {
    // 总是往地址为`waddr & ~0x7ull`的8字节按写掩码`wmask`写入`wdata`
    // `wmask`中每比特表示`wdata`中1个字节的掩码,
    // 如`wmask = 0x3`代表只写入最低2个字节, 内存中的其它字节保持不变
    /* 隐式格式转换很坑 */
    uint32_t temp = (uint8_t)wmask;
    if (wmask == 0) {
        return;
    }
    //printf("pmem_write:%llx,data:%llx\n", waddr, wdata);
#ifdef MTRACH
    printf("pmem_write:%llx,data:%llx\n", waddr, wdata);
#endif
    switch (temp) {
    case 1:   mysim_p->mem->paddr_write((paddr_t)waddr, 1, wdata); break; // 0000_0001, 1byte.
    case 3:   mysim_p->mem->paddr_write((paddr_t)waddr, 2, wdata); break; // 0000_0011, 2byte.
    case 15:  mysim_p->mem->paddr_write((paddr_t)waddr, 4, wdata); break; // 0000_1111, 4byte.
    case 255: mysim_p->mem->paddr_write((paddr_t)waddr, 8, wdata);  break; // 1111_1111, 8byte.
    default:  break;
    }
}


