/*
자연수 N과 M이 주어졌을 때, 아래 조건을 만족하는 길이가 M인 수열을 모두 구하는 프로그램을 작성하시오.
	1부터 N까지 자연수 중에서 중복 없이 M개를 고른 수열
	고른 수열은 오름차순이어야 한다.

https://www.acmicpc.net/problem/15650
*/


#include <iostream>

using namespace std;

int arr[8] = { 0, };
bool visited[8] = { false };

void dfs(int n, int m, int a, int index) {
	if (m == index) {
		for (int i = 0; i < m; i++) {
			cout << arr[i] << ' ';
		}
		cout << '\n';
		return;
	}
	for (int i = a; i <= n; i++) {
		if (!visited[i]) {
			visited[i] = true;
			arr[index] = i;
			dfs(n, m, i + 1, index + 1);
			visited[i] = false;
		}
	}
}


int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int n, m;

	cin >> n >> m;
	dfs(n, m, 1, 0);
}
