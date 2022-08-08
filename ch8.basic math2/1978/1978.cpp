/*
주어진 수 N개 중에서 소수가 몇 개인지 찾아서 출력하는 프로그램을 작성하시오.

https://www.acmicpc.net/problem/1978
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
	int n, num, cnt = 0;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> num;
		if (check(num)) {
			cnt++;
		}
	}
	cout << cnt;
}