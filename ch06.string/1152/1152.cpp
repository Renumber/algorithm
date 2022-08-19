/*
영어 대소문자와 공백으로 이루어진 문자열이 주어진다. 이 문자열에는 몇 개의 단어가 있을까? 이를 구하는 프로그램을 작성하시오. 단, 한 단어가 여러 번 등장하면 등장한 횟수만큼 모두 세어야 한다.

https://www.acmicpc.net/problem/1152
*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	string str;
	int cnt = 1;
	getline(cin, str);
	if (str.empty()) {
		cnt = 0;
		return 0;
	}
	for (int i = 1; i < str.size() - 1; i++) {
		if (str[i] == ' ') {
			cnt++;
		}
	}
	if (str[0] == ' ') {
		cnt--;
	}
	if (str[str.size() - 1] == ' ') {
		cnt--;
	}
	cout << cnt;
}
