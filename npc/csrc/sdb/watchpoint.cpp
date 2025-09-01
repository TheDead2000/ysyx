#include "watchpoint.h"
#include "simtop.h"

extern Simtop* mysim_p;

Watchpoint::Watchpoint() {
    for (uint32_t i = 0; i < WPNUM; i++) {
        numflag[i] = false;
    }
    cout << "Watchpoint init" << endl;
}

Watchpoint::~Watchpoint() {
    cout << "Watchpoint deinit" << endl;
}

bool Watchpoint::newWp(string exp) {
    wpdata newdata;
    newdata.NO = getNum();
    if (newdata.NO == WPNUM) {
        return false;
    }
    newdata.exp = exp;
    
    // 计算初始值
    bool success;
    newdata.old_value = mysim_p->u_expr.getResult((char*)exp.c_str(), &success);
    if (!success) {
        delNum(newdata.NO);
        return false;
    }
    
    wp_pool.emplace_back(newdata);
    printwp();
    return true;
}

bool Watchpoint::delWp(uint32_t NO) {
    for (auto it = wp_pool.begin(); it != wp_pool.end();) {
        if (it->NO == NO) {
            delNum(it->NO);
            wp_pool.erase(it++);
            printwp();
            return true;
        } else {
            it++;
        }
    }
    return false;
}

uint32_t Watchpoint::getNum() {
    for (uint32_t i = 0; i < WPNUM; i++) {
        if (numflag[i] == false) {
            numflag[i] = true;
            return i;
        }
    }
    return WPNUM;
}

bool Watchpoint::delNum(uint32_t NO) {
    if (numflag[NO] == true) {
        numflag[NO] = false;
        return true;
    }
    return false;
}

void Watchpoint::printwp() {
    for (auto it = wp_pool.begin(); it != wp_pool.end(); it++) {
        cout << "NUM: " << it->NO << "\twpexp: " << it->exp 
             << "\tvalue: " << it->old_value << endl;
    }
}

bool Watchpoint::checkDiff() {
    bool has_diff = false;
    
    for (auto it = wp_pool.begin(); it != wp_pool.end(); it++) {
        bool success;
        uint64_t new_value = mysim_p->u_expr.getResult((char*)it->exp.c_str(), &success);
        printf("new_value: %lu, old_value: %lu\n", new_value, it->old_value);
        if (!success) {
            cout << "Error evaluating expression for watchpoint " << it->NO << ": " << it->exp << endl;
            continue;
        }
        
        if (new_value != it->old_value) {
            cout << "Watchpoint " << it->NO << " value changed: " 
                 << it->old_value << " -> " << new_value << endl;
            cout << "Expression: " << it->exp << endl;
            
            it->old_value = new_value;
            has_diff = true;
            mysim_p->top_status = mysim_p->TOP_STOP;
        }
    }
    
    return has_diff;
}

void Watchpoint::praseAllwp() {
    bool ret;
    uint64_t exprResult;
    for (auto it = wp_pool.begin(); it != wp_pool.end(); it++) {
        exprResult = mysim_p->u_expr.getResult((char*)it->exp.c_str(), &ret);
        if (true == exprResult) {
            mysim_p->top_status = mysim_p->TOP_STOP;
            cout << "NUM:" << it->NO << "\twpexp: " << it->exp
                 << "\texprResult:\t" << exprResult << endl;
        }
    }
}

void Watchpoint::showAllwp() {
    bool ret;
    uint64_t exprResult;
    for (auto it = wp_pool.begin(); it != wp_pool.end(); it++) {
        exprResult = mysim_p->u_expr.getResult((char*)it->exp.c_str(), &ret);
        cout << "NUM:" << it->NO << "\twpexp:" << it->exp
             << "\tvalue:\t" << exprResult
             << "\tstored:\t" << it->old_value << endl;
    }
}

// 全局Watchpoint实例
static Watchpoint wp;

// C接口实现
extern "C" {
    void new_wp(char* str) {
        string temp(str);
        wp.newWp(temp);
    }

    void free_wp(uint32_t NO) {
        wp.delWp(NO);
    }

    void show_wp() {
        wp.showAllwp();
    }

    void prase_wp() {
        wp.praseAllwp();
    }
    
    bool check_wp_diff() {
        return wp.checkDiff();
    }
}