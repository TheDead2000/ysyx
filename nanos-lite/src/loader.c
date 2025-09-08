#include <proc.h>
#include <elf.h>
#include <common.h>

#ifdef __LP64__
# define Elf_Ehdr Elf64_Ehdr
# define Elf_Phdr Elf64_Phdr
#else
# define Elf_Ehdr Elf32_Ehdr
# define Elf_Phdr Elf32_Phdr
#endif

static uintptr_t loader(PCB *pcb, const char *filename) {
  
  int fd = fs_open(filename, 0, 0);
  if (fd < 0) {
    panic("should not reach here");
  }
  Elf_Ehdr elf;
 
  assert(fs_read(fd, &elf, sizeof(elf)) == sizeof(elf));
  // 检查魔数
  assert(*(uint32_t *)elf.e_ident == 0x464c457f);
  
  Elf_Phdr phdr;
  for (int i = 0; i < elf.e_phnum; i++) {
    uint32_t base = elf.e_phoff + i * elf.e_phentsize;
 
    fs_lseek(fd, base, 0);
    assert(fs_read(fd, &phdr, elf.e_phentsize) == elf.e_phentsize);
    
    // 需要装载的段
    if (phdr.p_type == PT_LOAD) {
 
      char * buf_malloc = (char *)malloc(phdr.p_filesz);
 
      fs_lseek(fd, phdr.p_offset, 0);
      assert(fs_read(fd, buf_malloc, phdr.p_filesz) == phdr.p_filesz);
      
      memcpy((void*)phdr.p_vaddr, buf_malloc, phdr.p_filesz);
      memset((void*)phdr.p_vaddr + phdr.p_filesz, 0, phdr.p_memsz - phdr.p_filesz);
      
      free(buf_malloc);
    }
  }
 
  assert(fs_close(fd) == 0);
  
  return elf.e_entry;
}

void naive_uload(PCB *pcb, const char *filename) {
  uintptr_t entry = loader(pcb, filename);
  Log("Jump to entry = %lx", entry);
  ((void(*)())entry) ();
}

void context_kload(PCB *pcb, void *func,void *args) {
  pcb->cp = kcontext((Area){.start=pcb->stack,.end=pcb->stack+STACK_SIZE}, func, args);
  pcb->active=true;
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