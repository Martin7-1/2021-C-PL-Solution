//
// Created by Zyi on 2021/11/22.
//
#include <stdio.h>
#include <stdbool.h>

long a0;
long b0;
long c0;
int k;

void pour(int step, long remainA, long remainB, long remainC);

int main() {
    // 本题需要用long
    long va, vb, vc, a, b, c;
    scanf("%d %ld %ld %ld %ld %ld %ld %ld %ld %ld", &k, &va, &vb, &vc, &a, &b, &c, &a0, &b0, &c0);

    if (a + b + c != a0 + b0 + c0) {
        printf("No");
    } else {
        pour(0, a, b, c);
    }

    return 0;
}

void pour(int step, long remainA, long remainB, long remainC) {
    if (step >= k) {
        printf("No");
        return;
    } else if (remainA == a0 && remainB == b0 && remainC == c0) {
        printf("Yes");
        return;
    }


}
