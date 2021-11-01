//
// Created by Zyi on 2021/11/1.
//
#include <stdio.h>

int isCorner(int rowIndex, int columnIndex, int size);
int isEdge(int rowIndex, int columnIndex, int size);

int main()
{
    int n;
    char arr[100][100];

    scanf("%d", &n);
    getchar();

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%c", &arr[i][j]);
        }
        getchar();
    }

    // 遍历所有'o'，注意边界情况
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[i][j] == 'o') {
                int bombNum = 0;
                // 此处不是地雷
                // 判断其属不属于特殊情况
                if (isCorner(i, j, n)) {
                    // 在角上，只需要判断相邻的三个位置
                    if (i == 0 && j == 0) {
                        // 搜索的三个位置分别为arr[i][j+1],arr[i+1][j],arr[i+1][j+1];
                        if (arr[i][j+1] == '*') {
                            bombNum++;
                        }
                        if (arr[i+1][j] == '*') {
                            bombNum++;
                        }
                        if (arr[i+1][j+1] == '*') {
                            bombNum++;
                        }
                    } else if (i == 0 && j == n - 1) {
                        // 搜索的三个位置分别为arr[i][j-1],arr[i+1][j],arr[i+1][j-1];
                        if (arr[i][j-1] == '*') {
                            bombNum++;
                        }
                        if (arr[i+1][j] == '*') {
                            bombNum++;
                        }
                        if (arr[i+1][j-1] == '*') {
                            bombNum++;
                        }
                    } else if (i == n - 1 && j == 0) {
                        // 搜索的三个位置分别为arr[i][j+1],arr[i-1][j],arr[i-1][j+1];
                        if (arr[i][j+1] == '*') {
                            bombNum++;
                        }
                        if (arr[i-1][j] == '*') {
                            bombNum++;
                        }
                        if (arr[i-1][j+1] == '*') {
                            bombNum++;
                        }
                    } else if (i == n - 1 && j == n - 1) {
                        // 搜索的三个位置分别为arr[i][j-1],arr[i-1][j],arr[i-1][j-1];
                        if (arr[i][j-1] == '*') {
                            bombNum++;
                        }
                        if (arr[i-1][j] == '*') {
                            bombNum++;
                        }
                        if (arr[i-1][j+1] == '*') {
                            bombNum++;
                        }
                    }
                    arr[i][j] = bombNum + '0';
                } else if (isEdge(i, j, n)) {
                    // 在边上，需要判断相邻的五个位置
                    if (i == 0) {
                        // 减少了上方的位置
                        for (int k = i; k <= i + 1; k++) {
                            for (int m = j - 1; m <= j + 1; m++) {
                                if (arr[k][m] == '*') {
                                    bombNum++;
                                }
                            }
                        }
                    } else if (i == n - 1) {
                        // 减少下方的位置
                        for (int k = i - 1; k <= i; k++) {
                            for (int m = j - 1; m <= j + 1; m++) {
                                if (arr[k][m] == '*') {
                                    bombNum++;
                                }
                            }
                        }
                    } else if (j == 0) {
                        // 减少左方的位置
                        for (int k = i - 1; k <= i + 1; k++) {
                            for (int m = j; m <= j + 1; m++) {
                                if (arr[k][m] == '*') {
                                    bombNum++;
                                }
                            }
                        }
                    } else if (j == n - 1) {
                        // 减少右方的位置
                        for (int k = i - 1; k <= i + 1; k++) {
                            for (int m = j - 1; m <= j; m++) {
                                if (arr[k][m] == '*') {
                                    bombNum++;
                                }
                            }
                        }
                    }

                    arr[i][j] = bombNum + '0';
                } else {
                    // 一般情况，周围的八个位置
                    for (int k = i - 1; k <= i + 1; k++) {
                        for (int m = j - 1; m <= j + 1; m++) {
                            if (arr[k][m] == '*') {
                                bombNum++;
                            }
                        }
                    }

                    arr[i][j] = bombNum + '0';
                }
            }
        }
    }

    // 输出答案
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%c", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

int isCorner(int rowIndex, int columnIndex, int size) {
    int isCorner = 0;

    if (rowIndex == 0) {
        if (columnIndex == 0 || columnIndex == size - 1) {
            isCorner = 1;
        }
    } else if (rowIndex == size - 1) {
        if (columnIndex == 0 || columnIndex == size - 1) {
            isCorner = 1;
        }
    }

    return isCorner;
}

int isEdge(int rowIndex, int columnIndex, int size) {
    // 判断该点在不在边上
    int isEdge = 0;

    if (rowIndex == 0 || rowIndex == size - 1 || columnIndex == 0 || columnIndex == size - 1) {
        isEdge = 1;
    }

    return isEdge;
}
