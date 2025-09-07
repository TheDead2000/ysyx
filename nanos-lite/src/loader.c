#include "am.h"
#include "debug.h"
#include "fs.h"
#include "memory.h"
#include <proc.h>
#include <elf.h>
#include <stdint.h>
#include <string.h>


#ifdef __LP64__
# define Elf_Ehdr Elf64_Ehdr
#define Elf_Phdr Elf64_Phdr
#define Elf_Shdr Elf64_Shdr
#define Elf_Sym Elf64_Sym
#else
# define Elf_Ehdr Elf32_Ehdr
#define Elf_Phdr Elf32_Phdr
#define Elf_Shdr Elf32_Shdr
#define Elf_Sym Elf32_Sym
#endif

#if defined(__ISA_AM_NATIVE__)
#define EXPECT_TYPE EM_X86_64
#elif defined(__ISA_X86__)
#define EXPECT_TYPE EM_X86_64
#elif defined(riscv32e)
#define EXPECT_TYPE EM_RISCV
#else
#define EXPECT_TYPE EM_RISCV
// #error Unsupported ISA
#endif

// loads elf file from fs
static uintptr_t loader(PCB *pcb, const char *filename) {
  // read header
  Elf_Ehdr *hader = malloc(sizeof(Elf_Ehdr));
  int fd = fs_open(filename, 0, 0);
  assert(fs_read(fd, hader, sizeof(Elf_Ehdr)) == sizeof(Elf_Ehdr));
  // check magic number 
  assert(hader->e_ident[EI_MAG0] == ELFMAG0 &&
         hader->e_ident[EI_MAG1] == ELFMAG1 &&
         hader->e_ident[EI_MAG2] == ELFMAG2 &&
         hader->e_ident[EI_MAG3] == ELFMAG3); // check magic number of elf
  assert(hader->e_machine == EXPECT_TYPE);    // check isa
  // read phdrs
  Elf_Phdr *phdrs = malloc(sizeof(Elf_Phdr) * hader->e_phnum);
  fs_lseek(fd, hader->e_phoff, SEEK_SET);
  fs_read(fd, phdrs, sizeof(Elf_Phdr) * hader->e_phnum);
  // load segments
  for (int i = 0; i < hader->e_phnum; i++) {
    Elf_Phdr ph = phdrs[i];
    if (ph.p_type == PT_LOAD) {
      // read the data
      fs_lseek(fd, ph.p_offset, SEEK_SET);
      uintptr_t page;
      int offset = 0;
      for (offset = 0; offset < ph.p_memsz;) {
        //alloc a new page and map
        page = (uintptr_t)new_page(1);
        void * va=(void *)((size_t)((void *)ph.p_vaddr + offset) & (~(PGSIZE - 1)));
        map(&pcb->as,va , (void*)page,0b1101111);//TODO!
        int len = 0;
        
        // The entry of the segement may not aligened to (PGSIZE)!
        uint32_t seg_offset = (ph.p_vaddr + offset)&(PGSIZE-1); // Important!! 
        // copy data
        if (ph.p_filesz > offset) {
          len = offset + PGSIZE - seg_offset <= ph.p_filesz ? PGSIZE - seg_offset : ph.p_filesz - offset;
          fs_read(fd, (void*)(page+seg_offset), len);
          offset+=len;
        }
        //empty out 
        if (ph.p_memsz > offset && ph.p_filesz <= offset && len + seg_offset < PGSIZE) {
          while (len + seg_offset < PGSIZE && ph.p_memsz > offset) {
            ((char *)(page+seg_offset))[len] = 0;
            offset++;
            len++;
          }
        }
      }
    }
  }
  return hader->e_entry; //这里的entry就是在libos/crt0/start.S里面定义的_start 
}

void naive_uload(PCB *pcb, const char *filename) {
  uintptr_t entry = loader(pcb, filename);
  Log("Jump to entry = %p", entry);
  ((void(*)())entry) ();
}
char *copy_str(char *dst, const char *src) {
  while (*src != '\0') {
    *dst = *src;
    src++;
    dst++;
  }
  *dst='\0';
  return dst+1;
}

/*
Data Locations,see ABI at
https://ysyx.oscc.cc/docs/ics-pa/4.1.html#%E7%94%A8%E6%88%B7%E8%BF%9B%E7%A8%8B%E7%9A%84%E5%8F%82%E6%95%B0
#####################<-stack.end
Context
####################
Empty......
####################
Str.......
####################
NULL
####################
char *envp []
(Pointer Array)
###################
NULL
###################
char *argv[]
(Pointer Array)
##################
argc
##################
(union)
context* max_brk
AddrSpace as
uintptr_t cp
##################<-stack.start
*/
// _start之后会调用call_main()，在如果要传递参数，应该把参数相关信息传递给call_main,然后由call_main传递给目标main函数
void context_uload(PCB *pcb, const char *filename, char *const argv[], char *const envp[]) {
  assert(envp);
  assert(argv);
  assert(filename);
  assert(pcb);
  protect(&pcb->as); // create an space whitch inherits kernal mapping! WoW!
  pcb->max_brk=0;

  uintptr_t entry = loader(pcb, filename);
  uint8_t *stack = new_page(8);
  //map stack
  for (int i = 0; i < 8; i++) {
    map(&pcb->as,(void*)pcb->as.area.end-(8-i)*PGSIZE,stack+PGSIZE*i,0b1101111);//TODO!
  }


  // uint8_t *stack = pcb->stack;
  // init an Context struct on top of stack
  //the cp pointer stores at the bottom of stack
  pcb->cp =
      ucontext(&pcb->as, (Area){.start = pcb->stack, .end = pcb->stack + STACK_SIZE},
               (void *)entry);
  // pcb->active = true;
  // Log("NEW_PAGE:%x-%x-%x\n", stack,pcb->cp,pcb->cp->mepc);

  //calc addr and num
  uintptr_t base_offseted = (uintptr_t)(stack+ sizeof(AddrSpace)+sizeof(Context*)+sizeof(uintptr_t)*2);
  // 这里的GPR3设置的有问题
  // pcb->cp->GPR3 = base_offseted; //这是nanos-lite直接访问的物理地址!不是虚拟地址!
  pcb->cp->GPR3 = (uintptr_t)((void*)pcb->as.area.end-8*PGSIZE + sizeof(AddrSpace)+sizeof(Context*)+sizeof(uintptr_t)*2); //这是nanos-lite直接访问的物理地址!不是虚拟地址!
  int argc = 0; // TODO need to contain exec_name?
  int envp_num=0;
  for (int i = 0; argv[i] != NULL; i++)
    argc++;
  //seems execvp fails to trans envp
  // for (int i = 0; envp[i] != NULL; i++)
  //   envp_num++;

  // Log("%d-%d",argc,envp_num);
  // get the a,ddr
  // don't assume pointer of size 4Bytes
  *(intptr_t *)(base_offseted) = (intptr_t)argc;
  char* *table_base = (char* *)base_offseted + 1;
  char * string_base = (char*)((char* *)base_offseted + envp_num + argc + 3);

  // Log("%d,%d",argc,envp_num);
  //copy argvs
  for (int i = 0; i < argc; i++) {
    *table_base = (char*)string_base;
    table_base += 1;
    string_base = copy_str(string_base, argv[i]);
    // string_base=stpcpy(string_base,argv[i])+1;
  }
  // set NULL
  *table_base = 0;
  table_base += 1;

  // copy envp
  for (int i = 0; i < envp_num; i++) {
    *table_base = (char*)string_base;
    table_base += 1;
    string_base = copy_str(string_base, envp[i]);
    // string_base = stpcpy(string_base, envp[i]) + 1;
  }
  // set NULL
  *table_base = 0;
  table_base += 1;
  // set the active tag here,making sure the process is finished
  pcb->active = true;
}
void context_kload(PCB *pcb, void *func,void *args) {
  pcb->cp = kcontext((Area){.start=pcb->stack,.end=pcb->stack+STACK_SIZE}, func, args);
  pcb->active=true;
}
