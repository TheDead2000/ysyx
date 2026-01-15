#include <am.h>
#include "ysyxsoc.h"
#include <stdio.h>

static uint32_t boot_time = 0;

static uint32_t read_time() {
  uint32_t h = inl(CLINT_TIME + 4);
  uint32_t l = inl(CLINT_TIME);
  uint32_t _time = (uint64_t)l + ((uint64_t)h << 32);
  printf("read_time: %d\n", _time);
  return _time;
}


void __am_timer_init() {
  boot_time = read_time();
}

void __am_timer_uptime(AM_TIMER_UPTIME_T* uptime) {

  uptime->us = read_time() - boot_time;
  // printf("time:%d\n", read_time() / 1000000);
}

void __am_timer_rtc(AM_TIMER_RTC_T* rtc) {
  rtc->second = 0;
  rtc->minute = 0;
  rtc->hour = 0;
  rtc->day = 0;
  rtc->month = 0;
  rtc->year = 1900;
}
