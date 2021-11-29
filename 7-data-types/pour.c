//
// Created by Zyi on 2021/11/22.
//
#include <stdio.h>
#include <stdbool.h>

long actual[5];
long expect[5];
int step = 0;
bool canPour = false;

void pour(int k);

int main() {
    int k;
    // 本题需要用long
    long va, vb, vc, a, b, c, a0, b0, c0;
    scanf("%d %ld %ld %ld %ld %ld %ld %ld %ld %ld", &k, &va, &vb, &vc, &a, &b, &c, &a0, &b0, &c0);
    actual[0] = a;
    actual[1] = b;
    actual[2] = c;
    expect[0] = a0;
    expect[1] = b0;
    expect[2] = c0;

    if (a + b + c != a0 + b0 + c0) {
        printf("No");
    } else {
        pour(k);
    }

    if (canPour) {
        printf("Yes");
    } else {
        printf("No");
    }
}

void pour(k) {
    if (actual[0] == expect[0] && actual[1] == expect[1] && actual[2] == expect[2] && step <= k) {
        canPour = true;
        return;
    } else if (step > k) {
        return;
    }

    // 递归尝试所有办法
    if (actual[0] < expect[0]) {
        actual[1] = 0;
        pour();
    } else if (actual[0] > expect[0]) {

    }
}