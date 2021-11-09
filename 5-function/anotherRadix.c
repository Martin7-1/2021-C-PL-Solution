//
// Created by Zyi on 2021/11/9.
//
#include <stdio.h>
#include <math.h>

int* getDigit(int operand, int* arr);

int main() {
    int p, q, r;
    scanf("%d %d %d", &p, &q, &r);
    int operandOne[2];
    getDigit(p, operandOne);
    int operandTwo[2];
    getDigit(q, operandTwo);
    int result[2];
    getDigit(r, result);

    int a = 2 * operandOne[0] * operandTwo[0];
    int b = operandOne[0] * operandTwo[1] + operandOne[1] * operandTwo[0] - result[0];
    int c = operandOne[1] * operandTwo[1] - result[1];
    int radix = 0;

    if (a == 0) {
        // 一元一次方程
        // 整数解
        radix = -c / b;
    } else {
        int delta = (int) (sqrt(b * b - 4 * a * c));
        radix = (-b + delta) / 2 * a;
    }

    printf("%d", radix);
    return 0;
}

int* getDigit(int operand, int* arr) {
    // 获得每一位，如果只有一位的话就补0
    if (operand < 10) {
        arr[0] = 0;
        arr[1] = operand;
    } else {
        arr[0] = operand / 10;
        arr[1] = operand % 10;
    }

    return arr;
}
