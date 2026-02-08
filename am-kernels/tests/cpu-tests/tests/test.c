/* amo_test_simple.c - 简单原子操作测试 */
#include <stdio.h>
#include <stdint.h>

/* 原子加法函数 - 使用内联汇编 */
static inline uint32_t atomic_add(uint32_t *ptr, uint32_t value)
{
    uint32_t old;
    asm volatile (
        "amoadd.w %0, %2, %1"
        : "=r" (old), "+A" (*ptr)
        : "r" (value)
        : "memory"
    );
    return old;
}

/* 测试基本原子操作 */
void test_basic_atomic(void)
{
    printf("=== 测试基本原子操作 ===\n");
    
    uint32_t counter = 0;
    uint32_t old_value;
    
    /* 第一次原子加 */
    old_value = atomic_add(&counter, 42);
    printf("第一次原子加: old_value = %u, counter = %u\n", old_value, counter);
    
    /* 第二次原子加 */
    old_value = atomic_add(&counter, 58);
    printf("第二次原子加: old_value = %u, counter = %u\n", old_value, counter);
    
    if (counter == 100 && old_value == 42) {
        printf("✓ 基础原子操作测试通过\n");
    } else {
        printf("✗ 基础原子操作测试失败\n");
    }
}

int main(void)
{
    test_basic_atomic();
    return 0;
}