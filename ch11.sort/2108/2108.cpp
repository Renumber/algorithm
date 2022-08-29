/*
수를 처리하는 것은 통계학에서 상당히 중요한 일이다. 통계학에서 N개의 수를 대표하는 기본 통계값에는 다음과 같은 것들이 있다. 단, N은 홀수라고 가정하자.

산술평균 : N개의 수들의 합을 N으로 나눈 값
중앙값 : N개의 수들을 증가하는 순서로 나열했을 경우 그 중앙에 위치하는 값
최빈값 : N개의 수들 중 가장 많이 나타나는 값
범위 : N개의 수들 중 최댓값과 최솟값의 차이
N개의 수가 주어졌을 때, 네 가지 기본 통계값을 구하는 프로그램을 작성하시오.

https://www.acmicpc.net/problem/2108
*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int cnt[8001] = {};
int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int n, sum = 0, max = -1, mode, temp;
	bool isSecond = false;

	cin >> n;

	vector<int> arr(n);

	for (int i = 0; i < n; i++) {
		cin >> temp;
		arr[i] = temp;
		sum += temp;
		cnt[4000 + temp]++;
	}

	temp = 0;
	mode = 0;
	for (int i = 0; i < 8001; i++) {
		//cout << i << " : " << cnt[i] << ", " << max << ", " << temp<< ", " << mode << "\n";
		if (cnt[i] == 0) {
			continue;
		}
		else if (cnt[i] == max) {
			if (isSecond) {
				mode = i - 4000;
				isSecond = false;
			}
		}
		if (cnt[i] > max) {
			max = cnt[i];
			mode = i - 4000;
			isSecond = true;
		}
	}
	sort(arr.begin(), arr.end());
	temp = round((double)sum / n);
	cout << temp << '\n' << arr[n / 2] << '\n' << mode << '\n' << arr[n - 1] - arr[0];
}