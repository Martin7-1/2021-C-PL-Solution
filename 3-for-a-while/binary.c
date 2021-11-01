//
// Created by Zyi on 2021/11/1.
//
#include <stdio.h>
#include <malloc.h>

int main() {
    int n;
    char* binaryNumber;
    int* arr;
    scanf("%d", &n);
    binaryNumber = (char*) malloc(n * sizeof(char));
    scanf("%s", binaryNumber);

    arr = (int*) malloc(n * sizeof(n));
    for (int i = 0; i < n; i++) {
        if (binaryNumber[i] == '1') {
            arr[i] = 1;
        } else {
            arr[i] = 0;
        }
    }

    long long ans = 0;
    long long product = 1;
    for (int i = n - 1; i >= 0; i--) {
        ans += arr[i] * product;
        product *= 2;
    }

    printf("%lld", ans);
    free(arr);

    return 0;
}
