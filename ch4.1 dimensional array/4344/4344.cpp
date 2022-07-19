/*
첫째 줄에는 테스트 케이스의 개수 C가 주어진다.

둘째 줄부터 각 테스트 케이스마다 학생의 수 N(1 ≤ N ≤ 1000, N은 정수)이 첫 수로 주어지고, 이어서 N명의 점수가 주어진다. 점수는 0보다 크거나 같고, 100보다 작거나 같은 정수이다.

각 케이스마다 한 줄씩 평균을 넘는 학생들의 비율을 반올림하여 소수점 셋째 자리까지 출력한다.

https://www.acmicpc.net/problem/4344
*/

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int loop, cnt, above;
	float avg, sum;
	vector<float> score(1000);

	cin >> loop;

	for (int i = 0; i < loop; i++) {
		cin >> cnt;
		sum = 0;
		above = 0;

		for (int j = 0; j < cnt; j++) {
			cin >> score[j];
			sum += score[j];
		}
		avg = sum / cnt;

		for (int j = 0; j < cnt; j++) {
			if (score[j] > avg) {
				above++;
			}
		}
		cout << fixed;
		cout.precision(3);
		cout << (float)above / cnt * 100 << "%\n";

	}
}