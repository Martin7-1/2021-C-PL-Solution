//
// Created by Zyi on 2021/11/22.
//
#include <stdio.h>
#include <malloc.h>
#include <stdbool.h>

char stack[100005];
char** brackets;

char pop();
void push(char x);
// 清空栈元素，恢复指针
void clear();
bool isLeftBracket(char bracket);
bool isRightBracket(char bracket);
bool isMatch(char leftBracket, char rightBracket);
int pointer = -1;

int main() {
    // 这道题其实是栈的应用
    // 遇到左括号我们就推入栈
    // 遇到右括号就把当前栈顶元素弹出，看是否和该右括号匹配即可
    int dataLength;
    scanf("%d", &dataLength);
    brackets = malloc(dataLength * sizeof(char*));

    for (int i = 0; i < dataLength; i++) {
        brackets[i] = malloc(100005 * sizeof(char));
        scanf("%s", brackets[i]);
        // 读一个换行符
        getchar();
        int index = 0;
        bool isStdBracket= true;
        while (brackets[i][index] != '\0') {
            // 找到字符串结尾的办法就是找'\0'
            if (isLeftBracket(brackets[i][index])) {
                push(brackets[i][index]);
            } else if (isRightBracket(brackets[i][index])) {
                char leftBracket = pop();
                if (!isMatch(leftBracket, brackets[i][index])) {
                    isStdBracket = false;
                    break;
                }
            }
            index++;
        }

        if (isStdBracket) {
            printf("True\n");
        } else {
            printf("False\n");
        }
        clear();
        // free memory after use
        free(brackets[i]);
    }

    free(brackets);
    return 0;
}

char pop() {
    // 弹出栈顶的一个元素
    if (pointer == -1) {
        // 此时栈内没有元素
        // 我们用'\0'来代表为空
        return '\0';
    }

    char popElement = stack[pointer];
    pointer--;
    return popElement;
}

void push(char x) {
    // 往栈中压入一个元素
    pointer++;
    stack[pointer] = x;
}

void clear() {
    // 清空栈
    // 把指针变回-1即可，不需要清空里面的内容
    pointer = -1;
}

bool isLeftBracket(char bracket) {
    if (bracket == '{' || bracket == '(' || bracket == '[') {
        return true;
    }

    return false;
}

bool isRightBracket(char bracket) {
    if (bracket == '}' || bracket == ')' || bracket == ']') {
        return true;
    }

    return false;
}

bool isMatch(char leftBracket, char rightBracket) {
    if ((leftBracket == '{' && rightBracket == '}') ||
        (leftBracket == '[' && rightBracket == ']') ||
        (leftBracket == '(' && rightBracket == ')')) {
        return true;
    }

    return false;
}
