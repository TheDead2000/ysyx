#ifndef ___WATCHPOINT_H__
#define ___WATCHPOINT_H__

#include <stack>
#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <cstdint>

using namespace std;

class Watchpoint {
private:
#define WPNUM 32
    struct wpdata {
        uint32_t NO;  //序号
        uint64_t old_value; //旧值
        string exp;   //表达式
    };
    list<wpdata> wp_pool;
    bool numflag[WPNUM]; //标记数组，自动分配序号
public:
    Watchpoint();
    ~Watchpoint();
    bool newWp(string exp);
    bool delWp(uint32_t NO);
    uint32_t getNum();
    bool delNum(uint32_t NO);
    void praseAllwp();
    void showAllwp();
    void printwp();
    bool checkDiff();
};

// 只声明外部C函数，不定义
extern "C" {
    void new_wp(char* str);
    void free_wp(uint32_t NO);
    void show_wp();
    void prase_wp();
    bool check_wp_diff();
}

#endif