#ifndef VTOP_COMPAT_H
#define VTOP_COMPAT_H

#include "simtop.h"
#ifdef USE_YSYX_SOC
#include "VysyxSoCFull.h"    // 如果定义了 USE_YSYX_SOC，就包含 VysyxSoCFull.h
typedef VysyxSoCFull Vtop;   // 然后为 VysyxSoCFull 创建一个别名叫做 Vtop
#else
#include "Vtop.h"            // 如果没有定义 USE_YSYX_SOC，就包含正常的 Vtop.h
#endif                       // 这里不需要 typedef，因为 Vtop 已经存在

#endif // VTOP_COMPAT_H