//
// Created by Zyi on 2021/11/8.
//
#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPrime(int operand);
int flipNumber(int operand);

int main()
{
    int n;
    int absolutePrimeCount = 0;
    scanf("%d", &n);

    for (int i = 2; i <= n; i++) {
        if (isPrime(i) && isPrime(flipNumber(i))) {
            absolutePrimeCount++;
        }
    }

    printf("%d", absolutePrimeCount);
    return 0;
}

bool isPrime(int operand)
{
    if (operand == 2) {
        return true;
    }

    for (int i = 2; i <= sqrt(operand + 0.5); i++) {
        if (operand % i == 0) {
            return false;
        }
    }

    return true;
}

int flipNumber(int operand)
{
    // 翻转数字
    // 小于等于1000，最多四位
    int arr[4];
    int index = 0;
    int length = 0;

    while (operand != 0) {
        arr[index++] = operand % 10;
        operand /= 10;
        length++;
    }

    // 返回从低到高
    int newOperand = 0;
    int product = 1;
    for (int i = length - 1; i >= 0; i--) {
        newOperand += arr[i] * product;
        product *= 10;
    }

    return newOperand;
}
