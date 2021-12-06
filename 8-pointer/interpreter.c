//
// Created by Zyi on 2021/12/4.
//
#include <stdio.h>
#include <malloc.h>
#include <stdbool.h>

int mystrlen(const char* str);
int getInt(const char* digits);
int getUnsignedInt(const char* digits);
float getFloat(const char* digits);

int main() {
    char* digits = malloc(10 * sizeof(char));
    scanf("%s", digits);

    printf("%d\n", getInt(digits));
    printf("%d\n", getUnsignedInt(digits));
    printf("%f", getFloat(digits));

    free(digits);
    return 0;
}

int mystrlen(const char* str) {
    int len = 0;
    while (*(str + len) != '\0') {
        len++;
    }

    return len;
}

int getInt(const char* digits) {
    // 第一位是符号位
    bool isNegative = false;
    if ((*digits >= '8' && *digits <= '9') || (*digits >= 'a' && *digits <= 'f')) {
        isNegative = true;
    }

    int len = mystrlen(digits);
    int product = 1;
    int res = 0;
    for (int i = len - 1; i >= 1; i--) {
        res += (int)(*(digits + i) - '0') * product;
        product *= 16;
    }

    if (isNegative) {
        res *= -1;
    }

    return res;
}

int getUnsignedInt(const char* digits) {
    return 0;
}

float getFloat(const char* digits) {
    return 0.0;
}

