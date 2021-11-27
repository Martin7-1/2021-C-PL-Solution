//
// Created by Zyi on 2021/11/22.
//
#include <stdio.h>
#include <stdbool.h>

long capacity[5];

bool remainOne(long a0, long b0, long c0);
bool down(long a0, long b0, long c0);

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
        // 等于原来的状态，只需要0步
        printf("Yes");
    } else if (remainOne(a0, b0, c0)) {
        // 全部移到一个杯子中，最多需要两步
        if (k >= 2) {
            printf("Yes");
        } else {
            printf("No");
        }
    } else {
        int step = 0;
        if (a0 == capacity[0] + capacity[1]) {
            capacity[0] += capacity[1];
            capacity[1] = 0;
            step++;
            if (down(a0, b0, c0)) {
                if (k >= 1) {
                    printf("Yes");
                } else {
                    printf("No");
                }
            } else {
                // 还未完成说明只需要移动c到b即可
                if (k >= 2) {
                    printf("Yes");
                } else {
                    printf("No");
                }
            }
        }
    }

    return 0;
}

bool remainOne(long a0, long b0, long c0) {
    if (a0 == 0) {
        if (b0 == 0 && c0 != 0) {
            return true;
        } else if (c0 == 0 && b0 != 0) {
            return false;
        }
    } else if (b0 == 0) {
        if (c0 == 0) {
            return true;
        } else {
            return false;
        }
    }

    return false;
}

bool down(long a0, long b0, long c0) {
    return capacity[0] == a0 && capacity[1] == b0 && capacity[2] == c0;
}