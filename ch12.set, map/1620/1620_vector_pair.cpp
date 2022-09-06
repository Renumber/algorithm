/*
https://www.acmicpc.net/problem/1620
*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

bool isNumber(const string& str)
{
	return str.find_first_not_of("0123456789") == string::npos;
}

bool comp(const pair<string, int> a, const pair<string, int> b) {
	return a.first < b.first;
}

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	vector<pair<string, int>> v1;
	int n, m;
	string temp = "";

	cin >> n >> m;


	for (int i = 0; i < n; i++) {
		cin >> temp;
		v1.push_back(pair<string, int>(temp, i));
	}

	vector<pair<string, int>> v2(v1);

	sort(v2.begin(), v2.end());

	for (int i = 0; i < m; i++) {
		cin >> temp;
		if (isNumber(temp)) {
			cout << v1[stoi(temp) - 1].first << '\n';
		}
		else {
			cout << v2[lower_bound(v2.begin(), v2.end(), pair<string, int>(temp, 0), comp) - v2.begin()].second + 1 << '\n';
		}
	}

}