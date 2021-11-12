//
// Created by Zyi on 2021/11/9.
//
#include <stdio.h>
#include <malloc.h>

void swapNumber(int index, int* arr, int n);
void flipNumber(int* arr, int index, int n);

int main()
{
    int n;
    scanf("%d", &n);

    int* numbers = malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }
    // 我们通过这种方式来找最长递降后缀
    // 反过来遍历，找最长递增序列
    int index = n - 1;
    while (numbers[index - 1] > numbers[index]) {
        index--;
    }

    // 此时index就是最长递降后缀的第一个数
    swapNumber(index, numbers, n);
    flipNumber(numbers, index, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", numbers[i]);
    }

    free(numbers);
    return 0;
}

void swapNumber(int index, int* arr, int n) {
    // index是最长后缀序列的第一个数
    int gap = 100000;
    int swapIndex = -1;
    for (int i = index; i < n; i++) {
        // 找到第一个大于arr[index-1]的数
        if (arr[i] - arr[index - 1] > 0 && arr[i] - arr[index - 1] < gap) {
            gap = arr[i] - arr[index - 1];
            swapIndex = i;
        }
    }

    int temp = arr[index - 1];
    arr[index - 1] = arr[swapIndex];
    arr[swapIndex] = temp;
}

void flipNumber(int* arr, int index, int n) {
    // 将[index, n)的数反转
    int left = index;
    int right = n - 1;

    while (left <= right) {
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left++;
        right--;
    }
}
