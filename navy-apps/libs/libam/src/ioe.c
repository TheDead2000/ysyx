#include "NDL.h"
#include "inttypes.h"
#include "stdio.h"
#include "sys/time.h"
#include "unistd.h"
#include <am.h>
#include <stdlib.h>
#define HEAP_SIZE 0x800000

void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
  kbd->keydown = false;
  kbd->keycode = AM_KEY_NONE;
  // TODO:KBD!!
  // 草，不是很想写了
  
}
void __am_timer_rtc(AM_TIMER_RTC_T *rtc) {
  rtc->second = 0;
  rtc->minute = 0;
  rtc->hour = 0;
  rtc->day = 0;
  rtc->month = 0;
  rtc->year = 1900;
}
void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime) {
  struct timeval stime;
  gettimeofday(&stime, NULL);
  uptime->us = stime.tv_sec * 1000000 + stime.tv_usec;
}
void __am_gpu_config(AM_GPU_CONFIG_T *config) {
  char buffer[128];
  read(5, buffer, 0);
  static int screen_w_h = 0, screen_h_h = 0;
  sscanf(buffer, "WIDTH:%d\nHEIGHT:%d", &screen_w_h, &screen_h_h);
  *config = (AM_GPU_CONFIG_T){.present = true,
                              .has_accel = false,
                              .width = screen_w_h,
                              .height = screen_h_h,
                              .vmemsz = 1};
}
void __am_gpu_status(AM_GPU_STATUS_T *stat) {
  stat->ready=true;
}
void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *frame) {
  //TODO:WHY/4??
  NDL_DrawRect(frame->pixels, frame->x/4, frame->y, frame->w, frame->h);
}



static void __am_timer_config(AM_TIMER_CONFIG_T *cfg) {
  cfg->present = true;
  cfg->has_rtc = false;
}
static void __am_input_config(AM_INPUT_CONFIG_T *cfg) { cfg->present = true; }
static void __am_uart_config(AM_UART_CONFIG_T *cfg) { cfg->present = false; }
static void __am_net_config(AM_NET_CONFIG_T *cfg) { cfg->present = false; }
typedef void (*handler_t)(void *buf);
static void *lut[128] = {
    [AM_TIMER_CONFIG] = __am_timer_config,
    [AM_TIMER_RTC] = __am_timer_rtc,
    [AM_TIMER_UPTIME] = __am_timer_uptime,
    [AM_INPUT_CONFIG] = __am_input_config,
    [AM_INPUT_KEYBRD] = __am_input_keybrd,
    [AM_GPU_CONFIG] = __am_gpu_config,
    [AM_GPU_FBDRAW] = __am_gpu_fbdraw,
    [AM_GPU_STATUS] = __am_gpu_status,
    [AM_UART_CONFIG] = __am_uart_config,
    [AM_AUDIO_CONFIG] = NULL,
    [AM_AUDIO_CTRL] = NULL,
    [AM_AUDIO_STATUS] = NULL,
    [AM_AUDIO_PLAY] = NULL,
    [AM_DISK_CONFIG] = NULL,
    [AM_DISK_STATUS] = NULL,
    [AM_DISK_BLKIO] = NULL,
    [AM_NET_CONFIG] = __am_net_config,
};

// 从编号为reg的寄存器中读出内容到缓冲区buf中
void ioe_read(int reg, void *buf) { ((handler_t)lut[reg])(buf); }
// 往编号为reg寄存器中写入缓冲区buf中的内容.
void ioe_write(int reg, void *buf) { ((handler_t)lut[reg])(buf); }
bool ioe_init() {
  heap.start = malloc(HEAP_SIZE);
  heap.end = heap.start + HEAP_SIZE;
  NDL_Init(0);
  return true;
}
