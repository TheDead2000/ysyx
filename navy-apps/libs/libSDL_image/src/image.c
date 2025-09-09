#define SDL_malloc  malloc
#define SDL_free    free
#define SDL_realloc realloc

#define SDL_STBIMAGE_IMPLEMENTATION
#include "SDL_stbimage.h"

SDL_Surface* IMG_Load_RW(SDL_RWops *src, int freesrc) 
{
  assert(src->type == RW_TYPE_MEM);
  assert(freesrc == 0);
  return NULL;
}

SDL_Surface* IMG_Load(const char *filename) 
{
  if (!filename) 
  {
    printf("IMG_Load: filename is NULL");
    return NULL;
  }

  // 1. Open the file in binary mode
  FILE *fp = fopen(filename, "rb");
  if (!fp) 
  {
      printf("IMG_Load: could not open '%s'\n", filename);
      return NULL;
  }

  // 2. Determine file size
  if (fseek(fp, 0, SEEK_END) != 0) 
  {
      printf("IMG_Load: fseek failed");
      fclose(fp);
      return NULL;
  }

  long size = ftell(fp);
  if (size < 0) 
  {
    printf("IMG_Load: ftell failed");
    fclose(fp);
    return NULL;
  }

  rewind(fp);

  // 3. Allocate temporary buffer
  unsigned char *buf = (unsigned char*)malloc((size_t)size);
  if (!buf) 
  {
    printf("IMG_Load: out of memory allocating %ld bytes", size);
    fclose(fp);
    return NULL;
  }

  // 4. Read file into buffer
  size_t read_bytes = fread(buf, 1, (size_t)size, fp);
  if (read_bytes != (size_t)size) 
  {
      printf("IMG_Load: read error (%zu of %ld bytes)", read_bytes, size);
      free(buf);
      fclose(fp);
      return NULL;
  }

  // 5. Decode image from memory
  //    STBIMG_LoadFromMemory takes ownership of buf on success,
  //    or you must free it yourself if it fails.
  SDL_Surface *surface = STBIMG_LoadFromMemory(buf, (size_t)size);
  if (!surface) 
  {
    // STBIMG_LoadFromMemory should call SDL_SetError on failure
    free(buf);
    return NULL;
  }

  // 6. Free the temporary buffer if STBIMG didn't consume it
  free(buf);

  // 7. Return the decoded surface
  return surface;
}



int IMG_isPNG(SDL_RWops *src) 
{
  return 0;
}

SDL_Surface* IMG_LoadJPG_RW(SDL_RWops *src) 
{
  return IMG_Load_RW(src, 0);
}

char *IMG_GetError() 
{
  return "Navy does not support IMG_GetError()";
}
