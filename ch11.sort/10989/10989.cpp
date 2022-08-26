/*
N개의 수가 주어졌을 때, 이를 오름차순으로 정렬하는 프로그램을 작성하시오.

https://www.acmicpc.net/problem/10989
*/

#include <iostream>
using namespace std;

int arr[10001] = {};

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int n, temp;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> temp;
		arr[temp]++;
	}

	for (int i = 1; i < 10001; i++) {
		for (int j = 0; j < arr[i]; j++) {
			cout << i << '\n';
		}
	}

}