//
// Created by Zyi on 2021/11/15.
//
#include <stdio.h>

int countTile(int n);

int main() {
    int n;
    scanf("%d", &n);

    int count = countTile(n);

    printf("%d", count);
    return 0;
}

int countTile(int n) {
    // base case: n == 1 时，只有一种
    if (n == 1) {
        return 1;
    } else if (n == 2) {
        // 全是2x1或全是1x2
        return 2;
    } else {
        return countTile(n - 1) + countTile(n - 2);
    }
}
