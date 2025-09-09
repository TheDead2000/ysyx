#include <NDL.h>
#include <SDL.h>
#include <assert.h>
#include <string.h>

#define keyname(k) #k,

static const char *keyname[] = {
  "NONE",
  _KEYS(keyname)
};
#define KEANAME_COUNT (sizeof(keyname) / sizeof(keyname[0]))

static uint8_t keyStates[KEANAME_COUNT] = { 0 };


/* ring buffer for outgoing SDL_Events */
#define EVENT_QUEUE_SIZE 128
static SDL_Event  eventQueue[EVENT_QUEUE_SIZE];
static int queueHead = 0;
static int queueTail = 0;

/* enqueue, dropping oldest if full */
static void enqueueEvent(const SDL_Event *ev) 
{
  const int next = (queueTail + 1) % EVENT_QUEUE_SIZE;
  if (next == queueHead) 
  {
      /* buffer full → overwrite oldest */
      queueHead = (queueHead + 1) % EVENT_QUEUE_SIZE;
  }

  eventQueue[queueTail] = *ev;
  queueTail = next;
}

/* dequeue one, return 1 if success */
static int dequeueEvent(SDL_Event *ev) 
{
  if (queueHead == queueTail) 
  {
    // Empty
    return 0;
  }

  *ev = eventQueue[queueHead];
  queueHead = (queueHead + 1) % EVENT_QUEUE_SIZE;
  return 1;
}


// Helper: find the index of 'name' in keyname[], or -1 if not found
static int lookupKeycode(const char *name) 
{
  for (int i = 0; i < KEANAME_COUNT; i++) 
  {
      if (strcmp(name, keyname[i]) == 0) 
      {
          return i;
      }
  }

  return -1;
}

/* centralized: read every raw NDL event, update keyStates, enqueue */
static void pumpKeyboardEvents(void) 
{
  char buf[64];

  while (true) 
  {
      const int n = NDL_PollEvent(buf, sizeof(buf));
      if (n <= 0) 
      {
        // No event.
        break;
      }

      buf[(n < (int)sizeof(buf) ? n : sizeof(buf)-1)] = '\0';

      char prefix[3], name[32];
      if (sscanf(buf, "%2s %31s", prefix, name) != 2) 
      {
        // malformed  
        continue;
      }

      int kc = lookupKeycode(name);
      if (kc < 0) 
      {
        // unknown key
        continue;
      }

      SDL_Event ev = {0};
      if (strcmp(prefix, "kd") == 0) 
      {
          ev.type = SDL_KEYDOWN;
          // Set keystate in here.
          keyStates[kc] = 1;
      }
      else if (strcmp(prefix, "ku") == 0) 
      {
          ev.type = SDL_KEYUP;
          keyStates[kc] = 0;
      }
      else 
      {
        SDL_PrintErr("Should not reach here.\n");
      }

      ev.key.keysym.sym = kc;
      enqueueEvent(&ev);
  }
}

int SDL_PushEvent(SDL_Event *ev) 
{
  TODO("SDL_PushEvent");
  return 0;
}

void SDL_PumpEvents(void) 
{
  pumpKeyboardEvents();
}

// One thing need to notice:
// 
int SDL_PollEvent(SDL_Event *ev) 
{
  SDL_PumpEvents();
  return dequeueEvent(ev);
}

int SDL_WaitEvent(SDL_Event *event) 
{
  while (!SDL_PollEvent(event)) { /* busy-wait */ }
  return 1;
}

int SDL_PeepEvents(SDL_Event *ev, int numevents, int action, uint32_t mask) 
{
  TODO("SDL_PeepEvents");
  return 0;
}

uint8_t* SDL_GetKeyState(int *numkeys) 
{
  pumpKeyboardEvents();

  // Return size of our array
  if (numkeys) 
  {
    *numkeys = KEANAME_COUNT;
  }

  // Caller must NOT free this pointer.
  return keyStates;
}
