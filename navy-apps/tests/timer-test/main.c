#include <unistd.h>
#include <stdio.h>
#include <sys/time.h>

// int main() {
//     struct timeval tv;
//     gettimeofday(&tv, NULL);
    
//     int ms = 1000;
//     while (1) {
//       while ((tv.tv_sec * 1000 + tv.tv_usec / 1000) < ms) {
//         gettimeofday(&tv, NULL);
//       }
//       printf("time %d ", tv.tv_sec);
//       printf("ms = %d\n", ms);
//       ms += 1000;
//     }
//   }
int main(){
    __uint32_t last, now;
    now = NDL_GetTicks();
    last = now;
    int i;
    while (1) {
      now = NDL_GetTicks();
      if (now - last >= 1000) {
        last = now;
        printf("timer-test:%d\n", i++);
      }
    }
    return 0;
}
