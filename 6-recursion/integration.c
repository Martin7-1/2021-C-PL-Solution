//
// Created by Zyi on 2021/11/16.
//
#include <stdio.h>
#include <malloc.h>
#include <math.h>

double calculate(double coef[], int coefNumber, double x, int p);
double calculateInt(int coef[], int coefNumber, double x, int p);
double simpsonIntegration(int coef[], int coefNumber, double left, double right, int p);
double simpsonMethod(int coef[], int coefNumber, double left, double right, int p);

int main() {
    int n, p;
    scanf("%d %d", &n, &p);
    int* coef = malloc((n + 1) * sizeof(int));
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
        ans = calculate(integrationCoef, n, b, p) - calculate(integrationCoef, n, a, p);
        free(integrationCoef);
    } else {
        // adaptive simpson's method
        ans = simpsonIntegration(coef, n, a, b, p);
    }

    printf("%lf", ans);
    free(coef);
    return 0;
}

double calculate(double coef[], int coefNumber, double x, int p) {
    double ans = 0.0;
    double product = x;

    for (int i = 0; i <= coefNumber; i++) {
        ans += coef[i] * product;
        product *= x;
    }

    return pow(ans, p);
}

double calculateInt(int coef[], int coefNumber, double x, int p) {
    double ans = 0.0;
    double product = 1;

    for (int i = 0; i <= coefNumber; i++) {
        ans += coef[i] * product;
        product *= x;
    }

    return pow(ans, p);
}

double simpsonIntegration(int coef[], int coefNumber, double left, double right, int p) {
    double middle = (right + left) / 2.0;
    double sl = simpsonMethod(coef, coefNumber, left, middle, p);
    double sr = simpsonMethod(coef, coefNumber, middle, right, p);
    double s = simpsonMethod(coef, coefNumber, left, right, p);
    if (fabs(sl + sr - s) <= 15e-8) {
        return sl + sr +(sl + sr - s) / 15;
    } else {
        return simpsonIntegration(coef, coefNumber, left, middle, p) + simpsonIntegration(coef, coefNumber, middle, right, p);
    }
}

double simpsonMethod(int coef[], int coefNumber, double left, double right, int p) {
    // 用辛普森公式计算的值
    double middle = (right + left) / 2.0;
    double ans1 = 4 * calculateInt(coef, coefNumber, middle, p);
    double ans2 = calculateInt(coef, coefNumber, left, p);
    double ans3 = calculateInt(coef, coefNumber, right, p);
    return (right - left) * (ans1 + ans2 + ans3) / 6;
}
