//
// Created by Zyi on 2021/11/22.
//
#include <stdio.h>
#include <malloc.h>

char str[1003];
int numbers[1003];
int* maxDiff;
int length = 0;

void changeToInt();

int main() {
    // 用字符串来读取
    scanf("%s", str);
    changeToInt();

    // 算法流程如下：
    // 找到最大值
    // 维护一个子数组最大值与最大值元素的数组
    // 我们知道有length个元素了
    maxDiff = malloc(length * sizeof(int));
    int maxElement = 
}

void changeToInt() {
    // 将str中的数字分开
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            // 不是空格就是数字
            numbers[length++] = str[i] - '0';
        }
    }
}
