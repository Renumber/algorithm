/*
숫자 카드는 정수 하나가 적혀져 있는 카드이다. 상근이는 숫자 카드 N개를 가지고 있다. 정수 M개가 주어졌을 때, 이 수가 적혀있는 숫자 카드를 상근이가 가지고 있는지 아닌지를 구하는 프로그램을 작성하시오.

https://www.acmicpc.net/problem/10815
*/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	vector<int> v1;
	int n, m, temp;

	cin >> n;


	for (int i = 0; i < n; i++) {
		cin >> temp;
		v1.push_back(temp);
	}

	cin >> m;

	sort(v1.begin(), v1.end());

	for (int i = 0; i < m; i++) {
		cin >> temp;
		if (v1[lower_bound(v1.begin(), v1.end(), temp) - v1.begin()] == v2[i]) {
			cout << true << ' ';
		}
		else {
			cout << false << ' ';
		}

	}
}