#include "devicebase.h"
#include <cassert>

using namespace Topdevice;


/**
 * @brief 是否在地址区间内
 *
 * @param s 开始地址
 * @param e 结束地址
 * @param val 查找地址
 * @return true
 * @return false
 */
bool Devicebase::atRange(paddr_t s, paddr_t e, paddr_t val) {
    if ((s <= val) && (val <= e)) {
        return true;
    }
    return false;
}

extern "C" void flash_read(int32_t addr, int32_t *data) { assert(0); }
extern "C" void mrom_read(int32_t addr, int32_t *data) { 
    
 }