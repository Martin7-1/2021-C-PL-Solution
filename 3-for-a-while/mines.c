//
// Created by Zyi on 2021/11/1.
//
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    // 读入换行
    getchar();
    char matrix[102][102];

    for (int i = 0; i <= n + 1; i++) {
        for (int j = 0; j <= n + 1; j++) {
            // 初始化一个 (n+2) x (n+2)的矩阵
            matrix[i][j] = 'o';
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            scanf("%c", &matrix[i][j]);
        }
        // 获取换行符
        getchar();
    }

    // 特殊处理，在matrix的外围再多围一圈o即可，即变成n+2 x n+2
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (matrix[i][j] == 'o') {
                int bombNum = 0;
                // 此时没有特殊情况，全部当成正常情况来处理
                for (int k = i - 1; k <= i + 1; k++) {
                    for (int m = j - 1; m <= j +1; m++) {
                        if (matrix[k][m] == '*') {
                            bombNum++;
                        }
                    }
                }

                matrix[i][j] = (char)(bombNum + '0');
            }
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            printf("%c", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

