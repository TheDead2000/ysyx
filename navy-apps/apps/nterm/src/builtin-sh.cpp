#include <nterm.h>
#include <stdarg.h>
#include <unistd.h>
#include <SDL.h>
#define NR_CMD 10

static int cmd_execve(int idx, char *args);
static int cmd_help(int idx, char *args);
static struct {
  const char *name;
  const char *description;
  int (*handle)(int, char *);
} cmd_table [] = {
  {"nterm", "a simulated terminal", cmd_execve}, 
  {"bmp-test", "a small test program", cmd_execve},
  {"hello", "a small test program", cmd_execve},
  {"timer-test", "a small test program", cmd_execve},
  {"nslider","The simplest displayable application in Navy", cmd_execve},
  {"file-test", "a small test program", cmd_execve},
  {"event-test", "a small test program", cmd_execve},
  {"dummy", "a small test program", cmd_execve},
  {"menu", "Display an application menu", cmd_execve},
  {"help", "Shows the commands that nterm can execute", cmd_help},
};

char handle_key(SDL_Event *ev);

static void sh_printf(const char *format, ...) {
  static char buf[256] = {};
  va_list ap;
  va_start(ap, format);
  int len = vsnprintf(buf, 256, format, ap);
  va_end(ap);
  term->write(buf, len);
}

static void sh_banner() {
  sh_printf("Built-in Shell in NTerm (NJU Terminal)\n\n");
}

static void sh_prompt() {
  sh_printf("sh> ");
}

static void sh_handle_cmd(const char *str) {
  char *clstr = (char *)str;
  if (clstr[strlen(clstr) - 1] == '\n') clstr[strlen(clstr) - 1] = '\0';
  char *str_end = clstr + strlen(clstr);
  char *cmd = strtok(clstr, " ");
  if (cmd == NULL) return;
 
  char *args = cmd + strlen(cmd) + 1;
  if (args >= str_end) args = NULL;
  int i;
 
  for (i = 0; i < NR_CMD; i++){
    if (strcmp(cmd, cmd_table[i].name) == 0){
      if (cmd_table[i].handle(i, args) < 0) return ;
      break;
    }
  }
  if (i == NR_CMD) sh_printf("Unknown command '%s'\n", cmd);
}

static int cmd_execve(int idx, char *args){
  setenv("PATH", "/bin", 0);
  if (execvp(cmd_table[idx].name,(char * const *)args) == -1) return -1;
  return 0;
}
 
static int cmd_help(int idx, char *args){
  char *arg = strtok(NULL, " ");
  int i;
 
  if (arg == NULL) {
    /* no argument given */
    for (i = 0; i < NR_CMD; i++)
      sh_printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
  }
  else {
    for (i = 0; i < NR_CMD; i++) {
      if (strcmp(arg, cmd_table[i].name) == 0) {
        sh_printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
        return 0;
      }
    }
    sh_printf("Unknown command '%s'\n", arg);
  }
  return 0;
}


void builtin_sh_run() {
  sh_banner();
  sh_prompt();

  while (1) {
    SDL_Event ev;
    if (SDL_PollEvent(&ev)) {
      if (ev.type == SDL_KEYUP || ev.type == SDL_KEYDOWN) {
        const char *res = term->keypress(handle_key(&ev));
        if (res) {
          sh_handle_cmd(res);
          sh_prompt();
        }
      }
    }
    refresh_terminal();
  }
}
