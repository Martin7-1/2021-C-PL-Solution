//
// Created by Zyi on 2021/11/15.
//
#include <stdio.h>

int findAns(int a, int b);

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    // output: 杨辉三角第a行第b个数
    // 第a行第b个数 = 第a-1行第b-1个数 + 第a-1行第b个数
    int ans = findAns(a, b);
    printf("%d", ans);
    return 0;
}

int findAns(int a, int b) {
    // 隐藏条件:第i行有i个元素
    if (a == 1 || a == 2) {
        // 第一行和第二行的元素都是1
        return 1;
    } else if (b == 1 || b == a) {
        // 每一行的第一个和最后一个元素是1
        return 1;
    } else {
        return findAns(a - 1, b - 1) + findAns(a - 1, b);
    }
}

