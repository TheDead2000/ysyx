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
//expr.c 解析表达式
#include "isa.h"
#include "common.h"

/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>

#include<string.h>

// #include<stdio.h>
//func declared by myself
long eval(int p,int q);
int get_main_op(int p,int q);
bool check_parentheses(int p,int q);
// word_t mem_read(paddr_t addr);

enum {
  TK_NOTYPE = 256, TK_EQ,
  TK_NUM,TK_HEX,TK_REG,TK_NOTEQ,TK_AND,TK_DEREFENCE

};

static struct rule {
  const char *regex;
  int token_type;
} rules[] = {

    {"0x[0-9,a-f,A-F]+", TK_HEX}, // hex
    {"[0-9]+", TK_NUM},
    {" +", TK_NOTYPE},   // spaces
    {"\\$\\w+", TK_REG}, // reg
    {"\\(", '('},
    {"\\)", ')'},
    {"\\+", '+'}, // +
    {"-", '-'},
    {"\\*", '*'},
    {"/", '/'},
    {"==", TK_EQ},    // ==
    {"!=", TK_NOTEQ}, // !=
    {"&&", TK_AND},   // &&
    {">", '>'},   
    {"<", '<'}
    //指针解引用放在乘法一起处理
};

#define NR_REGEX ARRLEN(rules)

static regex_t re[NR_REGEX] = {};

/* Rules are used for many times.
 * Therefore we compile them only once before any usage.
 */
void init_regex() {
  int i;
  char error_msg[128];
  int ret;

  for (i = 0; i < NR_REGEX; i ++) {
    ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED);
    if (ret != 0) {
      regerror(ret, &re[i], error_msg, 128);
      panic("regex compilation failed: %s\n%s", error_msg, rules[i].regex);
    }
  }
}

typedef struct token {
  int type;
  char str[32];
} Token;
//__attribute__((used)) 是一个 GCC 编译器的扩展属性，表示这个变量即使在代码中没有显式使用，也不应被编译器优化掉。
//tokens数组，存放处理好的Tokens
static Token tokens[32] __attribute__((used)) = {};
static int nr_token __attribute__((used))  = 0;

static bool make_token(char *e)
{
  int position = 0;
  int i;
  regmatch_t pmatch;

  nr_token = 0;

  while (e[position] != '\0')
  {
    /* Try all rules one by one. */
    for (i = 0; i < NR_REGEX; i++)
    {
      if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0)
      {
        char *substr_start = e + position;
        int substr_len = pmatch.rm_eo;

        // Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
        //     i, rules[i].regex, position, substr_len, substr_len, substr_start);

        position += substr_len;

        /* Now a new token is recognized with rules[i]. Add codes
         * to record the token in the array `tokens'. For certain types
         * of tokens, some extra actions should be performed.
         */

        switch (rules[i].token_type)
        {
        case TK_NUM:
          if (substr_len >= 32) // 溢出！
            assert(0);
          tokens[nr_token].type = rules[i].token_type;
          strncpy(tokens[nr_token].str, substr_start, substr_len);
          (tokens[nr_token].str)[substr_len] = '\0';
          nr_token++;
          break;
        case TK_NOTYPE:
          break;
        case TK_HEX:
        if (substr_len >= 32) // 溢出！
            assert(0);
          tokens[nr_token].type = rules[i].token_type;
          strncpy(tokens[nr_token].str, substr_start, substr_len);
          (tokens[nr_token].str)[substr_len] = '\0';
          nr_token++;
            break;
        case '*': // 单独处理乘法和解引用
          if (tokens[nr_token - 1].type == TK_NUM || tokens[nr_token - 1].type == ')')
          { // 当成乘法
            tokens[nr_token++].type = '*';
          }
          else
          {
            tokens[nr_token++].type = TK_DEREFENCE;
          }
          break;
        case TK_REG:
          tokens[nr_token].type = TK_REG;
          strncpy(tokens[nr_token].str,substr_start,substr_len);
          (tokens[nr_token].str)[substr_len] = '\0';
          nr_token++;
          break;
        default:
          tokens[nr_token++].type = rules[i].token_type;
        }

        break;
      }
    }

    if (i == NR_REGEX)
    {
      printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
      return false;
    }
  }

  return true;
}

//返回值word_t!

word_t expr(char *e, bool *success) {
  if (!make_token(e)) {
    *success = false;
    return 0;
  }

  /* : Insert codes to evaluate the expression. */
  word_t result=eval(0,nr_token-1);
  *success = true;
  return result;
}

long eval(int p,int q) {
  if (p > q) {
    /* Bad expression */
    assert(0);
  }
  else if (p == q) {
    /* Single token.
     * For now this token should be a number.
     * Return the value of the number.
     */
    if(tokens[p].type==TK_REG){
      bool success=false;
      word_t result=isa_reg_str2val(tokens[p].str,&success);
      if(success){
        return result;
      }else{
        assert(0);
      }
    }
    if(tokens[p].type==TK_HEX){
      long val;
      sscanf(tokens[p].str,"%lx",&val);
      return val;
    }
    if(tokens[p].type!=TK_NUM)
      assert(0);
    long val;
    //TODO:溢出怎么办？
    sscanf(tokens[p].str,"%lu",&val);
    return val;
  }
  else if (check_parentheses(p, q) == true) {
    /* The expression is surrounded by a matched pair of parentheses.
     * If that is the case, just throw away the parentheses.
     */
    return eval(p + 1, q - 1);
  }
  else {
    //先计算主运算符
    int op=get_main_op(p,q);
    int op_type = tokens[op].type;
    long val1 =0;
    if(op_type!=TK_DEREFENCE)
      val1= eval(p, op - 1);
    long val2 = eval(op + 1, q);

    switch (op_type) {
      case '+': return val1 + val2;
      case '-': return val1-val2;
      case '*': return val1*val2;
      case '/': return val1/val2;
      case '>': return val1>val2;
      case '<': return val1<val2;
      case TK_EQ :return val1==val2;
      case TK_NOTEQ :return val1!=val2;
      case TK_AND: return val1&&val2;
      case TK_DEREFENCE: return mem_read(val2);
      // case 
      default: assert(0);
    }
  }
}

int get_main_op(int p,int q){
  //逐个扫描(+ -)>(* /)
  //遇到括号要处理
  int pos=-1;
  char stack[32];
  int top=0;
  int priority=-1;//运算符优先级,参考 https://en.cppreference.com/w/c/language/operator_precedence
  while(p<=q){
    switch(tokens[p].type){
      case TK_DEREFENCE:
        if(top==0&&priority<2){
          pos=p;
          priority=2;
        }
      break;
      case '+':
      case '-':
      if(top==0&&priority<=4){
          pos=p;
          priority=4;
      }
      break;
      case '*':
      case '/':
        // if(top==0&&(pos==-1||!(tokens[pos].type=='+'||tokens[pos].type=='-'))){
        if(top==0&&priority<=3){
          pos=p;
          priority=3;
        }
      break;
      case '<':
      case '>':
        if(top==0&&priority<6){
          pos=p;
          priority=6;
        }
      break;
      case TK_EQ:
      case TK_NOTEQ:
        if(top==0&&priority<7){
          pos=p;
          priority=7;
        }
      break;
      case TK_AND:
        if(top==0&&priority<11){
          pos=p;
          priority=11;
        }
      break;
      case '(':
        stack[top++]='(';
      break;
      case ')':
        if(stack[top-1]=='(')
          top--;
        else
          assert(0);//括号不匹配！
      break;
      // default:
    }
  p++;
  }
  return pos;
}

bool check_parentheses(int p,int q){
  if(tokens[p].type=='('){
  // char stack1[32]={};
  int top=0;
  while(p<q){
    if(tokens[p].type=='('){
      // stack1[top++]='(';
      top++;
    }
    if(tokens[p].type==')'){
      top--;
    }
    if(top==0)
      return false;
    p++;
  }
  return true;
}
return false;
}