/*
숫자 카드는 정수 하나가 적혀져 있는 카드이다. 상근이는 숫자 카드 N개를 가지고 있다. 정수 M개가 주어졌을 때, 이 수가 적혀있는 숫자 카드를 상근이가 몇 개 가지고 있는지 구하는 프로그램을 작성하시오.

https://www.acmicpc.net/problem/10816
*/

#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	std::map<int, int> m1;
	int n, m, temp;


	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> temp;
		if (m1.find(temp) == m1.end()) {
			m1.insert(pair<int, int>(temp, 1));
		}
		else {
			m1[temp]++;
		}
	}

	cin >> m;

	for (int i = 0; i < m; i++) {
		cin >> temp;
		if (m1.find(temp) == m1.end()) {
			cout << 0 << ' ';
		}
		else {
			cout << m1[temp] << ' ';
		}
	}

}