//
// Created by Zyi on 2021/11/16.
//
#include <stdio.h>
#include <math.h>

int coef[1000];
double integrationCoef[1000];
int coefNumber;
const double deviation = 1e-5;
int p;

double calculate(double x);
double f(double x);
double simpsonIntegration(double left, double right, double ans, double deviation, int step);
double simpsonMethod(double left, double right);

int main() {
    scanf("%d %d", &coefNumber, &p);
    for (int i = 0; i <= coefNumber; i++) {
        scanf("%d", &coef[i]);
    }

    // 待积区间
    int a, b;
    scanf("%d %d", &a, &b);
    double ans = 0.0;

    if (p == 1) {
        // p == 1时我们用常规积分方法
        double temp = coefNumber;
        for (int i = coefNumber; i >= 0; i--) {
            integrationCoef[i] = coef[i] / (temp + 1);
            temp--;
        }
        // F(b) - F(a)
        ans = calculate(b) - calculate(a);
    } else {
        // adaptive simpson's method
        ans = simpsonIntegration(a, b, simpsonMethod(a, b), deviation, 12);
    }

    printf("%lf", ans);
    return 0;
}

double calculate(double x) {
    double ans = 0.0;
    double product = x;

    for (int i = 0; i <= coefNumber; i++) {
        ans += integrationCoef[i] * product;
        product *= x;
    }

    return ans;
}

double f(double x) {
    double ans = 0.0;
    double product = 1;

    for (int i = 0; i <= coefNumber; i++) {
        ans += coef[i] * product;
        product *= x;
    }

    return pow(ans, p);
}

double simpsonIntegration(double left, double right, double ans, double eqs, int step) {
    double mid = (right + left) / 2.0;
    double fl = simpsonMethod(left, mid);
    double fr = simpsonMethod(mid, right);
    if (fabs(fl + fr - ans) <= 15 * eqs || step < 0) {
        return fl + fr + (fl + fr - ans) / 15;
    } else {
        // 误差除2
        return simpsonIntegration(left, mid, fl, eqs / 2, step - 1) + simpsonIntegration(mid, right, fr, eqs / 2, step - 1);
    }
}

double simpsonMethod(double left, double right) {
    // 用辛普森公式计算的值
    double middle = (right + left) / 2.0;
    return (right - left) * (4 * f(middle) + f(left) + f(right)) / 6;
}
