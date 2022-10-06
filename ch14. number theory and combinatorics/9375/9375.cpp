/*
해빈이는 패션에 매우 민감해서 한번 입었던 옷들의 조합을 절대 다시 입지 않는다. 예를 들어 오늘 해빈이가 안경, 코트, 상의, 신발을 입었다면, 다음날은 바지를 추가로 입거나 안경대신 렌즈를 착용하거나 해야한다. 해빈이가 가진 의상들이 주어졌을때 과연 해빈이는 알몸이 아닌 상태로 며칠동안 밖에 돌아다닐 수 있을까?

https://www.acmicpc.net/problem/9375
*/

#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	map<string, int> m;
	int t, n, res;
	string str;

	cin >> t;

	for (int i = 0; i < t; i++) {
		res = 1;
		m.clear();
		cin >> n;
		for (int j = 0; j < n; j++) {
			cin >> str >> str;
			if (m.find(str) != m.end()) {
				m[str]++;
			}
			else {
				m.insert({ str, 1 });
			}
		}
		for (auto item : m) {
			res *= (item.second + 1);
		}
		res--;
		cout << res << '\n';
	}


}