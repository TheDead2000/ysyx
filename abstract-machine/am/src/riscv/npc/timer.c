#include <am.h>
#include "../riscv.h"
#include<stdio.h>

uint64_t am_start_time = 0;

uint64_t get_time_am(){
  uint32_t time_low = inl(RTC_ADDR);
  uint32_t time_high = inl(RTC_ADDR + 4);
  // printf("%d,%d\n",time_low,time_high);
  return ((uint64_t)time_high << 32) + time_low;
}

void __am_timer_init() {
  am_start_time=get_time_am();
}

void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime) {
  // uptime->us=((uint64_t)inl(RTC_ADDR+4))<<32;
  uptime->us=get_time_am();
}

void __am_timer_rtc(AM_TIMER_RTC_T *rtc) {
  rtc->second = 0;
  rtc->minute = 0;
  rtc->hour   = 0;
  rtc->day    = 0;
  rtc->month  = 0;
  rtc->year   = 1900;
}
