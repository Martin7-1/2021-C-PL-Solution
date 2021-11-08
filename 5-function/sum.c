//
// Created by Zyi on 2021/11/8.
//
#include <stdio.h>

int getSum(int n, int t);

int main()
{
    int n;
    int t;
    scanf("%d %d", &n, &t);

    int sum = getSum(n, t);

    printf("%d", sum);
    return 0;
}

int getSum(int n, int t) {
    int sum = 0;
    int product = t;

    for (int i = 0; i < n; i++) {
        sum += product;
        product *= 10;
        product += t;
    }

    return sum;
}

