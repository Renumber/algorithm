/*
N개의 수가 주어졌을 때, 이를 오름차순으로 정렬하는 프로그램을 작성하시오.

https://www.acmicpc.net/problem/2751
*/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main() {
	vector<int> v;
	int n, temp;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> temp;
		v.push_back(temp);
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < n; i++) {
		cout << v[i] << "\n";
	}
}