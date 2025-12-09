#ifndef __PLIC
#define __PLIC

void init_plic();
void plic_raise_irq(int);
void plic_clear_irq(int);
#endif