//
// Created by Zyi on 2021/11/12.
//
#include <stdio.h>
#include <malloc.h>
#include <math.h>

void derivation(int* coef, int coefNumber);
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

    // 求导二分
    derivation(coef, coefNumber);
    double left;
    double right;
    scanf("%lf %lf", &left, &right);

    while (left <= right) {
        double middle = (left + right) / 2;
        double ans = calculate(middle, coef, coefNumber);
        if (fabs(ans) < 10e-6) {
            printf("%lf", middle);
            break;
        } else if (ans > 0) {
            left = middle;
        } else {
            right = middle;
        }
    }

    free(coefNumber);
    return 0;
}

void derivation(int* coef, int coefNumber) {
    // 求导
    int temp = coefNumber;
    for (int i = 0; i < coefNumber + 1; i++) {
        coef[i] *= temp;
        temp--;
    }
}

double calculate(double x, int* coef, int coefNumber) {
    double ans = 0;
    double product = 1;

    for (int i = coefNumber - 1; i >= 0; i--) {
        ans += product * coef[i];
        product *= x;
    }

    return ans;
}