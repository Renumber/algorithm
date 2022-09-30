/*
자연수 N과 정수 K가 주어졌을 때 이항 계수nCr을 구하는 프로그램을 작성하시오.

https://www.acmicpc.net/problem/11050
*/

#include <iostream>
#include <algorithm>

using namespace std;

int fac(int n) {
	int res = 1;
	for (int i = 1; i <= n; i++) {
		res *= i;
	}
	return res;
}

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int n, k;

	cin >> n >> k;

	cout << fac(n) / (fac(k) * fac(n - k));

}