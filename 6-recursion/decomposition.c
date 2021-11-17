//
// Created by Zyi on 2021/11/15.
//
#include <stdio.h>

int arr[10005] = {1};
int n;

void findDecomposition(int x, int t);
void consolePrint(int t);

int main() {
    scanf("%d", &n);
    findDecomposition(n, 1);
    printf("%d", n);
    return 0;
}

void findDecomposition(int x, int t) {
    int i;

    for (i = arr[t - 1]; i <= x; i++) {
        if (i < n) {
            arr[t] = i;
            x -= i;
            if (x == 0) {
                // output
                consolePrint(t);
            } else {
                // x > 0则继续递归
                findDecomposition(x, t + 1);
            }
            // 回溯
            x += i;
        }
    }
}

void consolePrint(int t) {
    for (int i = 1; i < t; i++) {
        printf("%d ", arr[i]);
    }
    printf("%d\n", arr[t]);
}
