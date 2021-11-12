//
// Created by Zyi on 2021/11/12.
//
#include <stdio.h>
#include <malloc.h>
#include <math.h>

double calculate(double x, int* coef, int coefNumber);

int main()
{
    int coefNumber;
    scanf("%d", &coefNumber);
    // 一个多项式加上常数总共有n+1个系数(假设最高项次数为n)
    int* coef = malloc((coefNumber + 1) * sizeof(int));

    for (int i = 0; i < coefNumber + 1; i++) {
        scanf("%d", &coef[i]);
    }

    double left, right;
    scanf("%lf %lf", &left, &right);

    while (right - left > 10e-20) {
        double pointOne = left + (right - left) / 3.0;
        double pointTwo = left + (right - left) * 2 / 3.0;
        double fPOne = calculate(pointOne, coef, coefNumber);
        double fPTwo = calculate(pointTwo, coef, coefNumber);

        if (fabs(fPOne - fPTwo) < 10e-8 || fPOne > fPTwo) {
            right = pointTwo;
        } else {
            left = pointOne;
        }
    }

    printf("%.6lf", left);
    free(coef);
}

double calculate(double x, int* coef, int coefNumber) {
    double res = 0;
    double product = 1;

    for (int i = coefNumber; i >= 0; i--) {
        res += coef[i] * product;
        product *= x;
    }

    return res;
}