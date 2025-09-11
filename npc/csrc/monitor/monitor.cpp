#include <getopt.h>
#include "common.h"

static char *img_file = NULL;
static char *elf_file = NULL;

void init_img(char *img_file);
int init_runtime();
int run();
void init_log(const char *log_file);
void init_sdb();
void init_reg();
extern "C" void init_disasm(const char *triple);
void sdb_set_batch_mode();
void read_func_info(char *filepath);
void difftest_init_all();
void init_verilator(int argc, char *argv[]);
void init_reg_state();

char * log_file =NULL;

static int parse_args(int argc, char *argv[])
{
  const struct option table[] = {
      {"batch"    , no_argument      , NULL, 'b'},
      {"log"      , required_argument, NULL, 'l'},
      // {"diff"     , required_argument, NULL, 'd'},
      // {"port"     , required_argument, NULL, 'p'},
      {"help"     , no_argument      , NULL, 'h'},
      {"elf-file", required_argument, NULL, 'e'},
      {0, 0, 0, 0},
  };
  int o;
  while ((o = getopt_long(argc, argv, "-bhl:e:", table, NULL)) != -1)
  {
    switch (o)
    {
      case 'b': sdb_set_batch_mode(); break;
      // case 'p': sscanf(optarg, "%d", &difftest_port); break;
      case 'l': log_file = optarg; break;
      // case 'd': diff_so_file = optarg; break;

    case 'e':
      elf_file = optarg;
      break;
    case 1:
      img_file = optarg;
      // printf("%s", img_file);
      return 0;
    default:
      printf("Usage: %s [OPTION...] IMAGE [args]\n\n", argv[0]);
      printf("\t-b,--batch              run with batch mode\n");
      printf("\t-l,--log=FILE           output log to FILE\n");
      // printf("\t-d,--diff=REF_SO        run DiffTest with reference REF_SO\n");
      // printf("\t-p,--port=PORT          run DiffTest with port PORT\n");
      printf("\t-e,--elf-file=FILE      input Elf File\n");
      printf("\n");
      exit(0);
    }
  }
  return 0;
}
void welcome(){
    // printf("Welcome To YPC(Yuki Processor Core)!\n");
    Log("Welcome To YDB(Yuki Debugger)!");
    IFDEF(CONFIG_WAVE_FORM,
          Warn("Waveform Enabled!May result in a very large file!"));
}

void init_monitor(int argc, char *argv[]){
    // printf("\n");
    init_verilator(argc, argv);
    parse_args(argc, argv);
    init_log(log_file);//OKEY????
    init_sdb();
    init_reg();
    init_img(img_file);
    init_runtime();
    init_reg_state();

    // 初始化反汇编
    init_disasm((MUXDEF(CONFIG_RV64, "riscv64","riscv32")"-pc-linux-gnu"));
    IFDEF(CONFIG_FTRACE,read_func_info(elf_file););
    IFDEF(CONFIG_DIFFTEST,difftest_init_all(););
    welcome();
    // run();
}