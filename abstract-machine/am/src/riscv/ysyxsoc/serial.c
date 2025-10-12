#include <am.h>
#include "ysyxsoc.h"
#include "klib.h"
void __am_uart_rx(AM_UART_RX_T *cfg) {
    printf("__am_uart_rx\n");
    if((inb(UART_REG_LS) & 0x1) == 0x1){
        printf("revecive some\n");
        cfg->data = inb(UART_REG_RX);
    }else{
        printf("no revecive some\n");
        cfg->data = 0xff;
    }
}