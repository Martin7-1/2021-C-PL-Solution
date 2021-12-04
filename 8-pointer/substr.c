//
// Created by Zyi on 2021/12/4.
//
#include <stdio.h>
#include <malloc.h>
#include <stdbool.h>

int ansLen = 0;

void findIndex(int sLen, int tLen, const char* s, const char* t, int* ans);
int strlen(const char* str);

int main() {
    char* s = malloc(100005 * sizeof(char));
    char* t = malloc(100005 * sizeof(char));
    int* ans = malloc(100005 * sizeof(int));
    scanf("%s", s);
    getchar();
    scanf("%s", t);
    int sLen = strlen(s);
    int tLen = strlen(t);

    findIndex(sLen, tLen, s, t, ans);

    for (int i = 0; i < ansLen; i++) {
        printf("%d ", *(ans + i));
    }

    free(s);
    free(t);
    free(ans);
    return 0;
}

int strlen(const char* str) {
    int len = 0;

    while (*(str + len) != '\0') {
        len++;
    }

    return len;
}

void findIndex(int sLen, int tLen, const char* s, const char* t, int* ans) {
    int i = 0;

    while (i < sLen) {
        if (*(s + i) == *t) {
            bool flag = true;
            // 首字母相同我们就检查s的后tLen位和t是否相同
            for (int j = i; j < tLen + i; j++) {
                if (*(s + j) != *(t + j - i)) {
                    flag = false;
                    break;
                }
            }

            if (flag) {
                *(ans + ansLen) = i;
                ansLen++;
            }
        }
        i++;
    }
}
