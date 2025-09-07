#include "am.h"
#include <common.h>
#include <fs.h>
#include <stdint.h>

#if defined(MULTIPROGRAM) && !defined(TIME_SHARING)
# define MULTIPROGRAM_YIELD() yield()
#else
# define MULTIPROGRAM_YIELD()
#endif

#define NAME(key) \
  [AM_KEY_##key] = #key,

static const char *keyname[256] __attribute__((used)) = {
  [AM_KEY_NONE] = "NONE",
  AM_KEYS(NAME)
};

int screen_w=0;

extern Finfo file_table[];

size_t serial_write(const void *buf, size_t offset, size_t len) {
  yield();
  for (int i = 0; i < len; i++)
    putch(((const char *)buf)[i]);
  return len;
}

size_t events_read(void *buf, size_t offset, size_t len) {
  yield();
   AM_INPUT_KEYBRD_T ev = io_read(AM_INPUT_KEYBRD);
  if (ev.keycode == AM_KEY_NONE) {
    return 0;
  } else {
    return sprintf(buf,"%s %s\n", ev.keydown ?"kd":"ku", keyname[ev.keycode]);
  }
}

size_t dispinfo_read(void *buf, size_t offset, size_t len) {
  yield();
  // snprintf("WIDTH : 640\nHEIGHT:480", unsigned long, const char *, ...)
  AM_GPU_CONFIG_T gpuconfig;
  ioe_read(AM_GPU_CONFIG, &gpuconfig);
  if (gpuconfig.present) {
    return sprintf(buf,"WIDTH:%d\nHEIGHT:%d\n",gpuconfig.width,gpuconfig.height);
  }
  else
    return sprintf(buf, "WIDTH:640\nHEIGHT:480\n");
}

size_t fb_write(const void *buf, size_t offset, size_t len) {
  yield();
  io_write(AM_GPU_FBDRAW, offset%screen_w, offset/screen_w, (void *)buf, len/sizeof(uint32_t), 1, true);
  file_table[FD_FB].open_offset +=len;

  return len;
}

void init_device() {
  Log("Initializing devices...");
  ioe_init();
}
