/*
자연수 N과 M이 주어졌을 때, 아래 조건을 만족하는 길이가 M인 수열을 모두 구하는 프로그램을 작성하시오.

1부터 N까지 자연수 중에서 중복 없이 M개를 고른 수열

https://www.acmicpc.net/problem/15649
*/

#include <iostream>
#include <algorithm>

using namespace std;

int arr[8] = { 0, };
bool visited[8] = { false };

void dfs(int n, int m, int index) {
	if (m == index) {
		for (int i = 0; i < m; i++) {
			cout << arr[i] << ' ';
		}
		cout << '\n';
		return;
	}
	for (int i = 1; i <= n; i++) {
		if (!visited[i]) {
			visited[i] = true;
			arr[index] = i;
			dfs(n, m, index + 1);
			visited[i] = false;
		}
	}
}


int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int n, m;

	cin >> n >> m;

	for (int i = 1; i <= n; i++) {
		fill_n(visited, 8, false);
		visited[i] = true;
		arr[0] = i;
		dfs(n, m, 1);
	}
}