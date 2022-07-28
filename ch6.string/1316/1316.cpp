/*
그룹 단어란 단어에 존재하는 모든 문자에 대해서, 각 문자가 연속해서 나타나는 경우만을 말한다. 예를 들면, ccazzzzbb는 c, a, z, b가 모두 연속해서 나타나고, kin도 k, i, n이 연속해서 나타나기 때문에 그룹 단어이지만, aabbbccb는 b가 떨어져서 나타나기 때문에 그룹 단어가 아니다.

단어 N개를 입력으로 받아 그룹 단어의 개수를 출력하는 프로그램을 작성하시오.

https://www.acmicpc.net/problem/1316
*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	string str;
	vector<int> last(26, -1);
	int loop, cnt = 0;

	cin >> loop;

	for (int i = 0; i < loop; i++) {
		cin >> str;
		cnt++;
		for (int j = 0; j < str.size(); j++) {
			if (last[str[j] - 'a'] == j - 1 || last[str[j] - 'a'] == -1) {
				last[str[j] - 'a'] = j;
				continue;
			}
			else {
				cnt--;
				break;
			}
		}
		last.assign(26, -1);
	}
	cout << cnt;
}
