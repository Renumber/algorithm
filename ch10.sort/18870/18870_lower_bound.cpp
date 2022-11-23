/*
수직선 위에 N개의 좌표 X1, X2, ..., XN이 있다. 이 좌표에 좌표 압축을 적용하려고 한다.

Xi를 좌표 압축한 결과 X'i의 값은 Xi > Xj를 만족하는 서로 다른 좌표의 개수와 같아야 한다.

X1, X2, ..., XN에 좌표 압축을 적용한 결과 X'1, X'2, ..., X'N를 출력해보자.

https://www.acmicpc.net/problem/18870
*/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	vector<int> vec;
	int n, temp;

	cin >> n;


	for (int i = 0; i < n; i++) {
		cin >> temp;
		vec.push_back(temp);
	}

	vector<int> vec_c(vec);

	sort(vec_c.begin(), vec_c.end());
	vec_c.erase(unique(vec_c.begin(), vec_c.end()), vec_c.end());

	for (int i = 0; i < vec.size(); i++) {
		cout << (lower_bound(vec_c.begin(), vec_c.end(), vec[i]) - vec_c.begin()) << ' ';
	}
}