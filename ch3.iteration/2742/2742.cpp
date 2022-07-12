/*
자연수 N이 주어졌을 때, N부터 1까지 한 줄에 하나씩 출력하는 프로그램을 작성하시오.

https://www.acmicpc.net/problem/2742
*/

#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int cnt;

	cin >> cnt;

	for (int i = cnt; i > 0; i--) {
		cout << i << "\n";
	}
}