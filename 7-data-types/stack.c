//
// Created by Zyi on 2021/11/22.
//
#include <stdio.h>
#include <malloc.h>
#include <string.h>

char** operation;
// 用数组来模拟栈
// 这里不用指针和malloc的原因是因为malloc需要运行时开辟
// 而win下的栈空间太小，懒得编译调整栈大小了
char stack[10004];
// 维护一个指向栈顶的指针即可
int pointer = -1;

char pop();
char top();
void push(char x);
void print();

int main() {
    int n;
    scanf("%d", &n);
    getchar();
    operation = malloc(n * sizeof(char*));

    for (int i = 0; i < n; i++) {
        operation[i] = malloc(20 * sizeof(char));
        // 读取字符串
        scanf("%s", operation[i]);
        if (strcmp(operation[i], "pop") == 0) {
            // 执行pop操作
            char popElement = pop();
            if (popElement == '\0') {
                printf("Empty\n");
            }
        } else if (strcmp(operation[i], "top") == 0) {
            // 执行top操作
            char topElement = top();
            if (topElement != '\0') {
                printf("%c\n", topElement);
            } else {
                printf("Empty\n");
            }
        } else if (strcmp(operation[i], "print") == 0) {
            // 执行print操作
            print();
        } else if (strcmp(operation[i], "push") == 0) {
            // 第6个char是我们要push的元素
            char pushElement;
            // 读取一个空格
            getchar();
            scanf("%c", &pushElement);
            push(pushElement);
        }
        getchar();
    }

    for (int i = 0; i < n; i++) {
        free(operation[i]);
    }
    free(operation);
    return 0;
}

char pop() {
    // 弹出栈顶的一个元素
    // eg: 若从栈底到栈顶的元素为1, 3, 5, 7
    // 则执行完pop操作后，栈中元素为1, 3, 5
    if (pointer == -1) {
        // 此时栈内没有元素
        // 我们用'\0'来代表为空
        return '\0';
    }

    char popElement = stack[pointer];
    pointer--;
    return popElement;
}

char top() {
    // 返回栈顶元素
    // 与pop()不同之处在于其不弹出, 保留元素
    if (pointer == -1) {
        return '\0';
    }

    char topElement = stack[pointer];
    return topElement;
}

void push(char x) {
    // 往栈中压入一个元素
    pointer++;
    stack[pointer] = x;
}

void print() {
    // 输出栈中的元素
    for (int i = pointer; i >= 0; i--) {
        printf("| %c |\n", stack[i]);
    }
    printf("|===|\n");
}
