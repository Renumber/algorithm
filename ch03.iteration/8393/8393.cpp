/*
n이 주어졌을 때, 1부터 n까지 합을 구하는 프로그램을 작성하시오.
*/

#include <iostream>

using namespace std;

int main()
{
	int num, cnt = 0;
	cin >> num;

	for (int i = 1; i <= num; i++) {
		cnt += i;
	}
	cout << cnt;
}