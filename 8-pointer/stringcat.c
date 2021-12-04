//
// Created by Zyi on 2021/12/4.
//
#include <stdio.h>
#include <malloc.h>

void mystrcat(char* str1, char* str2);
int mystrlen(const char* str);

int main() {
    char* str1 = malloc(10000 * sizeof(char));
    char* str2 = malloc(2000 * sizeof(char));
    int n;
    scanf("%d", &n);
    getchar();

    for (int i = 0; i < n; i++) {
        scanf("%s", str1);
        getchar();
        scanf("%s", str2);

        mystrcat(str1, str2);

        printf("%s\n", str1);
        getchar();
    }

    free(str1);
    free(str2);
    return 0;
}

int mystrlen(const char* str) {
    int len = 0;

    while (*(str + len) != '\0') {
        len++;
    }

    return len;
}

void mystrcat(char* str1, char* str2) {
    int len1 = mystrlen(str1);
    int len2 = mystrlen(str2);
    int endIndex = -1;

    for (int i = len2 - 1; i >= 0; i--) {
        if (*(str2 + i) == *(str1 + len1 - 1)) {
            int beginIndex = 0;
            // 与末尾相同
            for (int j = i; j >= 0; j--) {
                if (*(str2 + j) != *(str1 + len1 - 1 - (i - j))) {
                    beginIndex = j;
                    break;
                }
            }

            if (beginIndex == 0) {
                // 找到了
                endIndex = i;
                break;
            }
        }
    }

    if (endIndex == -1) {
        // 此时说明直接相连即可
        for (int i = len1; i <= len1 + len2; i++) {
            *(str1 + i) = *(str2 + i - len1);
            // 取等是为了把'\0'也加进去
        }
    } else {
        for (int i = len1; i <= len1 + len2 - endIndex; i++) {
            *(str1 + i) = *(str2 + i - len1 + endIndex + 1);
        }
    }
}
