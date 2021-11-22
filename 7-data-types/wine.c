//
// Created by Zyi on 2021/11/22.
//
#include <stdio.h>
#include <malloc.h>

int* values;
int* maxAdded;

void bubbleSort(int length);
void swap(int indexOne, int indexTwo);

int main() {
    int n, maxCapacity;
    scanf("%d %d", &n, &maxCapacity);

    values = malloc(n * sizeof(int));
    maxAdded = malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        scanf("%d", &values[i]);
    }

    for (int i = 0; i < n; i++) {
        scanf("%d", &maxAdded[i]);
    }

    // 排序
    // 这里用的是冒泡排序
    // 想追求快速的话可以用快排，代码在下面，用了分治的思想（你会觉得好像也是递归
    bubbleSort(n);

    // 贪心
    int totalValue = 0;
    for (int i = 0; i < n; i++) {
        if (maxCapacity >= maxAdded[i]) {
            // 如果酒杯所剩容量大于能加的最大容量，就全部加进去
            maxCapacity -= maxAdded[i];
            totalValue += values[i] * maxAdded[i];
        } else {
            // 否则就把酒杯所剩容量加完即可
            totalValue += maxCapacity * values[i];
            break;
        }
    }

    printf("%d", totalValue);
    // free memory
    free(values);
    free(maxAdded);
    return 0;
}

void bubbleSort(int length) {
    // 从大到小排序
    for (int i = 0; i < length - 1; i++) {
        for (int j = 0; j < length - i - 1; j++) {
            if (values[j] < values[j + 1]) {
                swap(j, j + 1);
            }
        }
    }
}

void swap(int indexOne, int indexTwo) {
    int tempVal = values[indexOne];
    values[indexOne] = values[indexTwo];
    values[indexTwo] = tempVal;

    int tempAdded = maxAdded[indexOne];
    maxAdded[indexOne]= maxAdded[indexTwo];
    maxAdded[indexTwo] = tempAdded;
}
