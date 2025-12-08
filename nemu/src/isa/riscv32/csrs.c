
#include "common.h"
#include "local-include/reg.h"

#define CSR(i) csr(i)
#define R(i) gpr(i)

// 新的掩码定义
// sstatus 是 mstatus 的子集，这些位在两个寄存器中是相同的
#define SSTATUS_SHARED_MASK 0x0000DE1F  // 包含: UIE, UPIE, SPIE, SPP, FS, VS, XS

// 辅助函数：将 sstatus 值映射到 mstatus
static uint32_t sstatus_to_mstatus(uint32_t sstatus_val) {
    uint32_t mstatus_val = 0;
    
    // SIE (bit1) -> MIE (bit3)
    if (sstatus_val & (1 << 1)) {
        mstatus_val |= (1 << 3);  // 设置 MIE
    }
    
    // 其他共享字段直接复制
    mstatus_val |= (sstatus_val & SSTATUS_SHARED_MASK);
    
    return mstatus_val;
}

// 辅助函数：将 mstatus 值映射到 sstatus
static uint32_t mstatus_to_sstatus(uint32_t mstatus_val) {
    uint32_t sstatus_val = 0;
    
    // MIE (bit3) -> SIE (bit1)
    if (mstatus_val & (1 << 3)) {
        sstatus_val |= (1 << 1);  // 设置 SIE
    }
    
    // 其他共享字段直接复制
    sstatus_val |= (mstatus_val & SSTATUS_SHARED_MASK);
    
    return sstatus_val;
}

// 更新 mstatus 的 SD 位，并同步到 sstatus
static inline void update_mstatus() {
    // 更新 SD 位
    NEMU_mstatus->bits.SD = NEMU_mstatus->bits.FS == 3 || 
                           NEMU_mstatus->bits.VS == 3 || 
                           NEMU_mstatus->bits.XS == 3;
    
    // 将 mstatus 的共享字段同步到 sstatus
    uint32_t mstatus_val = cpu.csr[NEMU_CSR_V_MSTATUS];
    cpu.csr[NEMU_CSR_V_SSTATUS] = mstatus_to_sstatus(mstatus_val);
}

// 删除 update_sstatus() 函数，它不应该存在！

// 对于 sie 和 mie 的同步，采用类似的思路
#define SIE_SHARED_MASK 0x0222  // SSIE, STIE, SEIE 位

// 更新 mie 时同步到 sie
void update_mie() {
    uint32_t mie_val = cpu.csr[NEMU_CSR_V_MIE];
    // 将 MIE 的相应位同步到 SIE
    cpu.csr[NEMU_CSR_V_SIE] = mie_val & SIE_SHARED_MASK;
}

// 当写入 sie 时，直接写入 mie 的相应位
void update_sie() {
    // 实际上，SIE 的写入应该直接更新到 MIE
    // 但我们在这个函数中不直接更新，而是在 CSR 操作中处理
    // 这个函数现在只做清理工作
}

void update_time() {
    uint64_t time = get_time();
    cpu.csr[NEMU_CSR_V_TIME] = (uint32_t)time;
    cpu.csr[NEMU_CSR_V_TIMEH] = (uint32_t)(time >> 32);
}


extern bool is_skip_ref;
// CSR 操作
#define SSTATUS_SHARED_MASK 0x0000DE1F  // 包含: UIE, UPIE, SPIE, SPP, FS, VS, XS

void do_csr_op(uint32_t op, uint32_t csr_idx, uint32_t src, uint32_t rs, uint32_t rd, Decode *s) {
    csr_idx &= 0xfff;

    // 当访问的CSR没有实现的时候抛出异常并与Spike做同步
    #define RAISE_ILLEGAL_INSTN \
        s->dnpc = isa_raise_intr(2, s->pc); \
        cpu.csr[NEMU_CSR_V_MTVAL] = s->isa.inst.val; \
        cpu.PRIV = NEMU_PRIV_M; \
        IFDEF(CONFIG_DIFFTEST, difftest_csr_notexist()); \
        Log("WARRNING: Unsupported CSR NO:(0x%x) on pc: 0x%x", csr_idx, cpu.pc);

    // 读取前的特殊处理
    switch(csr_idx) {
        case NEMU_CSR_V_TIME:
        case NEMU_CSR_V_TIMEH:
            IFDEF(CONFIG_DIFFTEST, is_skip_ref = true;);
            update_time();
            break;
        case NEMU_CSR_V_MVENDROID:
        case NEMU_CSR_V_MARCHID:
            IFDEF(CONFIG_DIFFTEST, is_skip_ref = true;);
            break;
        case NEMU_CSR_V_SSTATUS:
            // 读取 sstatus 时，从 mstatus 实时计算
            R(rd) = mstatus_to_sstatus(cpu.csr[NEMU_CSR_V_MSTATUS]);
            // 对于 sstatus，我们不在这个函数中执行写入操作
            // 而是特殊处理
            return;
    }

    // 检查读写权限
    switch(op) {
        case NEMU_CSROP_CSRR:
            if(!check_read(csr_idx)) {
                RAISE_ILLEGAL_INSTN
                return;
            }
            break;
        case NEMU_CSROP_CSRRW:
        case NEMU_CSROP_CSRRS:
        case NEMU_CSROP_CSRRC:
        case NEMU_CSROP_CSRRWI:
        case NEMU_CSROP_CSRRSI:
        case NEMU_CSROP_CSRRCI:
            if(!check_write(csr_idx)) {
                RAISE_ILLEGAL_INSTN
                return;
            }
            break;
        default:
            assert(0);
    }

    // 特殊处理 sstatus 写入
    if (csr_idx == NEMU_CSR_V_SSTATUS) {
        uint32_t old_mstatus = cpu.csr[NEMU_CSR_V_MSTATUS];
        uint32_t old_sstatus = mstatus_to_sstatus(old_mstatus);
        uint32_t new_sstatus = 0;
        
        // 根据操作计算新的 sstatus 值
        switch(op) {
            case NEMU_CSROP_CSRRW:
                new_sstatus = src;
                break;
            case NEMU_CSROP_CSRRS:
                new_sstatus = old_sstatus | src;
                break;
            case NEMU_CSROP_CSRRC:
                new_sstatus = old_sstatus & ~src;
                break;
            case NEMU_CSROP_CSRRWI:
                new_sstatus = rs;
                break;
            case NEMU_CSROP_CSRRSI:
                new_sstatus = old_sstatus | rs;
                break;
            case NEMU_CSROP_CSRRCI:
                new_sstatus = old_sstatus & ~rs;
                break;
            default:
                assert(0);
        }
        
        // 返回旧的 sstatus 值
        R(rd) = old_sstatus;
        
        // 将新的 sstatus 值映射到 mstatus 并更新
        uint32_t mstatus_update = sstatus_to_mstatus(new_sstatus);
        uint32_t new_mstatus = old_mstatus;
        
        // 只更新共享字段
        new_mstatus = (new_mstatus & ~SSTATUS_SHARED_MASK) | (mstatus_update & SSTATUS_SHARED_MASK);
        // 特别处理 MIE 位（来自 SIE）
        if (mstatus_update & (1 << 3)) {
            new_mstatus |= (1 << 3);  // 设置 MIE
        } else {
            new_mstatus &= ~(1 << 3); // 清除 MIE
        }
        
        cpu.csr[NEMU_CSR_V_MSTATUS] = new_mstatus;
        
        // 更新 SD 位并同步回 sstatus
        update_mstatus();
        
        // 添加调试信息
        IFDEF(CONFIG_DEBUG, 
            Log("sstatus write: old=0x%x, new=0x%x, mstatus=0x%x", 
                old_sstatus, new_sstatus, cpu.csr[NEMU_CSR_V_MSTATUS]);
        );
        
        return;
    }
    
    // 特殊处理 sie 写入
    if (csr_idx == NEMU_CSR_V_SIE) {
        uint32_t old_sie = cpu.csr[NEMU_CSR_V_SIE];
        uint32_t old_mie = cpu.csr[NEMU_CSR_V_MIE];
        uint32_t new_sie = 0;
        
        // 根据操作计算新的 sie 值
        switch(op) {
            case NEMU_CSROP_CSRRW:
                new_sie = src;
                break;
            case NEMU_CSROP_CSRRS:
                new_sie = old_sie | src;
                break;
            case NEMU_CSROP_CSRRC:
                new_sie = old_sie & ~src;
                break;
            case NEMU_CSROP_CSRRWI:
                new_sie = rs;
                break;
            case NEMU_CSROP_CSRRSI:
                new_sie = old_sie | rs;
                break;
            case NEMU_CSROP_CSRRCI:
                new_sie = old_sie & ~rs;
                break;
            default:
                assert(0);
        }
        
        // 返回旧的 sie 值
        R(rd) = old_sie;
        
        // 更新 sie
        cpu.csr[NEMU_CSR_V_SIE] = new_sie;
        
        // 将 sie 的共享位同步到 mie
        uint32_t new_mie = old_mie;
        new_mie = (new_mie & ~SIE_SHARED_MASK) | (new_sie & SIE_SHARED_MASK);
        cpu.csr[NEMU_CSR_V_MIE] = new_mie;
        
        return;
    }

    // 正常的 CSR 操作（除了 sstatus 和 sie）
    uint32_t old_value = CSR(csr_idx);
    R(rd) = old_value;
    
    // 执行指令
    switch(op) {
        case NEMU_CSROP_CSRRW:
            CSR(csr_idx) = src;
            break;
        case NEMU_CSROP_CSRR:
            break;
        case NEMU_CSROP_CSRRS:
            CSR(csr_idx) = old_value | src;
            break;
        case NEMU_CSROP_CSRRC:
            CSR(csr_idx) = old_value & ~src;
            break;
        case NEMU_CSROP_CSRRWI:
            CSR(csr_idx) = rs;
            break;
        case NEMU_CSROP_CSRRSI:
            CSR(csr_idx) = old_value | rs;
            break;
        case NEMU_CSROP_CSRRCI:
            CSR(csr_idx) = old_value & ~rs;
            break;
        default:
            assert(0);
    }

    // masks 处理
    switch(csr_idx) {
        case NEMU_CSR_V_MEDELEG:
            CSR(NEMU_CSR_V_MEDELEG) &= 0xB3ff;
            break;
        case NEMU_CSR_V_MSTATUS:
            update_mstatus();
            break;
        case NEMU_CSR_V_MIE:
            update_mie();
            break;
        // 注意：SSTATUS 和 SIE 已经在上面特殊处理过了
    }
}
