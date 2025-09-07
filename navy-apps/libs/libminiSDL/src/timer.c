#include <NDL.h>
#include <sdl-timer.h>
#include <stdint.h>
#include <stdio.h>

uint32_t sdl_init_time=0;

SDL_TimerID SDL_AddTimer(uint32_t interval, SDL_NewTimerCallback callback, void *param) {
  return NULL;
}

int SDL_RemoveTimer(SDL_TimerID id) {
  return 1;
}

//Returns an unsigned 32-bit value representing the number of milliseconds since the SDL library initialized.
uint32_t SDL_GetTicks() {
  return NDL_GetTicks()-sdl_init_time;
}

void SDL_Delay(uint32_t ms) {
  uint32_t now_time = NDL_GetTicks();
  while(now_time-NDL_GetTicks()<=0);
}
