#include "stdio.h"
#include <am.h>
#include <nemu.h>
#include <klib.h>
#include <stdint.h>

#define PAGE(x) (((uint32_t)(x)) << 12) //get page addr
#define ADDRM(x) (((uint32_t)(x)) & 0xFFFFF000)
#define PTEM(x) (((uint32_t)(x)) & 0xFFFFFC00)
// for pte |22|10 ;;; for vaddr |10|10|12
#define PAGE_VALID(x) (((uint32_t)(x)) & 0x1)
#define XWR(x) ((((uint32_t)(x)) >> 1) & 0b111)

static AddrSpace kas = {};//for kernel
// user defined call-back function
static void* (*pgalloc_usr)(int) = NULL;
static void (*pgfree_usr)(void *) = NULL;

static int vme_enable = 0;

static Area segments[] = {      // Kernel memory mappings
  NEMU_PADDR_SPACE
};

//TODO:这是用户进程相关的
#define USER_SPACE RANGE(0x40000000, 0x80000000)

static inline void set_satp(void *pdir) {
  uintptr_t mode = 1ul << (__riscv_xlen - 1);
  asm volatile("csrw satp, %0" : : "r"(mode | ((uintptr_t)pdir >> 12)));
}

static inline uintptr_t get_satp() {
  uintptr_t satp;
  asm volatile("csrr %0, satp" : "=r"(satp));
  return satp << 12;
}
//两个来自操作系统的页面分配回调函数的指针, 让AM在必要的时候通过这两个回调函数来申请/释放一页物理页.
bool vme_init(void* (*pgalloc_f)(int), void (*pgfree_f)(void*)) {
  pgalloc_usr = pgalloc_f;
  pgfree_usr = pgfree_f;

  kas.ptr = pgalloc_f(PGSIZE);

  int i;
  for (i = 0; i < LENGTH(segments); i ++) {
    void *va = segments[i].start;
    for (; va < segments[i].end; va += PGSIZE) {
      map(&kas, va, va, 0b1000111);//TODO
    }
  }

  set_satp(kas.ptr);
  vme_enable = 1;

  return true;
}
// 创建一个默认的地址空间
void protect(AddrSpace *as) {
  PTE *updir = (PTE*)(pgalloc_usr(PGSIZE));
  as->ptr = updir;
  as->area = USER_SPACE;
  as->pgsize = PGSIZE;
  // map kernel space
  memcpy(updir, kas.ptr, PGSIZE);
}
// 销毁指定的地址空间
void unprotect(AddrSpace *as) {
  //do nothing for now
}    // TODO!

void __am_get_cur_as(Context *c) {
  c->pdir = (vme_enable ? (void *)get_satp() : NULL);
}

void __am_switch(Context *c) {
  if (vme_enable && c->pdir != NULL) {
    set_satp(c->pdir);
  }
}
# define PTE(pa,prot) ((ADDRM(pa)>>2)|((prot&0b111111111)<<1)|0b1)
# define PTE1(pa) PTE(pa,0)
// 将地址空间as中虚拟地址va所在的虚拟页, 以prot的权限映射到pa所在的物理页.
// TODO:只用as.ptr,va,pa? as中其他部分有用吗?
void map(AddrSpace *as, void *va, void *pa, int prot) {
  // printf("MAP:%x,%x-%x\n",as->ptr,va,pa);
  //the root_page should be passed in!!
  uint32_t *root_pt = as->ptr;
  uint32_t vpn1 = (uint32_t)va >> 22;
  uint32_t vpn0 = ((uint32_t)va >> 12) & 0x3FF;

  // if not valid!,allocate page
  if (!PAGE_VALID(*(root_pt + vpn1))) {
    uint32_t *ptea0 = pgalloc_usr(PGSIZE);
    uint32_t pte1 = PTE1(ptea0);
    *(root_pt + vpn1) = pte1;
  }
  // the pte0 should be 0b|2*D|20*?|6*D|3*0|1*1
  // set pte0
  uint32_t pte1=*(root_pt + vpn1);
  uint32_t *ptea0 = (uint32_t *)(PTEM(pte1) << 2);
  assert(!PAGE_VALID(*(ptea0+vpn0))); // assert if the target pte already exists
  *(ptea0+vpn0)=PTE(pa,prot);
  // uint32_t pte1 = as->ptr+
}

// 参数as用于限制用户进程可以访问的内存，Ignore
// kstack是内核栈,用于分配上下文结构,
// entry则是用户进程的入口.
Context *ucontext(AddrSpace *as, Area kstack, void *entry) {
  // void *ustack=pgalloc_usr(PGSIZE*8);
  // TODO!!
  void *ustack=as->area.end;
  void *stack = kstack.end;
  Context *top = (Context *)(((void *)stack) - sizeof(Context));
  top->GPRx=(uintptr_t)ustack;//pass the stack addr,seems OKEY for riscv--ARCH-spec
  // //map stack
  // for (int i = 0; i < 8; i++) {
  //   map(as,(void*)as->area.end-(8-i)*PGSIZE,ustack+PGSIZE*i,0b111);
  //   printf("MAP:%x,%x\n",(void*)as->area.end-(8-i)*PGSIZE,ustack+PGSIZE*i);
  // }
  // for (uint32_t *target = (uint32_t*)ustack; target != ustack + PGSIZE * 8;
  // target++) {
  //   *target=0;
  // }
  // program will run at after __am_asm_trap
  top->mepc = (uintptr_t)entry;
  top->gpr[2] = (uintptr_t)stack;
  // top->gpr[2] = (uintptr_t)(0);
  // printf("USTACK:%x\n", ustack);
  top->mstatus = 0x8;//need to set to user mode ? TODO！
  top->mcause = 0x0; // 0xb is external interrupt
  top->pdir=as->ptr; // set ptr (ISA-dependent) ,for the root page table entry!(in rv-nemu)
  top->mscratch= (uintptr_t)ustack; 
  return top;
}
