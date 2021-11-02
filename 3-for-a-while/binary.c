//
// Created by Zyi on 2021/11/1.
//
#include <stdio.h>
#include <malloc.h>

int main() {
    int n;
    // 变长数组
    char* binaryNumber;

    scanf("%d", &n);
    binaryNumber = (char*) malloc(n * sizeof(char));
    // %s是读入一个字符串，读入的数据会以'\0'结尾
    scanf("%s", binaryNumber);

    int ans = 0;
    long long product = 1;
    for (int i = n - 1; i >= 0; i--) {
        if (binaryNumber[i] == '1') {
            ans += product;
        }
        product *= 2;
    }

    printf("%d", ans);
    free(binaryNumber);

    return 0;
}
