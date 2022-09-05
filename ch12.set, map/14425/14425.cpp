/*
총 N개의 문자열로 이루어진 집합 S가 주어진다.

입력으로 주어지는 M개의 문자열 중에서 집합 S에 포함되어 있는 것이 총 몇 개인지 구하는 프로그램을 작성하시오.

https://www.acmicpc.net/problem/14425
*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;


int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	vector<string> v1;
	int n, m, cnt = 0;
	string temp;

	cin >> n >> m;


	for (int i = 0; i < n; i++) {
		cin >> temp;
		v1.push_back(temp);
	}

	sort(v1.begin(), v1.end());

	for (int i = 0; i < m; i++) {
		cin >> temp;
		if (v1[lower_bound(v1.begin(), v1.end(), temp) - v1.begin()] == temp) {
			cnt++;
		}
	}

	cout << cnt;
}