/*
두 개의 자연수를 입력받아 최대 공약수와 최소 공배수를 출력하는 프로그램을 작성하시오.

https://www.acmicpc.net/problem/2609
*/

#include <iostream>
#include <algorithm>

using namespace std;

int ea(int a, int b) {
	int c = a % b;
	while (c != 0) {
		a = b;
		b = c;
		c = a % b;
	}
	return b;
}

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int a, b, div, temp = 2;

	cin >> a >> b;
	div = ea(a, b);
	cout << div << '\n' << a * b / div;
}