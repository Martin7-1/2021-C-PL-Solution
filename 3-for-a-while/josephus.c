#include <stdio.h>
#include <malloc.h>

void delete(int* arr, int index, int size);

int main() {
    int n;
    int k;
    int* arr;

    scanf("%d %d", &n, &k);
    arr = (int*) malloc(n * sizeof(int));

    // 初始化数组
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }

    int index = -1;
    int size = n;

    // 循环 n - 1 次
    for (int i = 0; i < n - 1; i++) {
        index = (index + k) % size;
        delete(arr, index, size);
        index--;
        size--;
    }

    printf("%d", arr[0]);

    // 释放内存
    free(arr);

    return 0;
}

void delete(int* arr, int index, int size) {
    // 将index位置移出且将后面的位置移到前面
    for (int i = index; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
}
