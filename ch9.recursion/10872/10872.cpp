/*
0보다 크거나 같은 정수 N이 주어진다. 이때, N!을 출력하는 프로그램을 작성하시오.

https://www.acmicpc.net/problem/10872
*/

#include <iostream>

using namespace std;

int fac(int n) {
	if (n == 0) {
		return 1;
	}
	else {
		return n * fac(n - 1);
	}
}

int main()
{
	int n;
	cin >> n;
	cout << fac(n);
}