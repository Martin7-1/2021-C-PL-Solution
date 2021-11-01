//
// Created by Zyi on 2021/11/1.
//
#include <stdio.h>
#include <malloc.h>

int main()
{
    int n;
    scanf("%d", &n);
    // 获取换行符
    getchar();

    char* str = (char*) malloc(n * sizeof(char));
    scanf("%s", str);

    int left = 0;
    int right = n - 1;
    while (left <= right) {
        if (str[left] == '?') {
            str[left] = str[right];
        } else if (str[right] == '?') {
            str[right] = str[left];
        }
        left++;
        right--;
    }

    printf("%s", str);
}
