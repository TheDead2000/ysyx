#ifndef __SIMAXI4_H
#define __SIMAXI4_H

#include <iostream>
#include <verilated.h>
#include "axi4.hpp"
#include "axi4_mem.hpp"
#include "axi4_xbar.hpp"
#include "mmio_mem.hpp"
#include "mmio_device2axi4.hpp"
#define USE_YSYX_SOC

#ifdef USE_YSYX_SOC
#include <VysyxSoCFull.h>
#else
#include <Vtop.h>
#endif
using namespace std;


class SimAxi4 {
private:

    /* 各个设备地址 */
#define DEVICE_BASE 0xa0000000
#define MMIO_BASE 0xa0000000
#define SERIAL_PORT     (DEVICE_BASE + 0x00003f8)
#define KBD_ADDR        (DEVICE_BASE + 0x0000060)
#define RTC_ADDR        (DEVICE_BASE + 0x0000048)
#define VGACTL_ADDR     (DEVICE_BASE + 0x0000100)
#define AUDIO_ADDR      (DEVICE_BASE + 0x0000200)
#define DISK_ADDR       (DEVICE_BASE + 0x0000300)
#define FB_ADDR         (MMIO_BASE   + 0x1000000)
#define AUDIO_SBUF_ADDR (MMIO_BASE   + 0x1200000)

    axi4_ptr <32, 32, 4> mmio_ptr;
    axi4_xbar<32, 32, 4> mmio;
    axi4     <32, 32, 4> mmio_sigs;
public:
    mmio_mem* dram;
    Device2axi4* mydevices;
public:

#ifdef USE_YSYX_SOC
    SimAxi4(VysyxSoCFull* top);
#else
    SimAxi4(Vtop* top);
#endif

    ~SimAxi4();

    #ifdef USE_YSYX_SOC
    void connect_wire(axi4_ptr <32, 32, 4>& mmio_ptr, VysyxSoCFull* top);
#else
    void connect_wire(axi4_ptr <32, 32, 4>& mmio_ptr, Vtop* top);
#endif
    
    void mmio_device_init();
    void update_input();
    void beat();
    void update_output();

};




#endif