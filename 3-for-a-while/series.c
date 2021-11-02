//
// Created by Zyi on 2021/11/1.
//
#include <stdio.h>
#include <math.h>

int main()
{
    int n, x;
    double ans = 0;
    scanf("%d %d", &n, &x);

    // 用一个数来记录阶乘，减小时间复杂度
    double product = 1;
    for (int i = 0; i <= n; i++) {
        // 这句增加了不少多余的计算，我们该怎么优化？
        double temp = pow(x, i);
        if (i >= 1) {
            // i = 0; i = 1时阶乘都是1
            product *= i;
        }
        ans += temp / product;
    }

    printf("%.3lf", ans);

    return 0;
}

