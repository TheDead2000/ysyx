#ifndef __DEBUG_H__
#define __DEBUG_H__

// #include "common.h"
#include "utils.h"
#include <stdio.h>

#define Log(format, ...)                                                       \
  _Log(ANSI_FMT("[%s:%d %s] " format, ANSI_FG_BLUE) "\n", __FILE__, __LINE__,  \
       __func__, ##__VA_ARGS__)
// 自定义颜色
#define PINFO_RESTORE "\33[0m"
#define Info_N(fmt, ...) _Log(ANSI_FG_WHITE fmt PINFO_RESTORE "\n", ##__VA_ARGS__)

#define Info_R(fmt, ...) _Log(ANSI_FG_MAGENTA fmt PINFO_RESTORE "\n", ##__VA_ARGS__)

#define Warn(fmt, ...) _Log(ANSI_FG_RED fmt PINFO_RESTORE "\n", ##__VA_ARGS__)

#define Assert(cond, format, ...)                                              \
  do {                                                                         \
    if (!(cond)) {                                                             \
      MUXDEF(                                                                  \
          CONFIG_TARGET_AM,                                                    \
          printf(ANSI_FMT(format, ANSI_FG_RED) "\n", ##__VA_ARGS__),           \
          (fflush(stdout), fprintf(stderr, ANSI_FMT(format, ANSI_FG_RED) "\n", \
                                   ##__VA_ARGS__)));                           \
      IFNDEF(CONFIG_TARGET_AM, extern FILE *log_fp; fflush(log_fp));           \
      extern void assert_fail_msg();                                           \
      assert_fail_msg();                                                       \
      assert(cond);                                                            \
    }                                                                          \
  } while (0)

#define panic(format, ...) Assert(0, format, ##__VA_ARGS__)

#define TODO() panic("please implement me")

#endif
