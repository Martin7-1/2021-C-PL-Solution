//
// Created by Zyi on 2021/12/4.
//
#include <stdio.h>
#include <malloc.h>
#include <string.h>
#include <stdbool.h>

char* s;
char* t;
int ansLen = 0;
int* ans;

void findIndex();

int main() {
    s = malloc(1000005 * sizeof(char));
    t = malloc(1000005 * sizeof(char));
    ans = malloc(1000005 * sizeof(int));
    scanf("%s", s);
    getchar();
    scanf("%s", t);

    findIndex();

    for (int i = 0; i < ansLen; i++) {
        printf("%d ", *(ans + i));
    }
    free(s);
    free(t);
    free(ans);
    return 0;
}

void findIndex() {
    int i = 0;
    int sLen = strlen(s);
    int tLen = strlen(t);

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
                i += tLen;
            } else {
                i++;
            }
        } else {
            i++;
        }
    }
}
