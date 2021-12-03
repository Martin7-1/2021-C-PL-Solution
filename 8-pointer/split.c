//
// Created by Zyi on 2021/12/3.
//
#include <stdio.h>
#include <malloc.h>
#include <string.h>

char** ans;
char* string;

void dicSort(char** strings, int len);

int main() {
    char splitChar;
    string = malloc(1e5 * sizeof(char));
    ans = malloc(100 * sizeof(char*));

    scanf("%s", string);
    getchar();
    scanf("%c", &splitChar);

    int len = strlen(string);
    int index = 0;
    int ansIndex = 0;
    int ansLength = 0;
    while (index < len) {
        int endIndex = index;
        while (*(string + endIndex) != splitChar && endIndex < len) {
            endIndex++;
        }
        *(ans + ansIndex) = malloc(100 * sizeof(char));
        for (int i = index; i < endIndex; i++) {
            *(*(ans + ansIndex) + i - index) = *(string + i);
        }
        // 结束标志
        *(*(ans + ansIndex) + endIndex - index) = '\0';
        ansIndex++;
        index = endIndex + 1;
        ansLength++;
    }

    // 按照字典序排序
    dicSort(ans, ansLength);
    for (int i = 0; i < ansLength; i++) {
        printf("%s\n", *(ans + i));
        free(*(ans + i));
    }

    free(ans);
    free(string);

    return 0;
}

void dicSort(char** strings, int len) {
    char* temp = malloc(100 * sizeof(char));
    for (int i = 0; i < len - 1; i++) {
        for (int j = 0; j < len - i - 1; j++) {
            if (strcmp(*(strings + j), *(strings + j + 1)) > 0) {
                strcpy(temp, *(strings + j));
                strcpy(*(strings + j), *(strings + j + 1));
                strcpy(*(strings + j + 1), temp);
            }
        }
    }

    // free memory
    free(temp);
}
