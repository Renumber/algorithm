/*
N을 입력받은 뒤, 구구단 N단을 출력하는 프로그램을 작성하시오. 출력 형식에 맞춰서 출력하면 된다.
https://www.acmicpc.net/problem/2739
*/

#include <iostream>

using namespace std;

int main()
{
	int num;
	cin >> num;

	for (int i = 1; i < 10; i++) {
		cout << num << " * " << i << " = " << num * i << endl;
	}
}

