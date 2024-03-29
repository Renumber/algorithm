﻿/*
N×N개의 수가 N×N 크기의 표에 채워져 있다. (x1, y1)부터 (x2, y2)까지 합을 구하는 프로그램을 작성하시오. (x, y)는 x행 y열을 의미한다.

예를 들어, N = 4이고, 표가 아래와 같이 채워져 있는 경우를 살펴보자.

1	2	3	4
2	3	4	5
3	4	5	6
4	5	6	7
여기서 (2, 2)부터 (3, 4)까지 합을 구하면 3+4+5+4+5+6 = 27이고, (4, 4)부터 (4, 4)까지 합을 구하면 7이다.

표에 채워져 있는 수와 합을 구하는 연산이 주어졌을 때, 이를 처리하는 프로그램을 작성하시오.

https://www.acmicpc.net/problem/11660
*/

#include <iostream>
#include <algorithm>

using namespace std;
constexpr auto MAX = 1024 * 1024 + 1;
int sum[MAX];

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, m, x1, x2, y1, y2, cnt = 0;

    cin >> n >> m;

    for (int i = 1; i <= n * n; i++) {
        cin >> sum[i];
        sum[i] += sum[i - 1];
    }

    for (int i = 0; i < m; i++) {
        cin >> y1 >> x1 >> y2 >> x2;
        cnt = 0;
        for (int j = y1; j <= y2; j++) {
            cnt += sum[(j - 1) * n + x2] - sum[(j - 1) * n + x1 - 1];
        }
        cout << cnt << '\n';
    }

}