//
// Created by Zyi on 2021/11/22.
//
#include <stdio.h>

int capacity[5];

int main() {
    int k;
    // 本题需要用long
    long va, vb, vc, a, b, c, a0, b0, c0;
    scanf("%d %ld %ld %ld %ld %ld %ld %ld %ld %ld", &k, &va, &vb, &vc, &a, &b, &c, &a0, &b0, &c0);
    capacity[0] = va;
    capacity[1] = vb;
    capacity[2] = vc;

    // 首先判断一些特殊情况
    if (a0 > va || b0 > vb || c0 > vc) {
        // 目标容量大于最大容量
        printf("No");
    } else if (a + b + c != a0 + b0 + c0) {
        // 总容量不相符
        printf("No");
    } else if (a0 == capacity[0] && b0 == capacity[1] && c0 == capacity[2]) {
        printf("Yes");
    } else {
        // 只有一种情况可以实现，就是目标杯子中的容量 = 某n个杯子的和
        // 只需讨论一个杯子，其他杯子的情况是相似的
        int step = 0;
        if (a0 == capacity[0] + capacity[1]) {
            // 把b倒入a
        }
    }
}