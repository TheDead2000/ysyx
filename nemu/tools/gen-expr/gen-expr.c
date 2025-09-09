#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#include <string.h>

typedef uint32_t word_t;

// this should be enough
static char buf[65536] = {};
static char code_buf[65536 + 128] = {}; // a little larger than `buf`
static char *code_format =
"#include <stdio.h>\n"
"int main() { "
"  signed result = %s; "
"  printf(\"%%d\", result); "
"  return 0; "
"}";

typedef enum
{
    ADD,
    SUB,
    MUL,
    DIV,
} Operator;

Operator generate_operator()
{
    return rand() % 4;
}

char *generate_operand()
{
    char *number = malloc(sizeof(char) * 4);
    sprintf(number, "%d", rand() % 100);
    return number;
}

void generate_expression(char *expression, int depth)
{
    if (depth == 0)
    {
        sprintf(expression, "%s", generate_operand());
    }
    else
    {
        Operator op = generate_operator();
        char left_expression[100], right_expression[100];
        generate_expression(left_expression, depth - 1);
        generate_expression(right_expression, depth - 1);

        switch (op)
        {
        case ADD:
            sprintf(expression, "(%s + %s)", left_expression, right_expression);
            break;
        case SUB:
            sprintf(expression, "(%s - %s)", left_expression, right_expression);
            break;
        case MUL:
            sprintf(expression, "(%s * %s)", left_expression, right_expression);
            break;
        case DIV:
            if (strcmp(right_expression, "0") == 0) // 避免除零
            {
                sprintf(expression, "%s", left_expression); // 如果右表达式是0，则使用左表达式替代
            }
            else
            {
                sprintf(expression, "(%s / %s)", left_expression, right_expression);
            }
            break;
        }
    }
}

// // 检查表达式中的除零行为
// static int check_division_by_zero() {
//   char *p = buf;
//   while (*p) {
//     if (*p == '/' && *(p + 1) == '0') {
//       return 1; // 表达式中存在除零行为
//     }
//     p++;
//   }
//   return 0; // 表达式中不存在除零行为
// }

int main(int argc, char *argv[]) {
  int seed = time(0);
  srand(seed);
  int loop = 1;
  if (argc > 1) {
    sscanf(argv[1], "%d", &loop);//如果命令行参数中指定了循环次数，则将其读取并存储到 loop 变量中。
  }

  FILE *output_fp = fopen("./results.txt", "w"); // 打开结果文件
  assert(output_fp != NULL);

  int i;
  for (i = 0; i < loop; i ++) 
  {
      memset(buf, '\0', sizeof(buf)); // 每次循环前清空缓冲区
      generate_expression(buf, 4);

      sprintf(code_buf, code_format, buf); // 使用生成的随机表达式按照之前format格式填充 code_buf 缓冲区

      FILE *fp = fopen("/tmp/.code.c", "w");
      assert(fp != NULL);
      fputs(code_buf, fp);
      fclose(fp);

      int ret = system("gcc -Werror /tmp/.code.c -o /tmp/.expr");
      if (ret != 0) continue;

      fp = popen("/tmp/.expr", "r");
      assert(fp != NULL);

      int result;
      ret = fscanf(fp, "%d", &result);
      pclose(fp);

      printf("%d %s\n", result, buf); // 使用 %d 格式说明符打印有符号整数
            // 将结果和表达式写入文件
      fprintf(output_fp, "%d %s\n", result, buf);
  }
  fclose(output_fp); // 关闭结果文件
  return 0;
}
