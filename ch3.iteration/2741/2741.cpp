/*
자연수 N이 주어졌을 때, 1부터 N까지 한 줄에 하나씩 출력하는 프로그램을 작성하시오.

https://www.acmicpc.net/problem/2741
*/

#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int cnt;

	cin >> cnt;

	for (int i = 1; i <= cnt; i++) {
		cout << i << "\n";
	}
}