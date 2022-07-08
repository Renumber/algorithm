/*
두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.
https://www.acmicpc.net/problem/10950
*/

#include <iostream>

using namespace std;

int main()
{
	int cnt, num1, num2;
	cin >> cnt;

	for (int i = 0; i < cnt; i++) {
		cin >> num1;
		cin >> num2;
		cout << num1 + num2 << endl;
	}
}

