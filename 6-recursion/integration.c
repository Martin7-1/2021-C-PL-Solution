//
// Created by Zyi on 2021/11/16.
//
#include <stdio.h>
#include <math.h>

int coef[1000];
double integrationCoef[1000];
int coefNumber;
const double deviation = 1e-5;

double calculate(double x);
double calculateInt(double x, int p);
double simpsonIntegration(double left, double right, int p, double deviation);
double simpsonMethod(double left, double right, int p);

int main() {
    // 该方法在80分会遇到runtimeError，暂时还没解决
    int p;
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
        ans = simpsonIntegration(a, b, p, deviation);
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

double calculateInt(double x, int p) {
    double ans = 0.0;
    double product = 1;

    for (int i = 0; i <= coefNumber; i++) {
        ans += coef[i] * product;
        product *= x;
    }

    return pow(ans, p);
}

double simpsonIntegration(double left, double right, int p, double deviation) {
    double middle = (right + left) / 2.0;
    double sl = simpsonMethod(left, middle, p);
    double sr = simpsonMethod(middle, right, p);
    double s = simpsonMethod(left, right, p);
    if (fabs(sl + sr - s) <= 15 * deviation) {
        return sl + sr + (sl + sr - s) / 15;
    } else {
        // 误差除2
        return simpsonIntegration(left, middle, p, deviation / 2) + simpsonIntegration(middle, right, p, deviation / 2);
    }
}

double simpsonMethod(double left, double right, int p) {
    // 用辛普森公式计算的值
    double middle = (right + left) / 2.0;
    double ans1 = 4 * calculateInt(middle, p);
    double ans2 = calculateInt(left, p);
    double ans3 = calculateInt(right, p);
    return (right - left) * (ans1 + ans2 + ans3) / 6;
}
