//
// Created by Zyi on 2021/11/16.
//
#include <stdio.h>
#include <malloc.h>
#include <math.h>

int* coef;
double* integrationCoef;

double calculate(int coefNumber, double x);
double calculateInt(int coefNumber, double x, int p);
double simpsonIntegration(int coefNumber, double left, double right, int p, double deviation);
double simpsonMethod(int coefNumber, double left, double right, int p);

int main() {
    int n, p;
    double deviation = 1e-6;
    scanf("%d %d", &n, &p);
    coef = malloc((n + 1) * sizeof(int));
    for (int i = 0; i <= n; i++) {
        scanf("%d", &coef[i]);
    }

    // 待积区间
    int a, b;
    scanf("%d %d", &a, &b);
    double ans = 0.0;

    if (p == 1) {
        // p == 1时我们用常规积分方法
        integrationCoef = malloc((n + 1) * sizeof(double));
        double temp = n;
        for (int i = n; i >= 0; i--) {
            integrationCoef[i] = coef[i] / (temp + 1);
            temp--;
        }
        // F(b) - F(a)
        ans = calculate(n, b) - calculate(n, a);
        free(integrationCoef);
    } else {
        // adaptive simpson's method
        ans = simpsonIntegration(n, a, b, p, deviation);
    }

    printf("%lf", ans);
    free(coef);
    return 0;
}

double calculate(int coefNumber, double x) {
    double ans = 0.0;
    double product = x;

    for (int i = 0; i <= coefNumber; i++) {
        ans += integrationCoef[i] * product;
        product *= x;
    }

    return ans;
}

double calculateInt(int coefNumber, double x, int p) {
    double ans = 0.0;
    double product = 1;

    for (int i = 0; i <= coefNumber; i++) {
        ans += coef[i] * product;
        product *= x;
    }

    return pow(ans, p);
}

double simpsonIntegration(int coefNumber, double left, double right, int p, double deviation) {
    double middle = (right + left) / 2.0;
    double sl = simpsonMethod(coef, coefNumber, left, middle, p);
    double sr = simpsonMethod(coef, coefNumber, middle, right, p);
    double s = simpsonMethod(coef, coefNumber, left, right, p);
    if (fabs(sl + sr - s) <= 15 * deviation) {
        return sl + sr +(sl + sr - s) / 15;
    } else {
        // 误差除2
        return simpsonIntegration(coef, coefNumber, left, middle, p, deviation / 2) + simpsonIntegration(coef, coefNumber, middle, right, p, deviation / 2);
    }
}

double simpsonMethod(int coefNumber, double left, double right, int p) {
    // 用辛普森公式计算的值
    double middle = (right + left) / 2.0;
    double ans1 = 4 * calculateInt(coef, coefNumber, middle, p);
    double ans2 = calculateInt(coef, coefNumber, left, p);
    double ans3 = calculateInt(coef, coefNumber, right, p);
    return (right - left) * (ans1 + ans2 + ans3) / 6;
}
