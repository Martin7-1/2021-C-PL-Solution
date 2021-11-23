//
// Created by Zyi on 2021/11/23.
//
#include <stdio.h>

int numbers[1003];
int length = 0;

int main() {
    int index = 0;
    int n;
    while (scanf("%d", &n) != EOF) {
        numbers[index++] = n;
        length++;
    }

    // 只要找到最大值然后和第一位和最后一位比较就可以了
    int maxElement = numbers[0];
    for (int i = 0; i < length; i++) {
        if (numbers[i] > maxElement) {
            maxElement = numbers[i];
        }
    }

    int maxDiff = maxElement - numbers[0] > maxElement - numbers[length - 1] ? maxElement - numbers[0] : maxElement - numbers[length - 1];
    printf("%d", maxDiff);
}

