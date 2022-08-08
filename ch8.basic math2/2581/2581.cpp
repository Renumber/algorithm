/*
자연수 M과 N이 주어질 때 M이상 N이하의 자연수 중 소수인 것을 모두 골라 이들 소수의 합과 최솟값을 찾는 프로그램을 작성하시오.

예를 들어 M=60, N=100인 경우 60이상 100이하의 자연수 중 소수는 61, 67, 71, 73, 79, 83, 89, 97 총 8개가 있으므로, 이들 소수의 합은 620이고, 최솟값은 61이 된다.

https://www.acmicpc.net/problem/2581
*/

#include <iostream>
using namespace std;

bool check(int num) {
	if (num == 1)
		return false;
	for (int i = 2; i < num; i++) {
		if (num % i == 0) {
			return false;
		}
	}
	return true;
}

int main()
{
	int m, n, min = -1, sum = 0;

	cin >> m >> n;

	for (int i = n; i >= m; i--) {
		if (check(i)) {
			min = i;
			sum += i;
		}
	}

	if (min == -1) {
		cout << -1;
	}
	else {
		cout << sum << "\n" << min;
	}
}