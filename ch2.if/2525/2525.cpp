/*
훈제오리구이를 시작하는 시각과 오븐구이를 하는 데 필요한 시간이 분단위로 주어졌을 때, 오븐구이가 끝나는 시각을 계산하는 프로그램을 작성하시오.

https://www.acmicpc.net/problem/2525
*/

#include <iostream>

using namespace std;

int main()
{
	int h, m, cook;
	cin >> h;
	cin >> m;
	cin >> cook;

	m += cook;
	while (m >= 60) {
		m -= 60;
		h++;
	}

	while (h >= 24) {
		h -= 24;
	}

	cout << h << " " << m;
}

