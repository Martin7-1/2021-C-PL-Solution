//
// Created by Zyi on 2021/12/4.
//
#include <stdio.h>
#include <malloc.h>
#include <stdbool.h>

void capitalTitle(char* title);
int strlen(const char* str);
bool isCap(char letter);

int main() {
    char* title = malloc(4 * 1024 * sizeof(char));
    gets(title);

    capitalTitle(title);

    printf("%s", title);
    free(title);
    return 0;
}

int strlen(const char* str) {
    int len = 0;
    while (*(str + len) != '\0') {
        len++;
    }

    return len;
}

void capitalTitle(char* title) {
    bool isCapital = false;
    int len = strlen(title);
    for (int i = 0; i < len - 1; i++) {
        isCapital = isCap(*(title + i + 1));
        if (*(title + i) == ' ') {
            // 空格的后一格
            if (!isCapital) {
                *(title + i + 1) += 'A' - 'a';
            }
        } else {
            if (isCapital) {
                *(title + i + 1) -= 'A' - 'a';
            }
        }
    }

    // 需要把第一位再调回来
    if (!isCap(*title)) {
        *title += 'A' - 'a';
    }
}

bool isCap(char letter) {
    return letter >= 'A' && letter <= 'Z';
}


