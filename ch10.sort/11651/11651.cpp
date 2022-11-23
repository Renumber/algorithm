/*
2차원 평면 위의 점 N개가 주어진다. 좌표를 y좌표가 증가하는 순으로, y좌표가 같으면 x좌표가 증가하는 순서로 정렬한 다음 출력하는 프로그램을 작성하시오.

https://www.acmicpc.net/problem/11651
*/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	vector<pair<int, int>> vec;
	int n, a, b;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		vec.push_back(pair<int, int>(b, a));
	}

	sort(vec.begin(), vec.end());

	for (int i = 0; i < n; i++) {
		cout << vec[i].second << " " << vec[i].first << '\n';
	}

}