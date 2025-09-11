// #define NPC
#include "svdpi.h"
#include <verilated.h>
#include <verilated_vcd_c.h>
extern VerilatedVcdC *tfp;

#ifdef NPC
#include "Vraw_core.h"
#include "Vraw_core___024root.h"
#include "Vraw_core__Dpi.h"
extern Vraw_core *dut;

#else
#include "VysyxSoCFull.h"
#include "VysyxSoCFull__Dpi.h"
#include "VysyxSoCFull___024root.h"
extern VysyxSoCFull *dut;

#endif