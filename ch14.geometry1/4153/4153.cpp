/*
과거 이집트인들은 각 변들의 길이가 3, 4, 5인 삼각형이 직각 삼각형인것을 알아냈다. 주어진 세변의 길이로 삼각형이 직각인지 아닌지 구분하시오.

https://www.acmicpc.net/problem/4153
*/

#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;


int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int arr[3] = { 1,1,1 };

	while (true) {
		cin >> arr[0] >> arr[1] >> arr[2];
		if (arr[0] == 0) {
			break;
		}
		sort(arr, arr + 3);
		if (arr[2] * arr[2] == arr[0] * arr[0] + arr[1] * arr[1]) {
			cout << "right" << '\n';
		}
		else {
			cout << "wrong" << '\n';
		}
	}

}