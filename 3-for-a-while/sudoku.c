//
// Created by Zyi on 2021/11/1.
//
#include <stdio.h>

const int ROW_NUMBER = 9;
const int COLUMN_NUMBER = 9;

void clearCheck(int* check);

int main()
{
    int arr[ROW_NUMBER][COLUMN_NUMBER];
    int check[ROW_NUMBER];

    // initialize check array
    for (int i = 0; i < ROW_NUMBER; i++) {
        check[i] = 0;
    }

    for (int i = 0; i < ROW_NUMBER; i++) {
        for (int j = 0; j < COLUMN_NUMBER; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // 首先来判断行和列
    // 首先是行
    int isCorrectRow = 1;
    for (int i = 0; i < ROW_NUMBER; i++) {
        // 记录每一行之后都要清空该行的数据
        clearCheck(check);
        for (int j = 0; j < COLUMN_NUMBER; j++) {
            // 判断数字是否在1 - 9之内
            if (arr[i][j] > 9 || arr[i][j] < 1) {
                isCorrectRow = 0;
                break;
            }
            // 对应位置出现次数增加
            check[arr[i][j] - 1]++;
            if (check[arr[i][j] - 1] > 1) {
                isCorrectRow = 0;
                break;
            }
        }

        if (!isCorrectRow) {
            printf("NO");
            break;
        }
    }

    // 再来是列，如果行出错的话就不用处理列了
    int isCorrectColumn = 1;
    if (isCorrectRow) {
        for (int j = 0; j < COLUMN_NUMBER; j++) {
            clearCheck(check);
            for (int i = 0; i < ROW_NUMBER; i++) {
                if (arr[i][j] > 9 || arr[i][j] < 1) {
                    isCorrectColumn = 0;
                    break;
                }
                check[arr[i][j] - 1]++;
                if (check[arr[i][j] - 1] > 1) {
                    isCorrectColumn = 0;
                    break;
                }
            }

            if (!isCorrectColumn) {
                printf("NO");
                break;
            }
        }
    }

    // 再来是块
    int isCorrectBlock = 1;
    if (isCorrectRow && isCorrectColumn) {
        int rowIndex = 0;
        while (rowIndex < ROW_NUMBER) {
            int columnIndex = 0;

            while (columnIndex < COLUMN_NUMBER) {
                clearCheck(check);

                for (int i = rowIndex; i < rowIndex + 3; i++) {
                    for (int j = columnIndex; j < columnIndex + 3; j++) {
                        if (arr[i][j] > 9 || arr[i][j] < 1) {
                            isCorrectBlock = 0;
                            break;
                        }
                        check[arr[i][j] - 1]++;
                        if (check[arr[i][j] - 1] > 1) {
                            isCorrectBlock = 0;
                            break;
                        }
                    }

                    if (!isCorrectBlock) {
                        printf("NO");
                        break;
                    }
                }

                columnIndex += 3;
                if (!isCorrectBlock) {
                    break;
                }
            }

            rowIndex += 3;
            if (!isCorrectBlock) {
                break;
            }
        }
    }

    if (isCorrectRow && isCorrectColumn && isCorrectBlock) {
        printf("YES");
    }

    return 0;
}

void clearCheck(int* check) {
    for (int i = 0; i < ROW_NUMBER; i++) {
        check[i] = 0;
    }
}
