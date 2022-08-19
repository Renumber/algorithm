/*
정수 N이 주어졌을 때, 소인수분해하는 프로그램을 작성하시오.

https://www.acmicpc.net/problem/11653
*/

#include <iostream>

using namespace std;

int main()
{
	int n, temp = 2;

	cin >> n;

	if (n == 1) {
		return 0;
	}

	while (n != 1) {
		if (n % temp == 0) {
			cout << temp << '\n';
			n /= temp;
		}
		else {
			temp++;
		}
	}
}