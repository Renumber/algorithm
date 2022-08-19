/*
두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.

https://www.acmicpc.net/problem/10951
*/

#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int num1, num2;

	while (cin >> num1 >> num2) {

		cout << num1 + num2 << "\n";
	}
}