//
// Created by Zyi on 2021/11/9.
//
#include <stdio.h>
#include <malloc.h>
#include <string.h>

int findLcp(const char* strA, const char* strB);
void moveBackward(char* str, char ch);

int main()
{
    int strNumber;
    int quest;
    scanf("%d %d", &strNumber, &quest);
    // 二维数组
    char** pStrings = (char**) malloc(strNumber * sizeof(char*));
    for (int i = 0; i < strNumber; i++) {
        pStrings[i] = (char*) malloc(1000 * sizeof(char));
        // 读入字符串
        // 这里需要注意读入的是空字符串的情况
        scanf("%s", pStrings[i]);
    }

    for (int i = 0; i < quest; i++) {
        int stringA, stringB;
        scanf("%d %d", &stringA, &stringB);
        int commonLength = findLcp(pStrings[stringA - 1], pStrings[stringB - 1]);
        printf("%d\n", commonLength);
    }

    return 0;
}

int findLcp(const char* strA, const char* strB) {
    // 找两个字符串的公共前缀
    int index = 0;
    while (strA[index] == strB[index]) {
        index++;
    }

    return index;
}

