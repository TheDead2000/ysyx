
#include "common.h"
#include "local-include/reg.h"

#define CSR(i) csr(i)
#define R(i) gpr(i)


#define MSTATUS_SSTATUS_SYNC 0xff8fe763
static inline void update_mstatus(){
  //NEMU_mstatus.bits.FS ==3 ||NEMU_mstatus.bits.VS == 3 || NEMU_mstatus.bits.XS ==3 ;
  //((mstatus_t)(cpu.csr[NEMU_CSR_MSTATUS])).bits.SD=1;
  NEMU_mstatus->bits.SD=NEMU_mstatus->bits.FS ==3 ||NEMU_mstatus->bits.VS == 3 || NEMU_mstatus->bits.XS ==3 ;
  /*
//update SD(mstatus 的 SD位依赖于FS/VS/XS)
#define MSTATUS_FS_MASK  0x00006000  // FS 位于 bit [14:13]
#define MSTATUS_FS_SHIFT 13
#define MSTATUS_VS_MASK  0x00000600  // VS 位于 bit [10:9]
#define MSTATUS_VS_SHIFT 9
#define MSTATUS_XS_MASK  0x00018000  // XS 位于 bit [16:15]
#define MSTATUS_XS_SHIFT 15
#define MSTATUS_SD_MASK  0x80000000  // SD 位于 bit 31 (RV32)
uint32_t mstatus = cpu.csr[NEMU_CSR_V_MSTATUS]; // 当前 mstatus 的值

// 提取字段值（结果为 0-3）
uint8_t fs = (mstatus & MSTATUS_FS_MASK) >> MSTATUS_FS_SHIFT;
uint8_t vs = (mstatus & MSTATUS_VS_MASK) >> MSTATUS_VS_SHIFT;
uint8_t xs = (mstatus & MSTATUS_XS_MASK) >> MSTATUS_XS_SHIFT;

// 判断是否处于 Dirty 状态
uint8_t is_fs_dirty = (fs == 3);
uint8_t is_vs_dirty = (vs == 3);
uint8_t is_xs_dirty = (xs == 3);

// 计算 SD 位（逻辑或操作）
uint8_t sd = is_fs_dirty || is_vs_dirty || is_xs_dirty;

// 清除旧的 SD 位
mstatus &= ~MSTATUS_SD_MASK;

// 设置新的 SD 位
mstatus |= (sd << 31);  
cpu.csr[NEMU_CSR_V_MSTATUS]=mstatus;
*/
uint32_t sstatus = cpu.csr[NEMU_CSR_V_SSTATUS]; // 当前 mstatus 的值
 cpu.csr[NEMU_CSR_V_SSTATUS] = (sstatus & ~ MSTATUS_SSTATUS_SYNC)| (NEMU_mstatus->value & MSTATUS_SSTATUS_SYNC);
}

void update_sstatus(){
uint32_t sstatus = cpu.csr[NEMU_CSR_V_SSTATUS]; // 当前 mstatus 的值
uint32_t mstatus = cpu.csr[NEMU_CSR_V_MSTATUS]; // 当前 mstatus 的值
 cpu.csr[NEMU_CSR_V_MSTATUS] = (mstatus & ~ MSTATUS_SSTATUS_SYNC)| (sstatus & MSTATUS_SSTATUS_SYNC);
}

#define SIE_MIE_SYNC 0x222
void update_mie(){
  uint32_t mie = cpu.csr[NEMU_CSR_V_MIE];
  uint32_t sie = cpu.csr[NEMU_CSR_V_SIE];
  cpu.csr[NEMU_CSR_V_SIE] = (sie & ~ SIE_MIE_SYNC) | (mie & SIE_MIE_SYNC);
}

void update_sie(){
  uint32_t mie = cpu.csr[NEMU_CSR_V_MIE];
  uint32_t sie = cpu.csr[NEMU_CSR_V_SIE];
  cpu.csr[NEMU_CSR_V_MIE] = (mie & ~ SIE_MIE_SYNC) | (sie & SIE_MIE_SYNC);
}


void update_time() {
  uint64_t time = get_time();
  cpu.csr[NEMU_CSR_V_TIME] = (uint32_t)time;
  cpu.csr[NEMU_CSR_V_TIMEH] = (uint32_t)(time>>32);
}

extern bool is_skip_ref;

//csr操作
void do_csr_op(uint32_t op, uint32_t csr_idx,uint32_t src,uint32_t rs,uint32_t rd,Decode *s){
  csr_idx&=0xfff;

//当访问的CSR没有实现的时候抛出异常并与Spike做同步
#define RAISE_ILLEGAL_INSTN \
  s->dnpc = isa_raise_intr(2, s->pc); \
  cpu.csr[NEMU_CSR_V_MTVAL]=s->isa.inst.val; \
  cpu.PRIV=NEMU_PRIV_M; \
  IFDEF(CONFIG_DIFFTEST,difftest_csr_notexist()); \
  Log("WARRNING:Unsupported CSR NO:(0x%x) on pc: 0x%x", csr_idx,cpu.pc); \

  //读取前
  switch(csr_idx){
    case NEMU_CSR_V_TIME:
    case NEMU_CSR_V_TIMEH:
      IFDEF(CONFIG_DIFFTEST,is_skip_ref = true;);
      update_time();
      break;
    case NEMU_CSR_V_MVENDROID:
    case NEMU_CSR_V_MARCHID:
      IFDEF(CONFIG_DIFFTEST,is_skip_ref = true;);
      break;
  }

//检查RW
  switch(op){
    case NEMU_CSROP_CSRR:
      if(!check_read(csr_idx)){
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
      if(!check_write(csr_idx)){
        RAISE_ILLEGAL_INSTN
        return;
      }
      break;
    default:
      assert(0);
  }
  //所有的csr都有读取
  R(rd)=CSR(csr_idx);
  //执行指令
  switch(op){
    case NEMU_CSROP_CSRRW:
      CSR(csr_idx)=src;
      break;
    case NEMU_CSROP_CSRR:
      break;
    case NEMU_CSROP_CSRRS:
      CSR(csr_idx)=CSR(csr_idx)|src;
      break;
    case NEMU_CSROP_CSRRC:
      CSR(csr_idx)=CSR(csr_idx)&~src;
      break;
    case NEMU_CSROP_CSRRWI:
      CSR(csr_idx)=rs;
      break;
    case NEMU_CSROP_CSRRSI:
      CSR(csr_idx)=CSR(csr_idx)|rs;
      break;
    case NEMU_CSROP_CSRRCI:
      CSR(csr_idx)=CSR(csr_idx)&~rs;
      break;
    default:
      assert(0);
  }

  //masks
  switch(csr_idx){
    case NEMU_CSR_V_MEDELEG:
      CSR(NEMU_CSR_V_MEDELEG)&=0xB3ff;
      break;
    case NEMU_CSR_V_MSTATUS:
      update_mstatus();
      break;
    case NEMU_CSR_V_SSTATUS:
      update_sstatus();
      break;
    case NEMU_CSR_V_MIE:
      update_mie();
      break;
    case NEMU_CSR_V_SIE:
      update_sie();
      break;
  }
}
