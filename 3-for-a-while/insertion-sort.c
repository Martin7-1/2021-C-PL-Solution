//
// Created by Zyi on 2021/11/1.
//
#include <stdio.h>
#include <malloc.h>

void insert(int* arr, int insertValue, int size);

int main()
{
    int n;
    scanf("%d", &n);
    int* arr = (int*) malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // 打印初始状态
    printf("%d\n", arr[0]);

    // 插入排序
    for (int i = 1 ; i < n; i++) {
        int insertValue = arr[i];
        // [0, i)是已经排序好的
        insert(arr, insertValue, i);
    }
}

void insert(int* arr, int insertValue, int size) {
    // 将insertValue插入到arr的[0, size - 1)位的对应位置
    // 打印[0, size)位的数据
    int i;
    for (i = size - 1; i >= 0 && insertValue < arr[i]; i--) {
        arr[i + 1] = arr[i];
    }

    arr[i + 1] = insertValue;
    for (i = 0; i <= size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
