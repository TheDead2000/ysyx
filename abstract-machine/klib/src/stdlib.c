#include <am.h>
#include <klib.h>
#include <klib-macros.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)
static unsigned long int next = 1;

int rand(void) {
  // RAND_MAX assumed to be 32767
  next = next * 1103515245 + 12345;
  return (unsigned int)(next/65536) % 32768;
}

void srand(unsigned int seed) {
  next = seed;
}

int abs(int x) {
  return (x < 0 ? -x : x);
}

int atoi(const char* nptr) {
  int x = 0;
  while (*nptr == ' ') { nptr ++; }
  while (*nptr >= '0' && *nptr <= '9') {
    x = x * 10 + *nptr - '0';
    nptr ++;
  }
  return x;
}

char* head_start_p = NULL;
void *malloc(size_t size) {
  // On native, malloc() will be called during initializaion of C runtime.
  // Therefore do not call panic() here, else it will yield a dead recursion:
  //   panic() -> putchar() -> (glibc) -> malloc() -> panic()
#if !(defined(__ISA_NATIVE__) && defined(__NATIVE_USE_KLIB__))
  if (head_start_p == NULL) {
    head_start_p = heap.start;
  }
  // static int i = 0;
  // if (i == 0) {
  //   i++;
  //   printf("malloc init\n");
  //   init_memory_pool(heap.end - heap.start + 1, heap.start);
  // }
  // printf("malloc\n");
  // return tlsf_malloc(size);
  char* last_p = head_start_p;
  head_start_p += size;
  return last_p;
#endif
  return NULL;
}

void free(void *ptr) {
  printf("free!\n");
}

#endif
