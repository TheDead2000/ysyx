// just a breakpoint pool

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stddef.h>

#define SIZE 20

typedef struct {
    size_t* data;
    size_t size;
    size_t capacity;
} SizeArray;

SizeArray arr;

// 初始化数组
void init_breakpoint() {
    arr.data = (size_t*)malloc(SIZE * sizeof(size_t));
    arr.size = 0;
    arr.capacity = SIZE;
}

// 插入数据
void add_breakpoint(size_t value) {
    if (arr.size == arr.capacity) {
        arr.capacity *= 2;
        arr.data = (size_t*)realloc(arr.data, arr.capacity * sizeof(size_t));
    }
    arr.data[arr.size++] = value;
}

// 删除数据
int delete_breakpoint(size_t value) {
    for (size_t i = 0; i < arr.size; i++) {
        if (arr.data[i] == value) {
            for (size_t j = i; j < arr.size - 1; j++) {
                arr.data[j] = arr.data[j + 1];
            }
            arr.size--;
            return 1; // 删除成功
        }
    }
    return 0; // 未找到要删除的元素
}

// 遍历数组
bool check_breakpoint(size_t pc) {
    for (size_t i = 0; i < arr.size; i++) {
        if(arr.data[i]==pc)
          return true;
    }
    return false;
}

// 释放内存
void freebreakpoint() {
    free(arr.data);
    arr.data = NULL;
    arr.size = arr.capacity = 0;
}


