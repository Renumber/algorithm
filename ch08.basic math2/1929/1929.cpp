/*
M이상 N이하의 소수를 모두 출력하는 프로그램을 작성하시오.

https://www.acmicpc.net/problem/1929
*/

#include <iostream>
#include <cmath>

using namespace std;
bool nonp[1000000] = {};

int main()
{
	int m, n;

	nonp[0] = true;
	nonp[1] = true;

	cin >> m >> n;

	for (int i = 2; i <= sqrt(n); i++) {
		if (nonp[i] == false) {
			for (int j = i * 2; j <= n; j += i) {
				nonp[j] = true;
			}
		}
	}
	for (int i = m; i <= n; i++) {
		if (nonp[i] == false) {
			cout << i << '\n';
		}
	}
}