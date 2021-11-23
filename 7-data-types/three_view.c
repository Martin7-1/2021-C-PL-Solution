//
// Created by Zyi on 2021/11/23.
//
#include <stdio.h>
#include <malloc.h>

int** height;
int* maxColumnHeight;
int* maxRowHeight;
int row, column;

void printMainView();
void printLeftView();

int main() {
    scanf("%d %d", &row, &column);
    height = malloc(row * sizeof(int*));

    for (int i = 0; i < row; i++) {
        height[i] = malloc(column * sizeof(int));
        for (int j = 0; j < column; j++) {
            scanf("%d", &height[i][j]);
        }
    }

    // 找到最大值即可
    // 首先是主视图
    // 遍历每一列找到最大值即可
    maxColumnHeight = malloc(column * sizeof(int));
    for (int j = 0; j < column; j++) {
        int columnHeight = height[0][j];
        for (int i = 0; i < row; i++) {
            if (height[i][j] > columnHeight) {
                columnHeight = height[i][j];
            }
        }
        maxColumnHeight[j] = columnHeight;
    }

    maxRowHeight = malloc(row * sizeof(int));
    for (int i = 0; i < row; i++) {
        int rowHeight = height[i][0];
        for (int j = 0; j < column; j++) {
            if (height[i][j] > rowHeight) {
                rowHeight = height[i][j];
            }
        }
        maxRowHeight[i] = rowHeight;
    }

    // 打印主视图
    printMainView();
    printf("\n");
    printLeftView();

    // free memory
    for (int i = 0; i < row; i++) {
        free(height[i]);
    }
    free(height);
    free(maxColumnHeight);
    free(maxRowHeight);
    return 0;
}

void printMainView() {
    int maxHeight = 0;
    for (int i = 0; i < column; i++) {
        if (maxColumnHeight[i] > maxHeight) {
            maxHeight = maxColumnHeight[i];
        }
    }

    for (int i = maxHeight; i > 0; i--) {
        for (int j = 0; j < column; j++) {
            if (maxColumnHeight[j] == i) {
                printf("*");
                maxColumnHeight[j]--;
            } else {
                printf(" ");
            }
        }
        printf("\n");
        maxHeight--;
    }

}

void printLeftView() {
    int maxHeight = 0;
    for (int i = 0; i < row; i++) {
        if (maxRowHeight[i] > maxHeight) {
            maxHeight = maxRowHeight[i];
        }
    }

    for (int i = maxHeight; i > 0; i--) {
        for (int j = 0; j < row; j++) {
            if (maxRowHeight[j] == i) {
                printf("*");
                maxRowHeight[j]--;
            } else {
                printf(" ");
            }
        }
        printf("\n");
        maxHeight--;
    }
}
