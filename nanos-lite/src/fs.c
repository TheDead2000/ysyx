#include <fs.h>

typedef size_t (*ReadFn) (void *buf, size_t offset, size_t len);
typedef size_t (*WriteFn) (const void *buf, size_t offset, size_t len);

// ramdisk.c
size_t ramdisk_read(void *buf, size_t offset, size_t len);
size_t ramdisk_write(const void *buf, size_t offset, size_t len);

// device.c
size_t serial_write(const void *buf, size_t offset, size_t len);
size_t events_read(void *buf, size_t offset, size_t len);
size_t dispinfo_read(void *buf, size_t offset, size_t len);
size_t fb_write(const void *buf, size_t offset, size_t len); 
size_t sb_write(const void *buf, size_t offset, size_t len);
size_t sbctl_write(const void *buf, size_t offset, size_t len);
size_t sbctl_read(void *buf, size_t offset, size_t len);


typedef struct {
  char *name;
  size_t size;
  size_t disk_offset;
  ReadFn read;
  WriteFn write;
} Finfo;

enum {
  FD_STDIN, 
  FD_STDOUT, 
  FD_STDERR, 
  FD_FB, 
  FD_EVENTS, 
  FD_DISPINFO, 
  FD_SB,
  FD_SBCTL
};

size_t invalid_read(void *buf, size_t offset, size_t len) {
  panic("should not reach here");
  return 0;
}

size_t invalid_write(const void *buf, size_t offset, size_t len) {
  panic("should not reach here");
  return 0;
}

/* This is the information about all files in disk. */
static Finfo FILE_TABLE[] __attribute__((used)) = {
  [FD_STDIN]  = {"stdin", 0, 0, invalid_read, invalid_write},
  [FD_STDOUT] = {"stdout", 0, 0, invalid_read, serial_write},
  [FD_STDERR] = {"stderr", 0, 0, invalid_read, serial_write},
  [FD_FB] = {"/dev/fb", 0, 0, invalid_read, fb_write},
  [FD_EVENTS] = {"/dev/events", 0, 0, events_read, invalid_write},
  [FD_DISPINFO] = {"/proc/dispinfo", 0, 0, dispinfo_read, invalid_write},
  [FD_SB] = {"/dev/sb", 0, 0, invalid_read, sb_write},
  [FD_SBCTL] = {"/dev/sbctl", 0, 0, sbctl_read, sbctl_write},

#include "files.h"
};

// Number of entries in file_table
enum { NR_FILES = sizeof(FILE_TABLE) / sizeof(FILE_TABLE[0]) };

// Array to track the current offset for each open file
static size_t openOffset[NR_FILES] = {0};  // Initialized to 0 automatically

void init_fs() 
{
  // Initialise the size of /dev/fb
  const AM_GPU_CONFIG_T gpuConfig = io_read(AM_GPU_CONFIG);
  // Must present
  assert(gpuConfig.present);

  // Set file size.
  const int vmemsz = gpuConfig.vmemsz;
  FILE_TABLE[FD_FB].size = (size_t)vmemsz;
}

// Open a file by pathname, return file descriptor (index in file_table)
int fs_open(const char *pathname, int flags, int mode) 
{
  // Search for the file in the file table
  for (int i = 0; i < NR_FILES; i++) 
  {
    if (strcmp(pathname, FILE_TABLE[i].name) == 0) 
    {
      // Reset offset and return descriptor
      openOffset[i] = 0;
      return i;
    }
  }

  // File not found: abort
  Log("fs_open: Invalid pathname: %s\n", pathname);
  assert(0);
  return -1;
}

// Read up to len bytes from file descriptor into buf
size_t fs_read(int fd, void *buf, size_t len) 
{
  assert(fd >= 0 && fd < NR_FILES);

  Finfo *f = &FILE_TABLE[fd];

  // Calculate available bytes
  const size_t offset = openOffset[fd];

  // If read is not supported, return 0 (e.g., stdin not implemented)
  if (f->read != NULL) 
  {
    return f->read(buf, offset, len);
  }

  // if we've already reached or passed the end, bail out
  if (offset >= f->size) 
  {
    return 0;
  }

  // compute how many bytes we can actually read
  const size_t avail = f->size - offset;
  const size_t rlen  = (len < avail ? len : avail);

  // perform the read
  size_t ret = ramdisk_read(buf, f->disk_offset + offset, rlen);
  openOffset[fd] += ret;
  return ret;
}

// Write up to len bytes from buf to file descriptor
size_t fs_write(int fd, const void *buf, size_t len) 
{
  assert(fd >= 0 && fd < NR_FILES);
  Finfo *f = &FILE_TABLE[fd];

  // If handle existed.
  if (f->write != NULL) 
  {
    return f->write(buf, openOffset[fd], len);
  }

  // Calculate available space
  size_t offset = openOffset[fd];
  assert(offset <= f->size);

  const size_t avail = f->size - offset;
  const size_t wlen = len < avail ? len : avail;

  // Perform write and advance offset
  size_t ret = ramdisk_write(buf, f->disk_offset + offset, wlen);
  openOffset[fd] += ret;
  return ret;
}

// Adjust the file offset based on whence (SEEK_SET, SEEK_CUR, SEEK_END)
size_t fs_lseek(int fd, size_t offset, int whence) 
{
  assert(fd >= 0 && fd < NR_FILES);

  Finfo *f = &FILE_TABLE[fd];
  size_t newOffset = -1;

  switch (whence) {
    case SEEK_SET: {
      newOffset = offset;
      break;
    }
    case SEEK_CUR: {
      newOffset = openOffset[fd] + offset;
      break;
    }
    case SEEK_END: {
      newOffset = f->size + offset;
      break;
    }
    default: {
      panic("fs_lseek: invalid whence");
      return (size_t)-1;
    }
  }

  // Ensure the new offset is within bounds
  // assert(newOffset <= f->size);

  openOffset[fd] = newOffset;
  return newOffset;
}

// Close a file descriptor (no-op for this simple FS)
int fs_close(int fd) 
{
  return 0;
}
