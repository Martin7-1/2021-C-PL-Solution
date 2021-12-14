//
// Created by Zyi on 2021/12/14.
//
#include <stdio.h>
#include <malloc.h>

typedef struct stack {
    int pointer;
    // 存放栈的值
    int* val;
}STACK;

void pour(STACK* x, STACK* y);
void output(STACK* stacks, int len);
void freeMemory(STACK* stacks, int len);

int main() {
    int stackAmount, n;
    scanf("%d %d", &stackAmount, &n);
    // 构建一个stack的数组
    STACK* stacks = malloc((stackAmount+10) * sizeof(STACK));

    for (int i = 1; i <= stackAmount; i++) {
        (stacks + i)->pointer = 0;
        (stacks + i)->val = malloc(10000007 * sizeof(int));
        (stacks + i)->val[0] = i;
    }

    for (int i = 0; i < n; i++) {
        int x, y;
        scanf("%d %d", &x, &y);
        pour(&stacks[x], &stacks[y]);
    }

    output(stacks, stackAmount);
    freeMemory(stacks, stackAmount);
    free(stacks);
    return 0;
}

void pour(STACK* x, STACK* y) {
    // 将x倒入y里面
    // 没有元素的话我们将pointer置为-1
    int len = x->pointer;
    int index = y->pointer;
    for (int i = len; i >= 0; i--) {
        y->val[++index] = x->val[i];
    }
    x->pointer = -1;
    y->pointer = index;
}

void output(STACK* stacks, int len) {
    for (int i = 1; i <= len; i++) {
        if (stacks[i].pointer == -1) {
            printf("0\n");
        } else {
            int top = stacks[i].pointer;
            for (int j = 0; j <= top; j++) {
                printf("%d ", stacks[i].val[j]);
            }
            stacks[i].pointer = -1;
            printf("\n");
        }
    }
}

void freeMemory(STACK* stacks, int len) {
    // 释放内存
    for (int i = 1; i <= len; i++) {
        free(stacks + i);
    }
}
