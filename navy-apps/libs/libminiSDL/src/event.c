#include "fcntl.h"
#include "sdl-event.h"
#include "unistd.h"
#include <NDL.h>
#include <SDL.h>
#include <string.h>

// #define keynames(k) #k,
static uint8_t keystate[255]={};

int SDL_PushEvent(SDL_Event *ev) {
  return 0;
}

int SDL_PollEvent(SDL_Event *ev) {
  char buffer[100];
  ev->key.keysym.sym = SDLK_NONE;
  ev->type = SDL_USEREVENT;
  int fd = open("/dev/events", O_RDONLY);
  if (read(fd, buffer, 100)) {
    if (strncmp(buffer, "kd", 2)) {
      ev->type = SDL_KEYDOWN;
    }
    if (strncmp(buffer, "ku", 2)) {
      ev->type = SDL_KEYUP;
    }
    for (int i = 0; i < 256; i++) {
      if (keyname[i] && strcmp(buffer + 3, keyname[i]) == 0) {
        ev->key.keysym.sym = i;
        if (ev->type == SDL_KEYDOWN) {
          keystate[i] = 1;
        } else {
          keystate[i] = 0;
        }
        break;
      }
    }
    return 1;
  }
  return 0;
}

int SDL_WaitEvent(SDL_Event *event) {
  // return 1;
  char buffer[100];
  event->key.keysym.sym = SDLK_NONE;
  event->type = SDL_USEREVENT;
  while (1) {
    int fd = open("/dev/events", O_RDONLY);
    if (read(fd, buffer, 100)) {
      if (strncmp(buffer, "kd", 2)) {
        event->type = SDL_KEYDOWN;
      }
      if (strncmp(buffer, "ku", 2)) {
        event->type = SDL_KEYUP;
      }
      for (int i = 0; i < 256; i++) {
        if (keyname[i] &&strcmp(buffer + 3, keyname[i]) == 0) {
          event->key.keysym.sym = i;
          if (event->type == SDL_KEYDOWN) {
            keystate[i] = 1;
          } else {
            keystate[i]=0;
          }
          break;
        }
      }
      return 1;
      // event->key.keysym.sym = SDLK_J;
    }
    return 1;
  }
}

int SDL_PeepEvents(SDL_Event *ev, int numevents, int action, uint32_t mask) {
  return 0;
}

uint8_t *SDL_GetKeyState(int *numkeys) {
  SDL_Event sdle;
  // while (SDL_PollEvent(&sdle));
  if (numkeys) {
      *numkeys = 255;
    }
  return keystate;
}
