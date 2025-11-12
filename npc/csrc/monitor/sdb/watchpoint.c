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

#include "sdb.h"
#include "common.h"

#define NR_WP 32

//WatchPoint.c-管理监视点的数据池



static WP wp_pool[NR_WP] = {};
static WP *head = NULL, *free_ = NULL;
//head用于组织使用中的监视点结构, free_用于组织空闲的监视点结构

void init_wp_pool() {
  int i;
  for (i = 0; i < NR_WP; i ++) {
    wp_pool[i].NO = i;
    wp_pool[i].next = (i == NR_WP - 1 ? NULL : &wp_pool[i + 1]);
  }

  head = NULL;
  free_ = wp_pool;
}



WP* new_wp(){
  if(free_==NULL)
    assert(0);//没有空闲了
  WP* op=free_;
  free_=(*free_).next;
  op->next=NULL;
  //放进队列
  op->next=head;
  head=op;
  return op;
}
void free_wp(WP *wp){
  WP* Head=(WP *)malloc(sizeof(WP));
  Head->next=head;
  for(WP *cur=Head;cur!=NULL;cur=cur->next){
    if(cur->next==wp){
      cur->next=wp->next;
      wp->next=free_;
      free_=wp;
      head=Head->next;
      return;
    }
  }
  assert(0);//没找到
}

void print_watch_points(){
  // printf("No\tLast_val\tExpression\n");
  printf("%-3s\t%-10s  \t%-10s\n","No","Last_val","Expression");

  for(WP* cur=head;cur!=NULL;cur=cur->next){
    MUXDEF(CONFIG_RV64,printf("%-3d\t0x%-10lx\t%-10s\n",cur->NO,cur->last_result,cur->expr);,printf("%-3d\t0x%-10x\t%-10s\n",cur->NO,cur->last_result,cur->expr);)

  }
}
bool check_watch_point(){
  bool changed=false;
  for(WP* cur=head;cur!=NULL;cur=cur->next){
    bool succ=false;
    word_t result=expr(cur->expr,&succ);
    if(unlikely(!succ)){
      changed=true;
      printf("Failed to execute expression: %s\n",cur->expr);
    }
    if(unlikely(succ&&result!=cur->last_result)){
      printf("Hit WatchPoint:%d %s \n", cur->NO, cur->expr);
      printf("%s", cur->comment);

      MUXDEF(CONFIG_RV64, printf("Old value = 0x%lx (%lu)\n",cur->last_result,cur->last_result);, printf("Old value = 0x%x (%u)\n",cur->last_result,cur->last_result););

      MUXDEF(CONFIG_RV64, printf("New value = 0x%lx (%lu)\n",result,result);, printf("New value = 0x%x (%u)\n",result,result););
     
      cur->last_result=result;
      changed=true;
    }
  }
  return changed;
}
//按照节点号删除监测点，false表示节点不纯在
bool del_watch_point(int N){
  for(WP* cur=head;cur!=NULL;cur=cur->next){
    if(cur->NO==N){
      free_wp(cur);
      return true;
    }
  }
  return false;
}