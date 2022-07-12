/*
두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.

각 테스트 케이스마다 "Case #x: A + B = C" 형식으로 출력한다. x는 테스트 케이스 번호이고 1부터 시작하며, C는 A+B이다.

https://www.acmicpc.net/problem/11022
*/

#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int cnt, num1, num2;

	cin >> cnt;

	for (int i = 0; i < cnt; i++) {
		cin >> num1;
		cin >> num2;
		cout << "Case #" << i + 1 << ": " << num1 << " + " << num2 << " = " << num1 + num2 << "\n";
	}
}