/*
자연수 N과 정수 K가 주어졌을 때 이항 계수
nCk를 10,007로 나눈 나머지를 구하는 프로그램을 작성하시오.

https://www.acmicpc.net/problem/11051
*/

#include <iostream>

using namespace std;

int arr[1001][1001] = { 0, };

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int n, k;
	cin >> n >> k;

	arr[1][1] = 1;
	arr[1][0] = 1;

	for (int i = 2; i <= n; i++) {
		for (int j = 0; j <= i; j++) {
			if (j == 0 || i == j) {
				arr[i][j] = 1;
			}
			else {
				arr[i][j] = arr[i - 1][j - 1] % 10007 + arr[i - 1][j] % 10007;
			}
		}
	}

	cout << arr[n][k] % 10007;
}