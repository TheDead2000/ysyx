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

void context_kload(PCB* pcb_p, void (*entry)(void*), void* arg) {

  pcb_p->cp = kcontext(RANGE(pcb_p->stack, pcb_p->stack + STACK_SIZE), entry, arg);
}

/**
 * @description:  |               |
                  +---------------+ <---- ustack.end
                  |  Unspecified  |
                  +---------------+
                  |               | <----------+
                  |    string     | <--------+ |
                  |     area      | <------+ | |
                  |               | <----+ | | |
                  |               | <--+ | | | |
                  +---------------+    | | | | |
                  |  Unspecified  |    | | | | |
                  +---------------+    | | | | |
                  |     NULL      |    | | | | |
                  +---------------+    | | | | |
                  |    ......     |    | | | | |
                  +---------------+    | | | | |
                  |    envp[1]    | ---+ | | | |
                  +---------------+      | | | |
                  |    envp[0]    | -----+ | | |
                  +---------------+        | | |
                  |     NULL      |        | | |
                  +---------------+        | | |
                  | argv[argc-1]  | -------+ | |
                  +---------------+          | |
                  |    ......     |          | |
                  +---------------+          | |
                  |    argv[1]    | ---------+ |
                  +---------------+            |
                  |    argv[0]    | -----------+
                  +---------------+
                  |      argc     |
                  +---------------+ <---- cp->GPRx
                  |               |
 * @param {PCB*} pcb_p
 * @param {char*} filename
 * @return {*}
 */
void context_uload(PCB* pcb_p, const char* filename, char* const argv[], char* const envp[]) {

  // uintptr_t entry = loader(pcb_p, filename);
  // pcb_p->cp = ucontext(&pcb_p->as, RANGE(pcb_p->stack, pcb_p->stack + STACK_SIZE), (void*)entry);

  // get user stack end position
  // we use GPRx to transfer stack end parameter
  char* ustack_start = (char*)new_page(8);
  char* ustack_end = (char*)(ustack_start + PGSIZE * 8);

  Log("ustack_end: %p\n", ustack_end);

  // get count of argv and envp
  int argc = 0;
  int envc = 0;
  while (argv[argc] != NULL) {
    // Log("argv:%p",argv[argc]);
    argc++;
  }
  while (envp[envc] != NULL) {
    envc++;
  }
  Log("argc:%d,envc%d\n", argc, envc);
  Log("%p",argv);
// assert(0);
  // caculate the length of strings in argv,including '\0'
  // same as the bytes of string in mem
  int argv_str_len = 0;
  for (size_t argc_i = 0; argc_i < argc; argc_i++) {
    argv_str_len += strlen(argv[argc_i]) + 1; // include '\0'
    Log("argv%d:%s\n", argc_i, argv[argc_i]);
  }

  // refer to above
  int envp_str_len = 0;
  for (size_t envc_i = 0; envc_i < envc; envc_i++) {
    envp_str_len += strlen(envp[envc_i]) + 1;
    Log("envp%d:%s\n", envc_i, envp[envc_i]);
  }

  // get the start position of string-area on ustack
  // we assume that the Unspecified area which blows ustack.end is zero
  char* str_area_start = ustack_end - envp_str_len - argv_str_len;


  // use another var(str_area_itr) to iterate string area
  char* str_area_itr = str_area_start;
  // copy all strings in argv[] to string area
  for (size_t argc_i = 0; argc_i < argc; argc_i++) {
    strcpy(str_area_itr, argv[argc_i]);
    str_area_itr += strlen(argv[argc_i]) + 1; // include '\0'
  }
  // copy all strings in envp[] to string area
  for (size_t envc_i = 0; envc_i < envc; envc_i++) {
    strcpy(str_area_itr, envp[envc_i]);
    str_area_itr += strlen(envp[envc_i]) + 1;
  }
  // check
  assert(str_area_itr == ustack_end);
  assert((str_area_start + envp_str_len + argv_str_len) == ustack_end);

  // align address to 8
  char* str_area_start_align = (char*)ROUNDDOWN(str_area_start, 8);

  Log("pre_addr:%p,align_addr:%p\n", str_area_start, str_area_start_align);

  // get the position of argv[0]
  char* argv_area_start = str_area_start_align - (envc + argc + 2) * sizeof(uintptr_t);// 2 NULL

  // iterate 
  char** argv_area_itr = (char**)argv_area_start;

  str_area_itr = str_area_start;
  printf("str_area_start:%p,str_area_itr:%p\n", str_area_start, str_area_itr);
  for (size_t argc_i = 0; argc_i < argc; argc_i++) {
    *(argv_area_itr) = str_area_itr; // point to a string
    Log("1%s", *argv_area_itr);
    argv_area_itr++; // move to next
    str_area_itr += strlen(argv[argc_i]) + 1;
  }
  *(argv_area_itr++) = NULL;

  for (size_t envc_i = 0; envc_i < envc; envc_i++) {
    *(argv_area_itr) = str_area_itr;
    Log("2%s", *argv_area_itr);
    argv_area_itr++;
    str_area_itr += strlen(envp[envc_i]) + 1;
  }
  *(argv_area_itr++) = NULL;

  // check
  assert((uintptr_t)argv_area_itr == (uintptr_t)str_area_start_align);
  assert(str_area_itr == ustack_end);

  // copy argc to stack
  uintptr_t* argc_area_start = (uintptr_t*)(argv_area_start - sizeof(uintptr_t));
  *argc_area_start = argc;


  uintptr_t entry = loader(pcb_p, filename);
  printf("filename:%s,entry:%lx\n", filename, entry);
  pcb_p->cp = ucontext(&pcb_p->as, RANGE(pcb_p->stack, pcb_p->stack + STACK_SIZE), (void*)entry);


  pcb_p->cp->GPRx = (uintptr_t)argc_area_start;



  // for check
  uintptr_t argc_test = *(uintptr_t*)(pcb_p->cp->GPRx);
  uintptr_t* argv_test = (uintptr_t*)argv_area_start;
  uintptr_t** envp_test = (uintptr_t**)(argv_test + argc_test + 1);

  for (size_t i = 0; i < argc_test; i++) {
    Log("argv_test%d:%s", i, argv_test[i]);
  }

  while ((*envp_test) != NULL) {
    Log("envp_test:%s", *(envp_test++));
  }
  Log("argv_str_len:%d,envp_str_len%d\n", argv_str_len, envp_str_len);



}