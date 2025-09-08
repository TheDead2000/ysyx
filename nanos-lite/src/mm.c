#include "proc.h"
#include <memory.h>
#include <stdint.h>
#include <stdlib.h>

static void *pf = NULL;
// execve calls new_page!!
// execve 不会 反回原来的控制流，而是在原来的地方创建！
// new_page 为用户进程创建空间，所以并不需要置0?
void *new_page(size_t nr_page) {
  // size_t page_size = nr_page*PGSIZE;
  // return malloc(page_size);
  void *pf_prev = pf;
  pf += nr_page * PGSIZE;
  // for (uint32_t *i = pf_prev; i < (uint32_t *)pf; i++) {
  //   *i=0;  
  // }
  return pf_prev;
}

#ifdef HAS_VME
static void *pg_alloc(int n) {
  void *page_prev = pf;
  pf += PGSIZE;
  for (uint32_t *i = page_prev; i < (uint32_t *)pf; i++) {
    *i = 0;
  }
  return page_prev;
}
#endif

void free_page(void *p) {
  panic("not implement yet");
}

#define PAGE_SIZE (0x1000)
#define PAGE_OFF_MASK ((PAGE_SIZE)-1)
#define PAGE_NUMBER_MASK (~(PAGE_OFF_MASK))


/* The brk() system call handler. */
int mm_brk(uintptr_t brk) {
  // init the max_brk (in crt0.c/call_main)
  if (current->max_brk == 0) {
    current->max_brk = brk;
    return 0;
  }
  if (current->max_brk < brk) {
    uintptr_t prevbrk = current->max_brk + PAGE_SIZE;
    //allocate new page
    while ((prevbrk & PAGE_NUMBER_MASK) <= (brk & PAGE_NUMBER_MASK)) {
      void *page = new_page(1);
      map(&current->as, (void *)(prevbrk & PAGE_NUMBER_MASK), page, 0b101111);//TODO!
      prevbrk+=PAGE_SIZE;
    }
    current->max_brk = brk;
  }
  return 0;
}
// THE Kernel should also run in vitural memory,but the pa==va!!
void init_mm() {
  pf = (void *)ROUNDUP(heap.start, PGSIZE);//TODO:print %p
  Log("free physical pages starting from %x", pf);

#ifdef HAS_VME
  vme_init(pg_alloc, free_page);
#endif
}
