/*
수직선 위에 N개의 좌표 X1, X2, ..., XN이 있다. 이 좌표에 좌표 압축을 적용하려고 한다.

Xi를 좌표 압축한 결과 X'i의 값은 Xi > Xj를 만족하는 서로 다른 좌표의 개수와 같아야 한다.

X1, X2, ..., XN에 좌표 압축을 적용한 결과 X'1, X'2, ..., X'N를 출력해보자.

https://www.acmicpc.net/problem/18870
*/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


bool compare1(pair<int, int> a, pair<int, int> b) {
	return a.first < b.first;
}

bool compare2(pair<int, int> a, pair<int, int> b) {
	return a.second < b.second;
}


int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	vector<pair<int, int>> vec;
	int n, temp, cnt = 0;

	cin >> n;


	for (int i = 0; i < n; i++) {
		cin >> temp;
		vec.push_back(pair<int, int>(temp, i));
	}

	sort(vec.begin(), vec.end(), compare1);

	vector<pair<int, int>> vec_c(vec);

	vec_c[0].first = cnt;

	for (int i = 1; i < vec.size(); i++) {
		if (vec[i].first != vec[i - 1].first) {
			//cout << vec_c[i].first << ", " << vec_c[i - 1].first << '\n';
			cnt++;
		}
		vec_c[i].first = cnt;
	}

	sort(vec_c.begin(), vec_c.end(), compare2);

	for (int i = 0; i < vec_c.size(); i++) {
		cout << vec_c[i].first << ' ';
	}
}