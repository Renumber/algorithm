/*
두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.
첫째 줄에 A와 B가 주어진다. (0 < A,B < 1010000)

https://www.acmicpc.net/problem/10757
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string a, b, res = "";
	int num1 = 0, num2 = 0, sum, carry = 0;
	cin >> a >> b;
	while (!a.empty() || !b.empty()) {
		if (!a.empty()) {
			num1 = a.back() - '0';
			a.pop_back();
		}
		if (!b.empty()) {
			num2 = b.back() - '0';
			b.pop_back();
		}

		sum = num1 + num2 + carry;
		if (sum >= 10) {
			sum -= 10;
			carry = 1;
		}
		else {
			carry = 0;
		}
		res = (to_string(sum)) + res;
		num1 = 0;
		num2 = 0;
	}
	if (carry == 1) {
		res = to_string(1) + res;
	}
	cout << res;

}