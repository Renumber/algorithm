/*
2차원 평면 위의 점 N개가 주어진다. 좌표를 x좌표가 증가하는 순으로, x좌표가 같으면 y좌표가 증가하는 순서로 정렬한 다음 출력하는 프로그램을 작성하시오.

https://www.acmicpc.net/problem/11650
*/

#include <iostream>
#include <algorithm>
#include <vector>
//#include <string>
//#include <cmath>
using namespace std;

//int arr[100000][2] = {};

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	vector<pair<int, int>> vec;
	int n, a, b;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		vec.push_back(pair<int, int>(a, b));
	}

	sort(vec.begin(), vec.end());

	for (int i = 0; i < n; i++) {
		cout << vec[i].first << " " << vec[i].second << '\n';
	}
	/*
	for (int i = 0; i < n; i++) {
		cin >> arr[i][0] >> arr[i][1];
	}

	for (int i = 0; i < n-1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arr[i][0] > arr[j][0]) {
				temp = arr[i][0];
				arr[i][0] = arr[j][0];
				arr[j][0] = temp;
				temp = arr[i][1];
				arr[i][1] = arr[j][1];
				arr[j][1] = temp;
			}
			if ((arr[i][0] == arr[j][0]) && (arr[i][1] > arr[j][1])) {
				temp = arr[i][0];
				arr[i][0] = arr[j][0];
				arr[j][0] = temp;
				temp = arr[i][1];
				arr[i][1] = arr[j][1];
				arr[j][1] = temp;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		cout << arr[i][0] << ' ' << arr[i][1] << '\n';
	}
	*/

}