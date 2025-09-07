#ifndef __FS_H__
#define __FS_H__

#include <common.h>

#ifndef SEEK_SET
enum {SEEK_SET, SEEK_CUR, SEEK_END};
#endif

// set a lock to prevent error?
int fs_open(const char *pathname, int flags, int mode); // return the index,
                                                        //  set the open_offset->0
size_t fs_read(int fd, void *buf, size_t len);          // fd=index
                                                        //  data->buf; if hit end,ret
size_t fs_write(int fd, const void *buf, size_t len);   // like read;
size_t fs_lseek(int fd, size_t offset, int whence);     // just change open_offset;
                                                        // wherence -> SEEK_SET....
int fs_close(int fd);                                   // do nothing?

typedef size_t (*ReadFn)(void *buf, size_t offset, size_t len);
typedef size_t (*WriteFn)(const void *buf, size_t offset, size_t len);

typedef struct {
  char *name;
  size_t size;
  size_t disk_offset;
  ReadFn read;
  WriteFn write;
  size_t open_offset;
} Finfo;
enum { FD_STDIN, FD_STDOUT, FD_STDERR, FD_EVENTS, FD_FB, FD_DISPINFO };

#endif
