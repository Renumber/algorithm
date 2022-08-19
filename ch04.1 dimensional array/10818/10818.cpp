/*
개의 정수가 주어진다. 이때, 최솟값과 최댓값을 구하는 프로그램을 작성하시오.

https://www.acmicpc.net/problem/10818
*/

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int cnt, temp, min = 1000000, max = -1000000;

	cin >> cnt;
	for (int i = 0; i < cnt; i++) {
		cin >> temp;
		if (temp < min) {
			min = temp;
		}if (max < temp) {
			max = temp;
		}
	}
	cout << min << " " << max;

	/*
	* 실행 결과 위의 코드가 더 적은 메모리(위: 2020kb, 아래: 5925kb)와 시간(108ms, 180ms)을 소모함
	int cnt, temp, min= 1000000, max=-1000000;
	cin >> cnt;
	vector<int> v(cnt);
	for (int i = 0; i < cnt; i++) {
		cin >> v[i];
	}
	sort(v.begin(), v.end());

	cout << v.front() << " " << v.back();
	*/
}