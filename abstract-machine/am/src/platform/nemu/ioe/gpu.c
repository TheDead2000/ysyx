#include <am.h>
#include <nemu.h>

#define SYNC_ADDR (VGACTL_ADDR + 4)

int sw=0,sh=0;
void __am_gpu_init() {
  // int i;
  int wh =inl(VGACTL_ADDR);
   sw = (wh>>16)&0xffff; // TODO: get the correct width
   sh = wh&0xffff; // TODO: get the correct height
  // uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;
  // for (int i = 0; i < w * h; i++)
  //   fb[i] = i;
  // outl(SYNC_ADDR, 1);
}

void __am_gpu_config(AM_GPU_CONFIG_T *cfg) {
  *cfg = (AM_GPU_CONFIG_T) {
    .present = true, .has_accel = false,
    .width = sw, .height = sh,
    .vmemsz = 1
  };
}

void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl) {
  uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;
  int x=ctl->x,y=ctl->y,w=ctl->w,h=ctl->h;
  for(int i=0;i<h;i++)
    for(int j=0;j<w;j++){
      fb[sw*(y+i)+(x+j)]=((uint32_t *)(ctl->pixels))[w*i+j];
    }
  if (ctl->sync) {
    outl(SYNC_ADDR, 1);
  }
}

void __am_gpu_status(AM_GPU_STATUS_T *status) {
  status->ready = true;
}
