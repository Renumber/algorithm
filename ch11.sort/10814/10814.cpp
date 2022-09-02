/*
온라인 저지에 가입한 사람들의 나이와 이름이 가입한 순서대로 주어진다. 이때, 회원들을 나이가 증가하는 순으로, 나이가 같으면 먼저 가입한 사람이 앞에 오는 순서로 정렬하는 프로그램을 작성하시오.

https://www.acmicpc.net/problem/10814
*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

bool compare(pair<int, string> a, pair<int, string> b) {
	return a.first < b.first;
}

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	vector<pair<int, string>> vec;
	string name;
	int n, age;

	cin >> n;


	for (int i = 0; i < n; i++) {
		cin >> age >> name;
		vec.push_back(pair<int, string>(age, name));
	}

	stable_sort(vec.begin(), vec.end(), compare);

	for (int i = 0; i < vec.size(); i++) {
		cout << vec[i].first << ' ' << vec[i].second << '\n';
	}
}