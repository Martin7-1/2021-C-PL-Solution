//
// Created by Zyi on 2021/11/15.
//
#include <stdio.h>
#include <malloc.h>

int length;
int** intervals;

void findInterval(int* arr, int left, int right);

int main() {
    scanf("%d", &length);
    int* arr = malloc(length * sizeof(int));
    intervals = malloc(length * sizeof(int*));

    for (int i = 0; i < length; i++) {
        intervals[i] = malloc(2 * sizeof(int));
    }

    for (int i = 0; i < length; i++) {
        scanf("%d", &arr[i]);
    }

    findInterval(arr, 0, length - 1);
    for (int i = 0; i < length; i++) {
        printf("%d %d\n", intervals[i][0], intervals[i][1]);
        free(intervals[i]);
    }
    free(intervals);
    free(arr);
    return 0;
}

void findInterval(int* arr, int left, int right) {
    if (left > right) {
        return;
    }
    if (left == right) {
        intervals[left][0] = left + 1;
        intervals[left][1] = right + 1;
    } else {
        int max = 0;
        int index = -1;
        for (int i = left; i <= right; i++) {
            if (arr[i] > max) {
                max = arr[i];
                index = i;
            }
        }
        intervals[index][0] = left + 1;
        intervals[index][1] = right + 1;
        findInterval(arr, left, index - 1);
        findInterval(arr, index + 1, right);
    }
}
