/*
두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.
입력의 마지막에는 0 두 개가 들어온다.

https://www.acmicpc.net/problem/10952
*/

#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int num1, num2;

	while (true) {
		cin >> num1;
		cin >> num2;

		if (num1 == 0 && num2 == 0) {
			break;
		}

		cout << num1 + num2 << "\n";
	}
}