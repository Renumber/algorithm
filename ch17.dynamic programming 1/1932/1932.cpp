﻿/*
        7
      3   8
    8   1   0
  2   7   4   4
4   5   2   6   5
위 그림은 크기가 5인 정수 삼각형의 한 모습이다.

맨 위층 7부터 시작해서 아래에 있는 수 중 하나를 선택하여 아래층으로 내려올 때, 이제까지 선택된 수의 합이 최대가 되는 경로를 구하는 프로그램을 작성하라. 아래층에 있는 수는 현재 층에서 선택된 수의 대각선 왼쪽 또는 대각선 오른쪽에 있는 것 중에서만 선택할 수 있다.

삼각형의 크기는 1 이상 500 이하이다. 삼각형을 이루고 있는 각 수는 모두 정수이며, 범위는 0 이상 9999 이하이다.

https://www.acmicpc.net/problem/1932
*/

#include <iostream>
#include <algorithm>

using namespace std;

int arr[500][501];

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n, temp, res = 0;

    cin >> n;
    cin >> arr[0][1];
    for (int i = 1; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cin >> temp;
            arr[i][j + 1] = temp + max(arr[i - 1][j], arr[i - 1][j + 1]);
        }
    }

    for (int i = 1; i <= n; i++) {
        res = max(arr[n - 1][i], res);
    }

    cout << res;
}