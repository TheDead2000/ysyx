#include <stdint.h>
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

int main() {
  uint32_t *small = malloc(sizeof(uint32_t));
  printf("small:%x\n",small);
  uint32_t *med = malloc(sizeof(uint32_t) * 0x100);
  printf("med:%x\n",med);
  uint32_t *large = malloc(0x5000);
  printf("large:%x\n",large);
  printf("PASS!!!\n");

  return 0;
}
