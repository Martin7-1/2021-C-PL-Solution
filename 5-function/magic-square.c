//
// Created by Zyi on 2021/11/9.
//
#include <stdio.h>
#include <malloc.h>

int main()
{
    int n;
    scanf("%d", &n);
    int** arr = malloc(n * sizeof(int*));

    for (int i = 0; i < n; i++) {
        arr[i] = malloc(n * sizeof(int));
    }

    int col, row;

    col = (n - 1) / 2;
    row = 0;

    arr[row][col] = 1;

    for(int i = 2; i <= n * n; i++) {
        if((i - 1) % n == 0 ) {
            row++;
        }
        else {
            // if row = 0, then row = N-1, or row = row - 1
            row--;
            row = (row + n) % n;

            // if col = N, then col = 0, or col = col + 1
            col ++;
            col %= n;
        }
        arr[row][col] = i;
    }

    // output
    for(row = 0; row < n; row++) {
        for(col = 0;col < n; col ++) {
            printf("%d ", arr[row][col]);
        }
        printf("\n");
    }

    // 释放内存
    for (int i  = n; i++) {
        free(arr[i]);
    }
    free(arr);

    return 0;

}

