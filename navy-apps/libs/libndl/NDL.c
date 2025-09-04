#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/time.h>
#include <fcntl.h>
#include <assert.h>

static int evtdev = -1;
static int fbdev = -1;
static int screen_w = 0, screen_h = 0;
static int canvas_w = 0, canvas_h = 0;
static int canvas_x = 0, canvas_y = 0;


// For keyboard.
static int eventsFd = -1;

// For framebuffer.
static int fbFd = -1;

/* initTick holds the millisecond timestamp taken at NDL_Init() */
static uint32_t initTick = 0;

uint32_t NDL_GetTicks() 
{
  struct timeval tv;
  assert(gettimeofday(&tv, NULL) == 0);

  // NowMs is milliseconds since the Unix epoch.
  const uint32_t nowMs = (uint32_t)(tv.tv_sec * 1000UL + tv.tv_usec / 1000UL);

  // Subtract the base time recorded in initTick.
  return nowMs - initTick;
}

int NDL_PollEvent(char *buf, int len) 
{
  // Open keyborad file.
  if (eventsFd == -1)
  {
    eventsFd = open("/dev/events", 0);
  }

  if (eventsFd < 0)
  {
    assert(0);
    return 0;
  }

  const int readLen = read(eventsFd, buf, len);
  return readLen > 0 ? readLen : 0;
}

void NDL_OpenCanvas(int *w, int *h) 
{
  // Ensure not NULL.
  assert(w && h);

  if (getenv("NWM_APP")) 
  {
    int fbctl = 4;
    fbdev = 5;
    screen_w = *w; screen_h = *h;
    char buf[64];
    int len = sprintf(buf, "%d %d", screen_w, screen_h);
    // let NWM resize the window and create the frame buffer
    (void) write(fbctl, buf, len);

    while (1) {
      // 3 = evtdev
      int nread = read(3, buf, sizeof(buf) - 1);
      if (nread <= 0) continue;
      buf[nread] = '\0';
      if (strcmp(buf, "mmap ok") == 0) break;
    }
    close(fbctl);
  }
  
  const int fd = open("/proc/dispinfo", O_CLOEXEC);
  assert(fd >= 0);

  char buffer[64];

  assert(read(fd, buffer, sizeof(buffer)) >= 0);
  assert(close(fd) == 0);

  // Get Screen Size
  assert(sscanf(buffer, "WIDTH:%d\nHEIGHT:%d\n", &screen_w, &screen_h) == 2);

  // Make sure we check if both zero before assign canvas's size....
  if (*w == 0 && *h == 0) 
  {
    *w = screen_w;
    *h = screen_h;
  }

  canvas_h = *h;
  canvas_w = *w;

  // Ensure canvas size is smaller or equal to screen size.
  assert(canvas_h <= screen_h && canvas_w <= screen_w);

  // Move canvas x and y to middle.
  canvas_x = (screen_w - canvas_w) / 2;
  canvas_y = (screen_h - canvas_h) / 2;

  // Open file, if failed, just exit.
  fbFd = open("/dev/fb", O_CLOEXEC);
  assert(fbFd >= 0);
}

void NDL_DrawRect(uint32_t *pixels, int x, int y, int w, int h) 
{
  assert(fbFd >= 0);

  for (int row = 0; row < h; ++row) 
  {
    const off_t offset = ((off_t)(canvas_y + y + row) * screen_w + (canvas_x + x)) * sizeof(uint32_t);

    // Located
    assert(lseek(fbFd, offset, SEEK_SET) == offset);

    // Write data.
    assert(write(fbFd, pixels + row * w, w * sizeof(uint32_t)) == w * sizeof(uint32_t));
  }
}

void NDL_OpenAudio(int freq, int channels, int samples) 
{
  // // Add these three parameter to nemu...
  // if (!io_read(AM_AUDIO_CONFIG).present) {
  //   printf("WARNING: %s does not support audio\n", TOSTRING(__ARCH__));
  //   return;
  // }

  // io_write(AM_AUDIO_CTRL, 44100, 2, 1024);

}

void NDL_CloseAudio() 
{
  // Do nothing?
}

int NDL_PlayAudio(void *buf, int len) 
{
  return 0;
}

int NDL_QueryAudio() 
{
  return 0;
}

int NDL_Init(uint32_t flags) 
{
  if (getenv("NWM_APP")) {
    evtdev = 3;
  }

  // Record the “zero” point in milliseconds.
  struct timeval tv;
  assert(gettimeofday(&tv, NULL) == 0);
  initTick = (uint32_t)(tv.tv_sec * 1000UL + tv.tv_usec / 1000UL);

  return 0;
}

void NDL_Quit() 
{
  // Close fds.
  if (eventsFd >= 0)
  {
    assert(close(eventsFd) == 0);
  }

  if (fbFd >= 0)
  {
    assert(close(fbFd) == 0);
  }
  
}
