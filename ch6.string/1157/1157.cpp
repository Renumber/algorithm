/*
알파벳 대소문자로 된 단어가 주어지면, 이 단어에서 가장 많이 사용된 알파벳이 무엇인지 알아내는 프로그램을 작성하시오. 단, 대문자와 소문자를 구분하지 않는다.

https://www.acmicpc.net/problem/1157
*/

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	string str;
	vector<int>cnt(26);
	int max;
	char res = ' ';
	cin >> str;

	transform(str.begin(), str.end(), str.begin(), ::toupper);

	for (char c : str) {
		cnt[c - 'A']++;
	}
	max = *max_element(cnt.begin(), cnt.end());

	for (int i = 0; i < cnt.size(); i++) {
		if (cnt[i] == max) {
			if (res == ' ') {
				res = 'A' + i;
			}
			else {
				res = '?';
			}
		}
	}
	cout << res;
}
