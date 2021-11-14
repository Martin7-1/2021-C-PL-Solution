//
// Created by Zyi on 2021/11/12.
//
#include <stdio.h>
#include <malloc.h>

long double calculate(long double x, int* coef, int coefNumber);

int main() {
    int coefNumber;

    scanf("%d", &coefNumber);
    // 申请动态数组
    int* coef = malloc((coefNumber + 1) * sizeof(int));
    for (int i = 0; i <= coefNumber; i++) {
        // 获得系数
        scanf("%d", &coef[i]);
    }

    long double left;
    long double right;
    scanf("%Lf %Lf", &left, &right);

    while (right - left >= 1e-8) {
        long double pointOne = left + (right - left) / 3;
        long double pointTwo = left + (right - left) / 3 * 2;
        long double fPOne = calculate(pointOne, coef, coefNumber);
        long double fPTwo = calculate(pointTwo, coef, coefNumber);

        if (fPOne >= fPTwo) {
            right = pointTwo;
        } else {
            left = pointOne;
        }
    }

    printf("%.6Lf", left);

    return 0;
}

long double calculate(long double x, int* coef, int coefNumber) {
    // 计算f(x)
    long double ans = 0.0f;
    long double product = 1;

    for (int i = coefNumber; i >= 0; i--) {
        ans += coef[i] * product;
        product *= x;
    }

    return ans;
}