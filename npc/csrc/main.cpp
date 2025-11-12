
void sdb_mainloop();

void init_monitor(int argc, char *argv[]);

int is_exit_status_bad();

void statistic();

void print_perf_statistics();

int main(int argc, char **argv)
{
  init_monitor(argc, argv);
  sdb_mainloop();
  statistic();
  print_perf_statistics();
  return is_exit_status_bad();
}
