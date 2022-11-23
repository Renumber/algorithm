/*
https://www.acmicpc.net/problem/1620
*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
using namespace std;


bool isNumber(const string& str)
{
	return str.find_first_not_of("0123456789") == string::npos;
}

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	map<string, int> map1;
	vector<string> name;
	int n, m;
	string temp;

	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		cin >> temp;
		map1.insert(make_pair(temp, i + 1));
		name.push_back(temp);
	}

	for (int i = 0; i < m; i++) {
		cin >> temp;
		if (isNumber(temp)) {
			cout << name[stoi(temp) - 1] << '\n';
		}
		else {
			cout << map1[temp] << '\n';
		}
	}

}