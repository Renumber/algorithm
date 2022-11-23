/*
수 N개 A1, A2, ..., AN이 주어진다. 이때, 연속된 부분 구간의 합이 M으로 나누어 떨어지는 구간의 개수를 구하는 프로그램을 작성하시오.

즉, Ai + ... + Aj (i ≤ j) 의 합이 M으로 나누어 떨어지는 (i, j) 쌍의 개수를 구해야 한다.

https://www.acmicpc.net/problem/10986
*/

#include <iostream>
#include <algorithm>

using namespace std;
long long cnt[1001];

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n, m;
    long long sum = 0, temp, res = 0;

    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> temp;
        sum = (temp + sum) % m;
        if (sum == 0) {
            res++;
        }

        cnt[sum]++;
    }

    for (int i = 0; i < m; i++) {
        res += cnt[i] * (cnt[i] - 1) / 2;
    }

    cout << res;


}