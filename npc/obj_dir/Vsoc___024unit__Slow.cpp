// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsoc.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vsoc__Syms.h"
#include "Vsoc___024unit.h"

void Vsoc___024unit___ctor_var_reset(Vsoc___024unit* vlSelf);

Vsoc___024unit::Vsoc___024unit(Vsoc__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vsoc___024unit___ctor_var_reset(this);
}

void Vsoc___024unit::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vsoc___024unit::~Vsoc___024unit() {
}
