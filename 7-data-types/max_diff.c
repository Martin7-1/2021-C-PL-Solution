//
// Created by Zyi on 2021/11/22.
//
#include <stdio.h>
#include <malloc.h>

int numbers[1003];
int* maxDiff;
int length = 0;

void changeToInt();

int main() {
    int index = 0;
    do {
        scanf("%d", &numbers[index++]);
        length++;
    } while (getchar() != '\n' );

    // 算法流程如下：
    // 找到最大值
    // 维护一个子数组最大值与最大值元素的数组
    // 我们知道有length个元素了
    maxDiff = malloc(length * sizeof(int));
    int maxElement = numbers[0];
    int maxIndex = -1;

    for (int i = 0; i < length; i++) {
        if (numbers[i] > maxElement) {
            maxElement = numbers[i];
            maxIndex = i;
        }
    }

    // 维护左右子数组的最大值
    maxDiff[0] = maxElement - numbers[0];
    for (int i = 1; i < maxIndex; i++) {
        if (numbers[i] > numbers[i - 1]) {
            // 此时开头子数组最大值变化，我们需要更新值
            maxDiff[i] = maxElement - numbers[i];
        }  else {
            maxDiff[i] = maxDiff[i - 1];
        }
    }

    maxDiff[length - 1] = maxElement - numbers[length - 1];
    for (int i = length - 2; i > maxIndex; i--) {
        if (numbers[i] > numbers[i + 1]) {
            maxDiff[i] = maxElement - numbers[i];
        } else {
            maxDiff[i] = maxDiff[i + 1];
        }
    }

    // 然后只要寻找最大的值就可以了
    int maxDifference = -1;
    for (int i = 0; i < length; i++) {
        if (i != maxIndex && maxDiff[i] > maxDifference) {
            maxDifference = maxDiff[i];
        }
    }

    printf("%d", maxDifference);
    return 0;
}
