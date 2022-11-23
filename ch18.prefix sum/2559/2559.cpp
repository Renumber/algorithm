/*
매일 아침 9시에 학교에서 측정한 온도가 어떤 정수의 수열로 주어졌을 때, 연속적인 며칠 동안의 온도의 합이 가장 큰 값을 알아보고자 한다.

예를 들어, 아래와 같이 10일 간의 온도가 주어졌을 때,

3 -2 -4 -9 0 3 7 13 8 -3

모든 연속적인 이틀간의 온도의 합은 아래와 같다.

1, -6, -13, -9, 3, 10, 20, 21, 5

이때, 온도의 합이 가장 큰 값은 21이다.

또 다른 예로 위와 같은 온도가 주어졌을 때, 모든 연속적인 5일 간의 온도의 합은 아래와 같으며,

-12, -12, -3, 14, 31, 28

이때, 온도의 합이 가장 큰 값은 31이다.

매일 측정한 온도가 정수의 수열로 주어졌을 때, 연속적인 며칠 동안의 온도의 합이 가장 큰 값을 계산하는 프로그램을 작성하시오.

https://www.acmicpc.net/problem/2559
*/

#include <iostream>
#include <algorithm>
#include <limits.h>

using namespace std;

int sum[100001];

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, k, maxNum = INT_MIN;

    cin >> n >> k;

    for (int i = 1; i <= n; i++) {
        cin >> sum[i];
        sum[i] += sum[i - 1];
    }
    for (int i = 1; i <= n - k + 1; i++) {
        maxNum = max(maxNum, sum[i + k - 1] - sum[i - 1]);
    }

    cout << maxNum;
}