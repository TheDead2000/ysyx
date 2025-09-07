/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#include <string.h>
#include<stdbool.h>
// this should be enough
static char buf[65536] = {};
static char code_buf[65536 + 128] = {}; // a little larger than `buf`
static char *code_format =
"#include <stdio.h>\n"
"int main() { "
"  unsigned result = %s; "
"  printf(\"%%u\", result); "
"  return 0; "
"}";
static int end=0;
static int step=0;
static int choose(int limit){
  return rand()%limit;
}
static void gen_num(){
  char* put=buf+end;
  // char buf[50];
  int rand_num=rand()%100;
  sprintf(put,"%d",rand_num);
  while(buf[end]!='\0')
  end++;

}
static void gen(char val){
  buf[end++]=val;
  buf[end]='\0';
}
static void gen_rand_op()
{
  switch (choose(4))
  {
  case 0:
    gen('+');
    break;
  case 1:
    gen('-');
    break;
  case 2:
    gen('*');
    break;
  default:
    gen('/');
    break;
  }
}
static bool ok(){
  if(end==0)
    return true;
  if(end>0&&(buf[end-1]=='+'||buf[end-1]=='-'||buf[end-1]=='*'||buf[end-1]=='/'||buf[end-1]=='('))
    return true;
  else
    return false;
}
static void gen_rand_expr()
{
  if(end>=50000)
    return;
  // buf[0] = '\0';
  int choo=choose(3);
  if(++step>10)
    choo=0;
  switch (choo)
  // switch (1)
  {
  case 0:
    if(!ok())
      gen_rand_op();
    gen_num();
    break;
  case 1:
    if(!ok())
      gen_rand_op();
    gen('(');
    gen_rand_expr();
    gen(')');
    break;
  default:
    gen_rand_expr();
    gen_rand_op();
    gen_rand_expr();
    break;
  }
}

int main(int argc, char *argv[]) {
  int seed = time(0);
  srand(seed);
  int loop = 1;
  if (argc > 1) {
    sscanf(argv[1], "%d", &loop);
  }
  int i;
  for (i = 0; i < loop; i ++) {
    end=0;
    step=0;
    gen_rand_expr();

    sprintf(code_buf, code_format, buf);

    FILE *fp = fopen("/tmp/.code.c", "w");
    assert(fp != NULL);
    fputs(code_buf, fp);
    fclose(fp);

    int ret = system("gcc -Werror /tmp/.code.c -o /tmp/.expr");
    if (ret != 0) {
      // printf("continue!");
      continue;
    }

    fp = popen("/tmp/.expr", "r");
    assert(fp != NULL);

    int result;
    ret = fscanf(fp, "%d", &result);
    pclose(fp);

    printf("%u %s\n", result, buf);
  }
  return 0;
}
