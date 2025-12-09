// device/plic.c
#include <device/map.h>
#include <cpu/cpu.h>

#define PLIC_PENDING  0x1000
#define PLIC_ENABLE   0x2000
#define PLIC_PRIORITY 0x0000
#define PLIC_CLAIM    0x200004

static uint8_t *plic_base = NULL;
static uint32_t plic_pending = 0;
static uint32_t plic_enable = 0;

// CPU中断状态
static bool external_interrupt_pending = false;

void plic_raise_irq(int irq_num) {
    if (irq_num >= 0 && irq_num < 32) {
        plic_pending |= (1 << irq_num);
        
        // 如果中断使能，设置外部中断标志
        if (plic_enable & (1 << irq_num)) {
            external_interrupt_pending = true;
        }
    }
}

void plic_clear_irq(int irq_num) {
    if (irq_num >= 0 && irq_num < 32) {
        plic_pending &= ~(1 << irq_num);
        
        // 如果没有其他中断，清除外部中断标志
        if ((plic_pending & plic_enable) == 0) {
            external_interrupt_pending = false;
        }
    }
}

// 检查是否有外部中断
bool plic_has_external_interrupt(void) {
    return external_interrupt_pending;
}

// 获取最高优先级的中断
int plic_get_pending_irq(void) {
    for (int i = 0; i < 32; i++) {
        if ((plic_pending & (1 << i)) && (plic_enable & (1 << i))) {
            return i;
        }
    }
    return -1;
}

static void plic_io_handler(uint32_t offset, int len, bool is_write) {
    switch (offset) {
        case PLIC_PENDING:
            if (is_write) {
                // 清除pending位
                uint32_t value = *(uint32_t*)(plic_base + PLIC_PENDING);
                plic_pending &= ~value;
                
                // 更新中断状态
                if ((plic_pending & plic_enable) == 0) {
                    external_interrupt_pending = false;
                }
            } else {
                *(uint32_t*)(plic_base + PLIC_PENDING) = plic_pending;
            }
            break;
            
        case PLIC_ENABLE:
            if (is_write) {
                plic_enable = *(uint32_t*)(plic_base + PLIC_ENABLE);
                
                // 更新中断状态
                external_interrupt_pending = ((plic_pending & plic_enable) != 0);
            } else {
                *(uint32_t*)(plic_base + PLIC_ENABLE) = plic_enable;
            }
            break;
            
        case PLIC_CLAIM:
            if (is_write) {
                // 完成中断处理
                int irq_num = *(uint32_t*)(plic_base + PLIC_CLAIM);
                plic_clear_irq(irq_num);
            } else {
                // 返回最高优先级的中断
                int irq_num = plic_get_pending_irq();
                if (irq_num >= 0) {
                    *(uint32_t*)(plic_base + PLIC_CLAIM) = irq_num;
                } else {
                    *(uint32_t*)(plic_base + PLIC_CLAIM) = 0;
                }
            }
            break;
            
        default:
            // 处理优先级寄存器等
            if (offset < 0x1000) {
                // 优先级寄存器（每个中断源4字节）
                int irq_num = offset / 4;
                if (irq_num < 32) {
                    // 简单实现：忽略优先级
                    if (is_write) {
                        // 忽略写入
                    } else {
                        *(uint32_t*)(plic_base + offset) = 1;  // 默认优先级1
                    }
                }
            }
            break;
    }
}

void init_plic() {
    plic_base = new_space(CONFIG_PLIC_MEM_SIZE);
    add_mmio_map("plic", CONFIG_PLIC_MEM_BASE, plic_base, 
                 CONFIG_PLIC_MEM_SIZE, plic_io_handler);
}