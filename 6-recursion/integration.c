//
// Created by Zyi on 2021/11/16.
//
#include <stdio.h>
#include <malloc.h>
#include <math.h>

double calculate(double* coef, int coefNumber, double x);
double simpsonIntegration(int* coef, int coefNumber, double left, double right);
double simpsonMethod(int* coef, int coefNumber, double left, double right);

int main() {
    int n, p;
    scanf("%d %d", &n, &p);
    int* coef = malloc((n+1) * sizeof(int));
    for (int i = 0; i <= n; i++) {
        scanf("%d", &coef[i]);
    }

    // 待积区间
    int a, b;
    scanf("%d %d", &a, &b);
    double ans = 0.0;

    if (p == 1) {
        // p == 1时我们用常规积分方法
        double* integrationCoef = malloc((n + 1) * sizeof(double));
        double temp = n;
        for (int i = n; i >= 0; i--) {
            integrationCoef[i] = coef[i] / (temp + 1);
            temp--;
        }
        // F(b) - F(a)
        ans = calculate(integrationCoef, n, b) - calculate(integrationCoef, n, a);
        free(integrationCoef);
    } else {
        // adaptive simpson's method
        ans = simpsonIntegration(coef, n, a, b);
    }

    printf("%lf", ans);
    free(coef);
    return 0;
}

double calculate(double* coef, int coefNumber, double x) {
    double ans = 0.0;
    double product = x;

    for (int i = 0; i <= coefNumber; i++) {
        ans += coef[i] * product;
        product *= x;
    }

    return ans;
}

double simpsonIntegration(int* coef, int coefNumber, double left, double right) {
    double middle = (right + left) / 2.0;
    double sl = simpsonMethod(coef, coefNumber, left, middle);
    double sr = simpsonMethod(coef, coefNumber, middle, right);
    double s = simpsonMethod(coef, coefNumber, left, right);
    if (fabs(sl + sr - s) <= 15e-4) {
        return sl + sr +(sl + sr - s) / 15;
    } else {
        return simpsonIntegration(coef, coefNumber, left, middle) + simpsonIntegration(coef, coefNumber, middle, right);
    }
}

double simpsonMethod(int* coef, int coefNumber, double left, double right) {
    // 用辛普森公式计算的值
    double middle = (right + left) / 2.0;
    return (right - left) * (4 * calculate(coef, coefNumber, middle) + calculate(coef, coefNumber, left) + calculate(coef, coefNumber, right)) / 6;
}
