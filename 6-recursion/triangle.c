//
// Created by Zyi on 2021/11/15.
//
#include <stdio.h>

char ans[2010][3010];

void solve(int n, int x, int y);

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= (1 << n); i++) {
        for (int j = 1; j <= (1 << (n+1)); j++) {
            ans[i][j] = ' ';
        }
    }

    solve(n, 1, 1);
    for (int i = 1; i <= (1 << n); i++) {
        for (int j = 1; j <= (1 << (n+1)); j++) {
            printf("%c", ans[i][j]);
        }
        printf("\n");
    }

    return 0;
}

void solve(int n, int x, int y) {
    if (n == 1) {
        ans[x][y+1] = ans[x+1][y] = '/';
        ans[x][y+2] = ans[x+1][y+3] = '\\';
        ans[x+1][y+1] = ans[x+1][y+2] = '_';
        return;
    }

    solve(n - 1, x, y + (1 << (n - 1)));
    solve(n - 1, x + (1 << (n - 1)), y);
    solve(n - 1, x + (1 << (n - 1)), y + (1 << n));
}
