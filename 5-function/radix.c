//
// Created by Zyi on 2021/11/8.
//
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int changeRadix(const char* operand, int radix);
bool haveBiggerNumber(const char* operand, int radix);

int main()
{
    char p[100], q[100], r[100];
    scanf("%s %s %s", p, q, r);
    bool isFindRadix = false;

    // 笨蛋解法
    for (int x = 2; x <= 40; x++) {
        // 首先要判断x是不是大于这个数中的所有数
        if (haveBiggerNumber(p, x) || haveBiggerNumber(q, x) || haveBiggerNumber(r, x)) {
            continue;
        }
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

int changeRadix(const char* operand, int radix) {
    int res = 0;
    int length = strlen(operand);
    int product = 1;

    for (int i = length - 1; i >= 0; i--) {
        res += (operand[i] - '0') * product;
        product *= radix;
    }

    return res;
}

bool haveBiggerNumber(const char* operand, int radix) {
    // 判断operand中是否有大于radix的数
    int length = strlen(operand);

    for (int i = 0; i < length; i++) {
        if (operand[i] - '0' >= radix) {
            return true;
        }
    }

    return false;
}

