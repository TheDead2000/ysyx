#include <am.h>
#include <klib-macros.h>
#include <stdint.h>

// 外部定义的堆区和栈区地址
extern char _heap_start;
extern char _psram_end;
extern char _stack_pointer;

// 测试模式枚举
typedef enum {
    TEST_8BIT,
    TEST_16BIT, 
    TEST_32BIT,
    TEST_64BIT
} test_mode_t;

// 内存测试函数声明
static int test_memory_region(uintptr_t start, uintptr_t end, test_mode_t mode);
static void write_pattern(uintptr_t start, uintptr_t end, test_mode_t mode);
static int verify_pattern(uintptr_t start, uintptr_t end, test_mode_t mode);

// 对齐宏
#define ALIGN_DOWN(addr, align) ((addr) & ~((align) - 1))
#define ALIGN_UP(addr, align)   (((addr) + (align) - 1) & ~((align) - 1))

// 防止编译器优化的volatile访问宏
#define READ8_VOLATILE(addr)    (*(volatile uint8_t*)(addr))
#define READ16_VOLATILE(addr)   (*(volatile uint16_t*)(addr))
#define READ32_VOLATILE(addr)   (*(volatile uint32_t*)(addr))
#define READ64_VOLATILE(addr)   (*(volatile uint64_t*)(addr))

#define WRITE8_VOLATILE(addr, val)  (*(volatile uint8_t*)(addr) = (val))
#define WRITE16_VOLATILE(addr, val) (*(volatile uint16_t*)(addr) = (val))
#define WRITE32_VOLATILE(addr, val) (*(volatile uint32_t*)(addr) = (val))
#define WRITE64_VOLATILE(addr, val) (*(volatile uint64_t*)(addr) = (val))

int main(const char *args) {
    // 计算测试区域：堆区开始到栈指针之前
    uintptr_t heap_start = (uintptr_t)&_heap_start;
    uintptr_t heap_end = (uintptr_t)&_psram_end;
    uintptr_t stack_start = (uintptr_t)&_stack_pointer;
    
    // 确保测试区域有效且不包含栈区
    if (heap_start >= heap_end) {
        halt(1); // 堆区范围无效
    }
    
    if (stack_start >= heap_start && stack_start <= heap_end) {
        // 栈区在测试区域内，调整结束地址到栈区开始
        heap_end = stack_start;
    }
    
    // 确保测试区域有效
    if (heap_start >= heap_end) {
        halt(2); // 调整后测试区域无效
    }
    
    // 依次测试不同位宽
    int result;
    
    // 测试8位访问
    result = test_memory_region(heap_start, heap_end, TEST_8BIT);
    if (result != 0) {
        halt(10 + result); // 8位测试失败
    }
    
    // 测试16位访问（需要2字节对齐）
    uintptr_t aligned_start_16 = ALIGN_UP(heap_start, 2);
    uintptr_t aligned_end_16 = ALIGN_DOWN(heap_end, 2);
    if (aligned_start_16 < aligned_end_16) {
        result = test_memory_region(aligned_start_16, aligned_end_16, TEST_16BIT);
        if (result != 0) {
            halt(20 + result); // 16位测试失败
        }
    }
    
    // 测试32位访问（需要4字节对齐）
    uintptr_t aligned_start_32 = ALIGN_UP(heap_start, 4);
    uintptr_t aligned_end_32 = ALIGN_DOWN(heap_end, 4);
    if (aligned_start_32 < aligned_end_32) {
        result = test_memory_region(aligned_start_32, aligned_end_32, TEST_32BIT);
        if (result != 0) {
            halt(30 + result); // 32位测试失败
        }
    }
    
    // 测试64位访问（需要8字节对齐）
    uintptr_t aligned_start_64 = ALIGN_UP(heap_start, 8);
    uintptr_t aligned_end_64 = ALIGN_DOWN(heap_end, 8);
    if (aligned_start_64 < aligned_end_64) {
        result = test_memory_region(aligned_start_64, aligned_end_64, TEST_64BIT);
        if (result != 0) {
            halt(40 + result); // 64位测试失败
        }
    }
    
    // 所有测试通过
    return 0;
}

// 测试特定内存区域
static int test_memory_region(uintptr_t start, uintptr_t end, test_mode_t mode) {
    // 第一步：写入模式数据
    write_pattern(start, end, mode);
    
    // 第二步：验证模式数据
    return verify_pattern(start, end, mode);
}

// 写入模式数据
static void write_pattern(uintptr_t start, uintptr_t end, test_mode_t mode) {
    uintptr_t addr;
    
    switch (mode) {
        case TEST_8BIT:
            for (addr = start; addr < end; addr += 1) {
                uint8_t value = addr & 0xFF;
                WRITE8_VOLATILE(addr, value);
            }
            break;
            
        case TEST_16BIT:
            for (addr = start; addr < end; addr += 2) {
                uint16_t value = addr & 0xFFFF;
                WRITE16_VOLATILE(addr, value);
            }
            break;
            
        case TEST_32BIT:
            for (addr = start; addr < end; addr += 4) {
                uint32_t value = addr & 0xFFFFFFFF;
                WRITE32_VOLATILE(addr, value);
            }
            break;
            
        case TEST_64BIT:
            for (addr = start; addr < end; addr += 8) {
                uint64_t value = addr & 0xFFFFFFFFFFFFFFFFULL;
                WRITE64_VOLATILE(addr, value);
            }
            break;
    }
}

// 验证模式数据
static int verify_pattern(uintptr_t start, uintptr_t end, test_mode_t mode) {
    uintptr_t addr;
    
    switch (mode) {
        case TEST_8BIT:
            for (addr = start; addr < end; addr += 1) {
                uint8_t expected = addr & 0xFF;
                uint8_t actual = READ8_VOLATILE(addr);
                if (actual != expected) {
                    return 1; // 验证失败
                }
            }
            break;
            
        case TEST_16BIT:
            for (addr = start; addr < end; addr += 2) {
                uint16_t expected = addr & 0xFFFF;
                uint16_t actual = READ16_VOLATILE(addr);
                if (actual != expected) {
                    return 1; // 验证失败
                }
            }
            break;
            
        case TEST_32BIT:
            for (addr = start; addr < end; addr += 4) {
                uint32_t expected = addr & 0xFFFFFFFF;
                uint32_t actual = READ32_VOLATILE(addr);
                if (actual != expected) {
                    return 1; // 验证失败
                }
            }
            break;
            
        case TEST_64BIT:
            for (addr = start; addr < end; addr += 8) {
                uint64_t expected = addr & 0xFFFFFFFFFFFFFFFFULL;
                uint64_t actual = READ64_VOLATILE(addr);
                if (actual != expected) {
                    return 1; // 验证失败
                }
            }
            break;
    }
    
    return 0; // 验证成功
}