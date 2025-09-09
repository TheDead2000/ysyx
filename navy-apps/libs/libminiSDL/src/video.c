#include <NDL.h>
#include <sdl-video.h>
#include <assert.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

// Performs a fast blit from the source surface to the destination surface.
// 
// Copy from https://wiki.libsdl.org/SDL2/SDL_BlitSurface
// 
// This assumes that the source and destination rectangles are the same size. 
// If either srcrect or dstrect are NULL, the entire surface 
// (src or dst) is copied. The final blit rectangle is saved in 
// dstrect after all clipping is performed.
void SDL_BlitSurface(SDL_Surface *src, SDL_Rect *srcrect, 
                     SDL_Surface *dst, SDL_Rect *dstrect) 
{
    assert(src && dst);
    assert(src->format->BitsPerPixel == dst->format->BitsPerPixel);

    /* 1) Initialize the src/dst coords and size */
    int src_x = srcrect ? srcrect->x : 0;
    int src_y = srcrect ? srcrect->y : 0;
    int w     = srcrect ? srcrect->w : src->w;
    int h     = srcrect ? srcrect->h : src->h;

    int dst_x = dstrect ? dstrect->x : 0;
    int dst_y = dstrect ? dstrect->y : 0;

    /* 2) Clip against the source surface bounds */
    if (src_x < 0) 
    {
        /* shift right */
        w     += src_x;      /* src_x is negative */
        dst_x -= src_x;      /* move dst origin right by same amount */
        src_x  = 0;
    }

    if (src_y < 0) 
    {
        h     += src_y;
        dst_y -= src_y;
        src_y  = 0;
    }

    if (src_x + w > src->w) 
    {
        w = src->w - src_x;
    }

    if (src_y + h > src->h) 
    {
        h = src->h - src_y;
    }

    /* 3) Clip against the destination surface bounds */
    if (dst_x < 0) 
    {
        /* source must shift right now */
        w     += dst_x;      /* dst_x is negative */
        src_x -= dst_x;
        dst_x  = 0;
    }

    if (dst_y < 0) 
    {
        h     += dst_y;
        src_y -= dst_y;
        dst_y  = 0;
    }

    if (dst_x + w > dst->w) 
    {
        w = dst->w - dst_x;
    }

    if (dst_y + h > dst->h) 
    {
        h = dst->h - dst_y;
    }

    /* 4) If nothing to blit, set dstrect to empty and return */
    if (w <= 0 || h <= 0) 
    {
        if (dstrect) 
        {
            dstrect->x = dst_x;
            dstrect->y = dst_y;
            dstrect->w = 0;
            dstrect->h = 0;
        }

        return;
    }

    /* 5) Write back the final blit rectangle */
    if (dstrect) 
    {
        dstrect->x = dst_x;
        dstrect->y = dst_y;
        dstrect->w = w;
        dstrect->h = h;
    }

    /* 6) The actual memcpy loop */
    const uint8_t  bpp    = src->format->BytesPerPixel;
    const uint16_t pitchS = src->pitch;
    const uint16_t pitchD = dst->pitch;
    uint8_t       *pixelsS = (uint8_t *)src->pixels;
    uint8_t       *pixelsD = (uint8_t *)dst->pixels;

    for (int row = 0; row < h; row++) 
    {
        uint8_t *rowS = pixelsS + (src_y + row) * pitchS + src_x * bpp;
        uint8_t *rowD = pixelsD + (dst_y + row) * pitchD + dst_x * bpp;
        memcpy(rowD, rowS, w * bpp);
    }
}

// Perform a fast fill of a rectangle with a specific color.
// dst: The SDL_Surface structure that is the drawing target.
// dstrect: The SDL_Rect structure representing the rectangle to fill, or NULL to fill the entire surface.
// color:	The color to fill with.
void SDL_FillRect(SDL_Surface *dst, SDL_Rect *dstrect, uint32_t color)
{
    // 1) sanity check
    assert(dst);
    assert(dst->pixels);

    // 2) figure out the rectangle to fill (or whole surface)
    SDL_Rect fill = dstrect
      ? *dstrect
      : (SDL_Rect){ .x = 0, .y = 0, .w = (uint16_t)dst->w, .h = (uint16_t)dst->h };

    // 3) clip to [0..w) × [0..h)
    if (fill.x < 0) 
    {
        fill.w += fill.x;
        fill.x = 0;
    }

    if (fill.y < 0) 
    {
        fill.h += fill.y;
        fill.y = 0;
    }

    // Clip again.
    if (fill.x + fill.w > dst->w) 
    {
        fill.w = dst->w - fill.x;
    }

    if (fill.y + fill.h > dst->h) 
    {
        fill.h = dst->h - fill.y;
    }

    // nothing to do?
    if (fill.w <= 0 || fill.h <= 0) 
    {
        return;
    }

    // 4) get format info
    const int bpp = dst->format->BytesPerPixel;
    
    // Bytes per row, including any padding.
    const int pitch = dst->pitch;     
    uint8_t *pixels = dst->pixels;

    // 5) fill each row
    for (int row = 0; row < fill.h; row++) 
    {
        // pointer to the first byte of this scanline
        uint8_t *rowp = pixels
                      + (fill.y + row) * pitch
                      +  fill.x * bpp;

        for (int col = 0; col < fill.w; col++) 
        {
            uint8_t *pixelp = rowp + col * bpp;

            switch (bpp) {
                case 1: {
                    // 8-bit surface
                    pixelp[0] = (uint8_t)(color & 0xFF);
                    break;
                }

                case 2: {
                    // 16-bit surface
                    *(uint16_t *)pixelp = (uint16_t)color;
                    break;
                }

                case 3: {
                  // 24-bit surface, copy the lowest 3 bytes of color
                  memcpy(pixelp, &color, 3);
                  break;
                }
                    
                case 4: {
                  // 32-bit surface
                  *(uint32_t *)pixelp = color;
                  break;
                }

                default: {
                    // Unsupported bpp.
                    assert(0);
                    break;
                }
            }
        }
    }
}

void SDL_UpdateRect(SDL_Surface *s, int x, int y, int w, int h) {
  assert(s);

  // If w or h is zero, update the entire surface
  if (w == 0 || h == 0) 
  {
      x = 0; 
      y = 0;
      w = s->w; 
      h = s->h;
  }

  if (s->format->BitsPerPixel == 32) 
  {
      // 32-bit path, direct draw.
      uint32_t *pixels = (uint32_t *)s->pixels + y * s->w + x;
      NDL_DrawRect(pixels, x, y, w, h);
  }
  // For The Legend of Sword and Fairy.
  else if (s->format->BitsPerPixel == 8) 
  {
      // 8-bit palette path
      const int pitch = s->pitch;
      uint8_t *src = (uint8_t *)s->pixels + y * pitch + x;
      uint32_t *buf = malloc(sizeof(uint32_t) * w * h);
      assert(buf);

      // The actual ARGB color array.
      SDL_Color *palette = s->format->palette->colors;
      for (int row = 0; row < h; ++row) 
      {
          uint8_t *rowp = src + row * pitch;
          uint32_t *dstp = buf + row * w;
          for (int col = 0; col < w; ++col) 
          {
              const uint8_t idx = rowp[col];
              SDL_Color c = palette[idx];
              // Pack into 0xAARRGGBB.
              dstp[col] = (c.a << 24) | (c.r << 16) | (c.g << 8) | c.b;
          }
      }

      // Draw it.
      NDL_DrawRect(buf, x, y, w, h);

      // Don't forget to free the buffer.
      // Maybe cache the buffer???
      free(buf);
  }
  else 
  {
      // Unsupported format
      assert(0);
  }
}



// APIs below are already implemented.

static inline int maskToShift(uint32_t mask) {
  switch (mask) {
    case 0x000000ff: return 0;
    case 0x0000ff00: return 8;
    case 0x00ff0000: return 16;
    case 0xff000000: return 24;
    case 0x00000000: return 24; // hack
    default: assert(0);
  }
}

SDL_Surface* SDL_CreateRGBSurface(uint32_t flags, int width, int height, int depth,
    uint32_t Rmask, uint32_t Gmask, uint32_t Bmask, uint32_t Amask) {
  assert(depth == 8 || depth == 32);
  SDL_Surface *s = malloc(sizeof(SDL_Surface));
  assert(s);
  s->flags = flags;
  s->format = malloc(sizeof(SDL_PixelFormat));
  assert(s->format);
  if (depth == 8) {
    s->format->palette = malloc(sizeof(SDL_Palette));
    assert(s->format->palette);
    s->format->palette->colors = malloc(sizeof(SDL_Color) * 256);
    assert(s->format->palette->colors);
    memset(s->format->palette->colors, 0, sizeof(SDL_Color) * 256);
    s->format->palette->ncolors = 256;
  } else {
    s->format->palette = NULL;
    s->format->Rmask = Rmask; s->format->Rshift = maskToShift(Rmask); s->format->Rloss = 0;
    s->format->Gmask = Gmask; s->format->Gshift = maskToShift(Gmask); s->format->Gloss = 0;
    s->format->Bmask = Bmask; s->format->Bshift = maskToShift(Bmask); s->format->Bloss = 0;
    s->format->Amask = Amask; s->format->Ashift = maskToShift(Amask); s->format->Aloss = 0;
  }

  s->format->BitsPerPixel = depth;
  s->format->BytesPerPixel = depth / 8;

  s->w = width;
  s->h = height;
  s->pitch = width * depth / 8;
  assert(s->pitch == width * s->format->BytesPerPixel);

  if (!(flags & SDL_PREALLOC)) {
    s->pixels = malloc(s->pitch * height);
    assert(s->pixels);
  }

  return s;
}

SDL_Surface* SDL_CreateRGBSurfaceFrom(void *pixels, int width, int height, int depth,
    int pitch, uint32_t Rmask, uint32_t Gmask, uint32_t Bmask, uint32_t Amask) {
  SDL_Surface *s = SDL_CreateRGBSurface(SDL_PREALLOC, width, height, depth,
      Rmask, Gmask, Bmask, Amask);
  assert(pitch == s->pitch);
  s->pixels = pixels;
  return s;
}

void SDL_FreeSurface(SDL_Surface *s) {
  if (s != NULL) {
    if (s->format != NULL) {
      if (s->format->palette != NULL) {
        if (s->format->palette->colors != NULL) free(s->format->palette->colors);
        free(s->format->palette);
      }
      free(s->format);
    }
    if (s->pixels != NULL && !(s->flags & SDL_PREALLOC)) free(s->pixels);
    free(s);
  }
}

SDL_Surface* SDL_SetVideoMode(int width, int height, int bpp, uint32_t flags) {
  if (flags & SDL_HWSURFACE) NDL_OpenCanvas(&width, &height);
  return SDL_CreateRGBSurface(flags, width, height, bpp,
      DEFAULT_RMASK, DEFAULT_GMASK, DEFAULT_BMASK, DEFAULT_AMASK);
}

void SDL_SoftStretch(SDL_Surface *src, SDL_Rect *srcrect, SDL_Surface *dst, SDL_Rect *dstrect) {
  assert(src && dst);
  assert(dst->format->BitsPerPixel == src->format->BitsPerPixel);
  assert(dst->format->BitsPerPixel == 8);

  int x = (srcrect == NULL ? 0 : srcrect->x);
  int y = (srcrect == NULL ? 0 : srcrect->y);
  int w = (srcrect == NULL ? src->w : srcrect->w);
  int h = (srcrect == NULL ? src->h : srcrect->h);

  assert(dstrect);
  if(w == dstrect->w && h == dstrect->h) {
    /* The source rectangle and the destination rectangle
     * are of the same size. If that is the case, there
     * is no need to stretch, just copy. */
    SDL_Rect rect;
    rect.x = x;
    rect.y = y;
    rect.w = w;
    rect.h = h;
    SDL_BlitSurface(src, &rect, dst, dstrect);
  }
  else {
    assert(0);
  }
}

void SDL_SetPalette(SDL_Surface *s, int flags, SDL_Color *colors, int firstcolor, int ncolors) {
  assert(s);
  assert(s->format);
  assert(s->format->palette);
  assert(firstcolor == 0);

  s->format->palette->ncolors = ncolors;
  memcpy(s->format->palette->colors, colors, sizeof(SDL_Color) * ncolors);

  if(s->flags & SDL_HWSURFACE) {
    assert(ncolors == 256);
    for (int i = 0; i < ncolors; i ++) {
      uint8_t r = colors[i].r;
      uint8_t g = colors[i].g;
      uint8_t b = colors[i].b;
    }

    SDL_UpdateRect(s, 0, 0, 0, 0);
  }
}

static void ConvertPixelsARGB_ABGR(void *dst, void *src, int len) {
  int i;
  uint8_t (*pdst)[4] = dst;
  uint8_t (*psrc)[4] = src;
  union {
    uint8_t val8[4];
    uint32_t val32;
  } tmp;
  int first = len & ~0xf;
  for (i = 0; i < first; i += 16) {
#define macro(i) \
    tmp.val32 = *((uint32_t *)psrc[i]); \
    *((uint32_t *)pdst[i]) = tmp.val32; \
    pdst[i][0] = tmp.val8[2]; \
    pdst[i][2] = tmp.val8[0];

    macro(i + 0); macro(i + 1); macro(i + 2); macro(i + 3);
    macro(i + 4); macro(i + 5); macro(i + 6); macro(i + 7);
    macro(i + 8); macro(i + 9); macro(i +10); macro(i +11);
    macro(i +12); macro(i +13); macro(i +14); macro(i +15);
  }

  for (; i < len; i ++) {
    macro(i);
  }
}

SDL_Surface *SDL_ConvertSurface(SDL_Surface *src, SDL_PixelFormat *fmt, uint32_t flags) {
  assert(src->format->BitsPerPixel == 32);
  assert(src->w * src->format->BytesPerPixel == src->pitch);
  assert(src->format->BitsPerPixel == fmt->BitsPerPixel);

  SDL_Surface* ret = SDL_CreateRGBSurface(flags, src->w, src->h, fmt->BitsPerPixel,
    fmt->Rmask, fmt->Gmask, fmt->Bmask, fmt->Amask);

  assert(fmt->Gmask == src->format->Gmask);
  assert(fmt->Amask == 0 || src->format->Amask == 0 || (fmt->Amask == src->format->Amask));
  ConvertPixelsARGB_ABGR(ret->pixels, src->pixels, src->w * src->h);

  return ret;
}

uint32_t SDL_MapRGBA(SDL_PixelFormat *fmt, uint8_t r, uint8_t g, uint8_t b, uint8_t a) {
  assert(fmt->BytesPerPixel == 4);
  uint32_t p = (r << fmt->Rshift) | (g << fmt->Gshift) | (b << fmt->Bshift);
  if (fmt->Amask) p |= (a << fmt->Ashift);
  return p;
}

int SDL_LockSurface(SDL_Surface *s) {
  return 0;
}

void SDL_UnlockSurface(SDL_Surface *s) {
}
