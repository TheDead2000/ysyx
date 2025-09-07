#include <fcntl.h>
#include <stdint.h>
#include <stdio.h>
#include <unistd.h>
#define SDL_malloc  malloc
#define SDL_free    free
#define SDL_realloc realloc

#define SDL_STBIMAGE_IMPLEMENTATION
#include "SDL_stbimage.h"

SDL_Surface* IMG_Load_RW(SDL_RWops *src, int freesrc) {
  assert(src->type == RW_TYPE_MEM);
  assert(freesrc == 0);
  return NULL;
}

SDL_Surface *IMG_Load(const char *filename) {
  int fd = open(filename, O_RDONLY);
  uint size = lseek(fd, 0, SEEK_END)*4;
  assert(size);
  // uint size = ftell(fp);
  uint8_t *buffer = malloc(size);
  lseek(fd, 0, SEEK_SET);
  read(fd, buffer, size);
  close(fd);

  SDL_Surface *surface = STBIMG_LoadFromMemory(buffer, size);
  free(buffer);
  return surface;
}

int IMG_isPNG(SDL_RWops *src) {
  return 0;
}

SDL_Surface* IMG_LoadJPG_RW(SDL_RWops *src) {
  return IMG_Load_RW(src, 0);
}

char *IMG_GetError() {
  return "Navy does not support IMG_GetError()";
}
