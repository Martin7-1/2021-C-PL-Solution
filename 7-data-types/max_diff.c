//
// Created by Zyi on 2021/11/22.
//
#include <stdio.h>

int numbers[1003];
int maxDiff[1003];
int length = 0;

int main() {int index = 0;
    int n;
    while (scanf("%d", &n) != EOF) {
        numbers[index++] = n;
        length++;
    }

    // 只要找到最大值然后和第一位和最后一位比较就可以了
    int maxElement = numbers[0];
    int maxIndex = 0;
    for (int i = 0; i < length; i++) {
        if (numbers[i] > maxElement) {
            maxElement = numbers[i];
            maxIndex = i;
        }
    }

    // 维护左右子数组的最大值
    int leftIndex = 0;
    if (maxIndex == 0) {
        // 此时最大数在第一个位置
        // 左边没有数了
        leftIndex = 0;
    } else {
        maxDiff[0] = maxElement - numbers[0];
        for (int i = 1; i < maxIndex; i++) {
            if (numbers[i] > numbers[i - 1]) {
                // 此时开头子数组最大值变化，我们需要更新值
                // 此时子数组最大数变了，我们其实不需要后面的值了
                leftIndex = i - 1;
                break;
            }  else {
                maxDiff[i] = maxDiff[i - 1];
            }
        }
    }

    int rightIndex = length - 1;
    if (maxIndex == length - 1) {
        // 如果最大值是最后的元素
        rightIndex = length - 1;
    } else {
        maxDiff[length - 1] = maxElement - numbers[length - 1];
        for (int i = length - 2; i > maxIndex; i--) {
            if (numbers[i] > numbers[i + 1]) {
                rightIndex = i + 1;
                break;
            } else {
                maxDiff[i] = maxDiff[i + 1];
            }
        }
    }

    int maxDifference = maxDiff[leftIndex] > maxDiff[rightIndex] ? maxDiff[leftIndex] : maxDiff[rightIndex];
    printf("%d", maxDifference);
    return 0;
}
