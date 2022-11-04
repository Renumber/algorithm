/*
45656이란 수를 보자.

이 수는 인접한 모든 자리의 차이가 1이다. 이런 수를 계단 수라고 한다.

N이 주어질 때, 길이가 N인 계단 수가 총 몇 개 있는지 구해보자. 0으로 시작하는 수는 계단수가 아니다.

https://www.acmicpc.net/problem/10844
*/

#include <iostream>
#include <algorithm>

using namespace std;


int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, cnt = 0;

    int arr[10] = { 0, 1, 1, 1, 1, 1, 1, 1, 1, 1 };
    int temp[10] = { 0 };
    cin >> n;

    for (int i = 2; i <= n; i++) {
        fill_n(temp, 10, 0);
        temp[1] += arr[0] % 1000000000;
        temp[8] += arr[9] % 1000000000;
        for (int j = 1; j < 9; j++) {
            temp[j - 1] = (temp[j - 1] + arr[j]) % 1000000000;
            temp[j + 1] = (temp[j + 1] + arr[j]) % 1000000000;
        }
        copy(temp, temp + 10, arr);
    }

    for (int i = 0; i < 10; i++) {
        cnt = (cnt + arr[i]) % 1000000000;
    }
    cout << cnt;
}