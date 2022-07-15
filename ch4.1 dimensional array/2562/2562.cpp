/*
9개의 서로 다른 자연수가 주어질 때, 이들 중 최댓값을 찾고 그 최댓값이 몇 번째 수인지를 구하는 프로그램을 작성하시오.

예를 들어, 서로 다른 9개의 자연수

3, 29, 38, 12, 57, 74, 40, 85, 61

이 주어지면, 이들 중 최댓값은 85이고, 이 값은 8번째 수이다.

https://www.acmicpc.net/problem/2562
*/

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int temp, max = 0, maxCnt = -1;
	for (int i = 0; i < 9; i++) {
		cin >> temp;
		if (temp > max) {
			max = temp;
			maxCnt = i;
		}
	}
	cout << max << "\n" << maxCnt + 1;
}