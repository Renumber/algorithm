﻿/*
지민이는 자신의 저택에서 MN개의 단위 정사각형으로 나누어져 있는 M×N 크기의 보드를 찾았다. 어떤 정사각형은 검은색으로 칠해져 있고, 나머지는 흰색으로 칠해져 있다. 지민이는 이 보드를 잘라서 K×K 크기의 체스판으로 만들려고 한다.

체스판은 검은색과 흰색이 번갈아서 칠해져 있어야 한다. 구체적으로, 각 칸이 검은색과 흰색 중 하나로 색칠되어 있고, 변을 공유하는 두 개의 사각형은 다른 색으로 칠해져 있어야 한다. 따라서 이 정의를 따르면 체스판을 색칠하는 경우는 두 가지뿐이다. 하나는 맨 왼쪽 위 칸이 흰색인 경우, 하나는 검은색인 경우이다.

보드가 체스판처럼 칠해져 있다는 보장이 없어서, 지민이는 K×K 크기의 체스판으로 잘라낸 후에 몇 개의 정사각형을 다시 칠해야겠다고 생각했다. 당연히 K×K 크기는 아무데서나 골라도 된다. 지민이가 다시 칠해야 하는 정사각형의 최소 개수를 구하는 프로그램을 작성하시오.

https://www.acmicpc.net/problem/25682
*/

#include <iostream>
#include <algorithm>
#include <limits.h>

using namespace std;

int n, m, k;
char chess[2001][2001];
int sum[2001][2001];

int calc(char c) {
    int res = INT_MAX;
    int val;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if ((i + j) % 2 == 0) {//같은 색
                val = chess[i][j] == c ? 0 : 1;
            }
            else {//다른 색
                val = chess[i][j] != c ? 0 : 1;
            }
            sum[i][j] = sum[i][j - 1] + sum[i - 1][j] - sum[i - 1][j - 1] + val;
        }
    }

    for (int i = k; i <= n; i++) {
        for (int j = k; j <= m; j++) {
            val = sum[i][j] - sum[i - k][j] - sum[i][j - k] + sum[i - k][j - k];
            res = min(val, res);
        }
    }

    return res;
}
int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> n >> m >> k;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> chess[i][j];
        }
    }

    cout << min(calc('B'), calc('W'));
}