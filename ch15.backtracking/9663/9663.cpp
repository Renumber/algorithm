/*
N-Queen 문제는 크기가 N × N인 체스판 위에 퀸 N개를 서로 공격할 수 없게 놓는 문제이다.

N이 주어졌을 때, 퀸을 놓는 방법의 수를 구하는 프로그램을 작성하시오.

https://www.acmicpc.net/problem/9663
*/


#include <iostream>
#include <algorithm>

using namespace std;

int arr[15];
int n, cnt = 0;

bool check(int index) {
	for (int i = 0; i < index; i++) {
		if (arr[i] == arr[index] || abs(arr[index] - arr[i]) == index - i)
			return false;
	}
	return true;
}

void dfs(int index) {
	if (index == n) {
		cnt++;
	}
	else {
		for (int i = 0; i < n; i++) {
			arr[index] = i;
			if (check(index)) {
				dfs(index + 1);
			}
		}
	}
}

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	dfs(0);
	cout << cnt;

}
