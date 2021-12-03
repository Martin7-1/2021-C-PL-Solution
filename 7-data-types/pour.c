//
// Created by Zyi on 2021/11/22.
//
#include <stdio.h>

long a0;
long b0;
long c0;
long va;
long vb;
long vc;
int k;

void pour(int step, long remainA, long remainB, long remainC);

int main() {
    // 本题需要用long
    long a, b, c;
    scanf("%d %ld %ld %ld %ld %ld %ld %ld %ld %ld", &k, &va, &vb, &vc, &a, &b, &c, &a0, &b0, &c0);

    if (a0 > va || b0 > vb || c0 > vc) {
        printf("No");
    } else if (a0 == a && b0 == b && c0 == c) {
        printf("Yes");
    } else {
        pour(0, a, b, c);
    }

    return 0;
}

void pour(int step, long remainA, long remainB, long remainC) {
    // base case
    if (step > k) {
        printf("No");
        return;
    } else if (remainA == a0 && remainB == b0 && remainC == c0) {
        printf("Yes");
        return;
    }

    // recursion
    if (remainA < a0) {
        // 此时需要把B或C倒入A
        if (remainB != b0) {
            if (remainA + remainB > va) {
                pour(step + 1, va, 0, remainC);
            } else {
                pour(step + 1, remainA + remainB, 0, remainC);
            }
        } else if (remainC != c0) {
            if (remainA + remainC > va) {
                pour(step + 1, va, remainB, 0);
            } else {
                pour(step + 1, remainA + remainC, remainB, 0);
            }
        } else {
            printf("No");
        }
    } else if (remainB < b0) {
        if (remainA != a0) {
            if (remainA + remainB > vb) {
                pour(step + 1, 0, vb, remainC);
            } else {
                pour(step + 1, 0, remainB + remainA, remainC);
            }
        } else if (remainC != c0) {
            if (remainB + remainC > vb) {
                pour(step + 1, remainA, vb, 0);
            } else {
                pour(step + 1, remainA, remainB + remainC, 0);
            }
        } else {
            printf("No");
        }
    } else if (remainC < c0) {
        if (remainA != a0) {
            if (remainA + remainC > vc) {
                pour(step + 1, 0, remainB, vc);
            } else {
                pour(step + 1, 0, remainB, remainC + remainA);
            }
        } else if (remainB != b0) {
            if (remainB + remainC > vc) {
                pour(step + 1, remainA, 0, vc);
            } else {
                pour(step + 1, remainA, 0, remainC + remainB);
            }
        } else {
            printf("No");
        }
    } else {
        printf("No");
    }
}
