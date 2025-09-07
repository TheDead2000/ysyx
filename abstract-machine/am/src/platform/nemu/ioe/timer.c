#include <am.h>
#include <nemu.h>
// #include <sys/time.h>
// #include <time.h>

// struct timeval start, now;
// time_t currentTime;

void __am_timer_init() {
  // gettimeofday(&start, NULL);
  // time(&currentTime);
}

void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime) {
  // uptime->us += 100;
  // gettimeofday(&now, NULL);
  // uptime->us=now.tv_usec - start.tv_usec;
  uptime->us=((uint64_t)inl(RTC_ADDR+4))<<32;
  uptime->us+=inl(RTC_ADDR);
}

void __am_timer_rtc(AM_TIMER_RTC_T *rtc) {
  rtc->second = 0;
  rtc->minute = 0;
  rtc->hour   = 0;
  rtc->day    = 0;
  rtc->month  = 0;
  rtc->year   = 1900;
}
