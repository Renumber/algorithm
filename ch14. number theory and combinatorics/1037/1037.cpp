/*
양수 A가 N의 진짜 약수가 되려면, N이 A의 배수이고, A가 1과 N이 아니어야 한다. 어떤 수 N의 진짜 약수가 모두 주어질 때, N을 구하는 프로그램을 작성하시오.

https://www.acmicpc.net/problem/1037
*/

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	vector<int> v;
	int cnt, temp;

	cin >> cnt;

	if (cnt == 1) {
		cin >> temp;
		cout << temp * temp;
		return 0;
	}

	for (int i = 0; i < cnt; i++) {
		cin >> temp;
		v.push_back(temp);
	}

	sort(v.begin(), v.end());

	cout << v[0] * v[v.size() - 1];

}