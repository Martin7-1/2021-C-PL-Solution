//
// Created by Zyi on 2021/11/15.
//
#include <stdio.h>

void drawTriangle(int n);

int main() {
    // 本题还没做完
    int n;
    scanf("%d", &n);

    drawTriangle(n);
}

void drawTriangle(int n) {
    if (n == 1) {
        printf(" /\\\n");
        printf("/__\\\n");
    }
}
