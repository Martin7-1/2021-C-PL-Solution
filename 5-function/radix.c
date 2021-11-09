//
// Created by Zyi on 2021/11/8.
//
#include <stdio.h>
#include <stdbool.h>

int changeRadix(char* operand, int radix);
int getLength(const char* string);

int main()
{
    char p[3], q[3], r[3];
    scanf("%s %s %s", p, q, r);
    bool isFindRadix = false;

    for (int x = 2; x <= 40; x++) {
        if (changeRadix(p, x) * changeRadix(q, x) == changeRadix(r, x)) {
            printf("%d", x);
            isFindRadix = true;
            break;
        }
    }

    if (!isFindRadix) {
        printf("%d", 0);
    }

    return 0;
}

int changeRadix(char* operand, int radix) {
    int res = 0;
    int length = getLength(operand);
    int product = 1;

    for (int i = length - 1; i >= 0; i--) {
        res += (operand[i] - '0') * product;
        product *= radix;
    }

    return res;
}

int getLength(const char* string) {
    int length = 0;

    while (string[length] != '\0') {
        length++;
    }

    return length;
}

