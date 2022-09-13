/*
김진영이 듣도 못한 사람의 명단과, 보도 못한 사람의 명단이 주어질 때, 듣도 보도 못한 사람의 명단을 구하는 프로그램을 작성하시오.

https://www.acmicpc.net/problem/1764
*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <set>
using namespace std;


int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	set<string> s1;
	vector<string> v1;
	string temp;
	int n, m, cnt = 0;


	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		cin >> temp;
		s1.insert(temp);
	}

	for (int i = 0; i < m; i++) {
		cin >> temp;
		if (s1.find(temp) != s1.end()) {
			v1.push_back(temp);
			cnt++;
		}


	}

	sort(v1.begin(), v1.end());

	cout << cnt << '\n';

	for (int i = 0; i < v1.size(); i++) {
		cout << v1[i] << '\n';
	}

}