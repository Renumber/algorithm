/*
수 N개가 주어졌을 때, i번째 수부터 j번째 수까지 합을 구하는 프로그램을 작성하시오.

https://www.acmicpc.net/problem/11659
*/

#include <iostream>
#include <algorithm>

using namespace std;

int sum[100001];

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, m, num1, num2;

    cin >> n >> m;

    for (int i = 1; i <= n; i++) {
        cin >> sum[i];
        sum[i] += sum[i - 1];
    }
    for (int i = 0;i < m; i++) {
        cin >> num1 >> num2;
        cout << sum[num2] - sum[num1 - 1] << '\n';
    }
}