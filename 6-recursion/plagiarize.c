//
// Created by Zyi on 2021/11/15.
//
#include <stdio.h>
#include <malloc.h>

int findSource(int* students, int index);

int main() {
    int studentNumber;
    scanf("%d", &studentNumber);

    int* students = malloc(studentNumber * sizeof(int));

    // input of student index
    for (int i = 0; i < studentNumber; i++) {
        scanf("%d", &students[i]);
    }

    // output
    for (int i = 0; i < studentNumber; i++) {
        printf("%d ", findSource(students, i + 1));
    }

    free(students);
    return 0;
}

int findSource(int* students, int index) {
    // index范围为1 - n
    // 注意索引是从0 - n-1的

    // base case
    if (students[index - 1] == index) {
        return index;
    } else {
        // recursion
        return findSource(students, students[index - 1]);
    }
}
