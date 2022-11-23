/*
배열을 정렬하는 것은 쉽다. 수가 주어지면, 그 수의 각 자리수를 내림차순으로 정렬해보자.
*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

bool compare(int i, int j) {
	return j < i;
}

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int n;
	vector<int> vec;

	cin >> n;

	while (n > 0) {
		vec.push_back(n % 10);
		n = n / 10;
	}

	sort(vec.begin(), vec.end(), compare);

	for (int i = 0; i < vec.size(); i++) {
		cout << vec[i];
	}
}