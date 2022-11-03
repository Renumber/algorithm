/*
정수 X에 사용할 수 있는 연산은 다음과 같이 세 가지 이다.

1. X가 3으로 나누어 떨어지면, 3으로 나눈다.
2. X가 2로 나누어 떨어지면, 2로 나눈다.
3. 1을 뺀다.

정수 N이 주어졌을 때, 위와 같은 연산 세 개를 적절히 사용해서 1을 만들려고 한다. 연산을 사용하는 횟수의 최솟값을 출력하시오.

https://www.acmicpc.net/problem/1463
*/

#include <iostream>
#include <algorithm>

using namespace std;

int arr[1000001];

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, minNum;

    cin >> n;
    arr[1] = 0;
    arr[2] = 1;
    arr[3] = 1;
    for (int i = 4; i <= n; i++) {
        minNum = arr[i - 1];
        if (i % 3 == 0) {
            minNum = min(minNum, arr[i / 3]);
        }
        if (i % 2 == 0) {
            minNum = min(minNum, arr[i / 2]);
        }
        arr[i] = minNum + 1;
    }

    cout << arr[n];
}