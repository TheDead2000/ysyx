/***************************************************************************************
 * Copyright (c) 2014-2022 Zihao Yu, Nanjing University
 *
 * NEMU is licensed under Mulan PSL v2.
 * You can use this software according to the terms and conditions of the Mulan
 *PSL v2. You may obtain a copy of Mulan PSL v2 at:
 *          http://license.coscl.org.cn/MulanPSL2
 *
 * THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY
 *KIND, EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO
 *NON-INFRINGEMENT, MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
 *
 * See the Mulan PSL v2 for more details.
 ***************************************************************************************/
// sdb.c-主要处理与用户的交互

// #include <cpu/cpu.h>
#include "common.h"
#include "sdb.h"
#include <readline/history.h>
#include <readline/readline.h>
// #include <memory/host.h>
word_t expr(char *e, bool *success);
word_t mem_read(paddr_t addr);
int update_reg_state();
int set_break_point(char *name);
static int is_batch_mode = false;

void init_regex();
void init_wp_pool();
void print_iringbuf();

/* We use the `readline' library to provide more flexibility to read from
   stdin. */
static char *rl_gets() {
  static char *line_read = NULL;

  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(YDB) ");

  if (line_read && *line_read) {
    add_history(line_read);
  }

  return line_read;
}

static int cmd_c(char *args) {
  // nemu_state=NEMU_RUNNING;
  run(-1);
  return 0;
}

static int cmd_q(char *args) {
  nemu_state.state = NEMU_QUIT;
  return 0;
}
// my_func start!
static int cmd_step(char *args) {
  int time = 1;
  if (args)
    sscanf(args, "%d", &time);
  run(time);
  // printf("cmd_step :%d",time);
  return 0;
}
static int cmd_print_status(char *args) {
  char op;
  if (!args) {
    printf("Please enter a operation(w/r/i/f)!\n");
    return 0;
  }
  if (sscanf(args, "%c", &op) != 1) {
    printf("Format Error: Expected:: info SUBCMD\n");
    return 0;
  };
  switch (op) {
  case 'r':
    isa_reg_display();
    break;
  case 'w':
    print_watch_points();
    break;
  case 'i':
#ifdef CONFIG_IRINGBUF
    print_iringbuf();
#else
printf("IringBuf Not Enabled");
#endif
    break;
  case 'f':
    Assert(0,"function status not Implemented");
    break;
  default:
    printf("Please enter a operation(w/r/i/f)!\n");
    return 0;
  }
  // printf("cmd_print_status :%s",args);
  return 0;
}
static int cmd_scan_mem(char *args) {
  if (!args) {
    printf("Format Error: Expected:: x N EXPR\n");
    return 0;
  }
  int n;
  paddr_t addr;
  //要分成time exp
  if (sscanf(args, "%d", &n) != 1) {
    printf("Format Error: Expected:: x N EXPR\n");
    return 0;
  }
  char *expression = args;
  while (*expression != '\0' && *expression != ' ') {
    expression++;
  }
  bool success = false;
  addr = expr(expression, &success);
  if (!success) {
    printf("Format Error: Expected:: x N EXPR\n");
    return 0;
  }
  for (; n > 0; n--) {
//这个似乎有问题！！
// 进制问题（^-^）
// printf("readMem %lu %lu %lu %lu"
// ,mem_read(addr,1),mem_read(addr+1,1),mem_read(addr+2,1),mem_read(addr+3,1));
#ifdef RV64
    printf("<0x%010x>    0x%08lx\n", addr, mem_read(addr));
#else
    printf("<0x%010x>    0x%08x\n", addr, mem_read(addr));
#endif
    addr += 4;
  }
  // printf("cmd_scan_mem :%s",args);
  return 0;
}
static int test_pr() {
  FILE *fp = fopen("/ysyx-workbench/nemu/tools/gen-expr/build/input", "r");
  int result;
  char *exp = (char *)malloc(700 * sizeof(char));
  int time = 0;
  while (fscanf(fp, "%d %s\n", &result, exp) != -1) {
    // printf("%s\n",exp);
    bool ok = true;
    int res = (int)expr(exp, &ok);
    if (ok && result != res) {
      printf("fail! %d/%d %s\n", res, result, exp);
      assert(0);
    } else
      printf("OK:%d\n", time++);
  }
  return 0;
}
static int cmd_eval(char *args) {
  if (!args) {
    printf("Error: Empty Expression!\n");
    return 0;
  }
  bool success;
  word_t result = expr(args, &success);

  if (success) {
    // printf("cmd_eval :%s, result=%d\n",args,(int)result);
    printf("Dec: %ld \t Hex: 0x%lx\n", (long)result, (long)result);
  } else {
    printf("Error\n");
  }
  return 0;
}
static int cmd_watch(char *args) {
  if (!args) {
    printf("Error: Empty Expression!\n");
    return 0;
  }
  bool succ = false;
  word_t result = expr(args, &succ);
  if (!succ) {
    printf("Error Occured When Exec Expression!\n");
    return 0;
  }
  WP *wp = new_wp();
  strncpy(wp->expr, args, 500); //复制表达式
  wp->last_result = succ ? result : 0;
  printf("Added watch_point :%s\n", args);
  return 0;
}
static int cmd_del_watch(char *args) {
  if (!args) {
    printf("Error: Empty Expression!\n");
    return 0;
  }
  // args=N
  //  printf("cmd_del_watch :%s",args);
  int N = -1;
  if (sscanf(args, "%d", &N) != 1) {
    printf("Format Error: Expected:: d N\n");
    return 0;
  };
  if (del_watch_point(N)) {
    printf("Success!\n");
  } else {
    printf("Error!\n");
  }
  return 0;
}
// my_func end!

static int cmd_help(char *args);

static struct {
  const char *name;
  const char *description;
  int (*handler)(char *);
} cmd_table[] = {
    {"help", "Display information about all supported commands", cmd_help},
    {"c", "Continue the execution of the program", cmd_c},
    {"q", "Exit NEMU", cmd_q},
    {"si", "Single-step execution", cmd_step},
    {"info", "Print the status of the program.(reg,watchpoint..etc)",
     cmd_print_status},
    {"x", "Scan mem", cmd_scan_mem},
    {"p", "Eval expression", cmd_eval},
    {"w", "Set WatchPoint", cmd_watch},
    {"d", "Delete WatchPoint", cmd_del_watch},
    {"t", "t", (int (*)(char *))test_pr},
    {"u", "Update Reg state.", (int (*)(char *))update_reg_state},
    {"b", "Set break point", (int (*)(char *))set_break_point},
    /*  Add more commands */

};

#define NR_CMD ARRLEN(cmd_table)

static int cmd_help(char *args) {
  /* extract the first argument */
  char *arg = strtok(NULL, " ");
  int i;

  if (arg == NULL) {
    /* no argument given */
    for (i = 0; i < NR_CMD; i++) {
      printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
    }
  } else {
    for (i = 0; i < NR_CMD; i++) {
      if (strcmp(arg, cmd_table[i].name) == 0) {
        printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
        return 0;
      }
    }
    printf("Unknown command '%s'\n", arg);
  }
  return 0;
}

void sdb_set_batch_mode() { is_batch_mode = true; }

void sdb_mainloop() {
  //如果是batch_mode,直接执行结束后返回
  if (is_batch_mode) {
    cmd_c(NULL);
    if (nemu_state.state == NEMU_END)
      return;
  }

  for (char *str; (str = rl_gets()) != NULL;) {
    char *str_end = str + strlen(str);

    /* extract the first token as the command */
    char *cmd = strtok(str, " ");
    if (cmd == NULL) {
      continue;
    }

    /* treat the remaining string as the arguments,
     * which may need further parsing
     */
    char *args = cmd + strlen(cmd) + 1;
    if (args >= str_end) {
      args = NULL;
    }

#ifdef CONFIG_DEVICE
    extern void sdl_clear_event_queue();
    sdl_clear_event_queue();
#endif

    int i;
    for (i = 0; i < NR_CMD; i++) {
      if (strcmp(cmd, cmd_table[i].name) == 0) {
        if (cmd_table[i].handler(args) < 0) {
          return;
        }
        if (nemu_state.state == NEMU_QUIT)
          return;
        break;
      }
    }

    if (i == NR_CMD) {
      printf("Unknown command '%s'\n", cmd);
    }
  }
}

void init_sdb() {
  /* Compile the regular expressions. */
  init_regex();

  /* Initialize the watchpoint pool. */
  init_wp_pool();
}
