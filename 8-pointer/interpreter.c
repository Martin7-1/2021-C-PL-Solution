//
// Created by Zyi on 2021/12/4.
//
#include <stdio.h>

int main() {
    int x;
    scanf("%x", &x);

    printf("%d\n", x);
    if (x >= 0) {
        printf("%d", x);
    } else {
        printf("%lld", (long)x + 2147483648 * 2);
    }

    // 浮点数
}

