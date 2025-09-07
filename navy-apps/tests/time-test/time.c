#include <stdio.h>
#include <sys/stat.h>
#include <sys/time.h>
#include <time.h>
#include <NDL.h>

# define USE_NDL

int main() {
  printf("Hello for every 0.5 sec");
#ifndef USE_NDL
  int i = 0;
  uint64_t time_us;
  uint64_t prev_time_us=0;
  struct timeval stime;
  while (1) {
    gettimeofday(&stime, NULL);
    time_us=stime.tv_sec*1000000+stime.tv_usec;
    if (time_us-prev_time_us>500000) {
      printf("Hello World from Navy-apps for the %dth time!\n", i++);
      prev_time_us=time_us;
    }
  }
#else
  int i = 0;
  uint64_t time_ms;
  uint64_t prev_time_ms=0;
  while (1) {
    time_ms = NDL_GetTicks();
    if (time_ms-prev_time_ms>500) {
      printf("Hello World from Navy-apps for the %dth time!\n", i++);
      prev_time_ms=time_ms;
    }
  }
  return 0;
#endif
}
