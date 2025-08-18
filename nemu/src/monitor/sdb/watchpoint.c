#include "sdb.h"

#define NR_WP 32



static WP wp_pool[NR_WP] = {};
static WP *head = NULL, *free_ = NULL;

void init_wp_pool() {
  int i;
  for (i = 0; i < NR_WP; i ++) {
    wp_pool[i].NO = i;
    wp_pool[i].next = (i == NR_WP - 1 ? NULL : &wp_pool[i + 1]);
  }

  head = NULL;
  free_ = wp_pool;
}
// head: 指向已使用的监视点链表
// free_: 指向空闲监视点链表

//    1. 从free_链表中取出第一个节点
//    2. 将该节点插入到head链表的头部

WP* new_wp() {
    if (free_ == NULL) {
        printf("No available watchpoints. Maximum of %d reached.\n", NR_WP);
        return NULL;
    }
    
    // 从空闲链表取一个节点
    WP *new = free_;
    free_ = free_->next;
    
    // 添加到已使用链表头部
    new->next = head;
    head = new;
    new->flag = true;
    
    return new;
}

//    1. 从head链表中移除该节点。
//    2. 将该节点插入free_链表的头部
void free_wp(WP *wp) {
    // 从已使用链表中移除
    if (head == wp) {
        head = head->next;
    } else {
        WP *prev = head;
        while (prev != NULL && prev->next != wp) {
            prev = prev->next;
        }
        if (prev == NULL) {
            printf("Watchpoint %d not found in active list.\n", wp->NO);
            return;
        }
        prev->next = wp->next;
    }
    
    // 添加到空闲链表头部
    wp->next = free_;
    free_ = wp;
    wp->flag = false;
    
    printf("Deleted watchpoint %d.\n", wp->NO);
}

void sdb_watchpoint_display(){
    bool flag = true;
    for(int i = 0 ; i < NR_WP ; i ++){
        if(wp_pool[i].flag){
            printf("Watchpoint.No: %d, expr = \"%s\", old_value = %d, new_value = %d\n",
                    wp_pool[i].NO, wp_pool[i].expr,wp_pool[i].old_value, wp_pool[i].new_value);
                flag = false;
        }
    }
    if(flag) printf("No watchpoint now.\n");
}
void delete_watchpoint(int no){
    for(int i = 0 ; i < NR_WP ; i ++)
        if(wp_pool[i].NO == no){
            free_wp(&wp_pool[i]);
            return ;
        }
}
void create_watchpoint(char* args){
    WP* p =  new_wp();
    strcpy(p -> expr, args);
    bool success = false;
    int tmp = expr(p -> expr,&success);
   if(success) p -> old_value = tmp;
   else printf("创建watchpoint的时候expr求值出现问题\n");
    printf("Create watchpoint No.%d success.\n", p -> NO);
}

void wp_diff()
{
  for(int i = 0 ; i < NR_WP; i ++){
        if(wp_pool[i].flag)
        {
            bool success = false;
            int tmp = expr(wp_pool[i].expr,&success);
            if(success){
                if(tmp != wp_pool[i].old_value)
                {
                    nemu_state.state = NEMU_STOP;
                    printf("NO EQ\n");
                    return ;
                }
            }
            else{
                printf("expr error.\n");
                assert(0);
            }
        }
    }
}

