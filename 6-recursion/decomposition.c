//
// Created by Zyi on 2021/11/15.
//
#include <stdio.h>

void findDecomposition(int n);

int main() {
    int n;
    scanf("%d", &n);

    findDecomposition(n);
    return 0;
}

void findDecomposition(int n) {
    if (n == 0) {
        return;
    }
    if (n == 1) {
        printf("1\n");
    } else {
        for (int i = 1; i <= n; i++) {
            printf("%d ", i);
            findDecomposition(n - i);
        }
    }
}
