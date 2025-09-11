// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsoc.h for the primary calling header

#ifndef VERILATED_VSOC___024UNIT_H_
#define VERILATED_VSOC___024UNIT_H_  // guard

#include "verilated.h"

class Vsoc__Syms;

class Vsoc___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vsoc__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsoc___024unit(Vsoc__Syms* symsp, const char* v__name);
    ~Vsoc___024unit();
    VL_UNCOPYABLE(Vsoc___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
