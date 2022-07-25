/*
알파벳 소문자로만 이루어진 단어 S가 주어진다. 각각의 알파벳에 대해서, 단어에 포함되어 있는 경우에는 처음 등장하는 위치를, 포함되어 있지 않은 경우에는 -1을 출력하는 프로그램을 작성하시오.

https://www.acmicpc.net/problem/10809
*/

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	vector<int>res(26, -1);
	string str;

	cin >> str;

	for (int i = 0; i < str.size(); i++) {
		if (res[str[i] - 'a'] == -1) {
			res[str[i] - 'a'] = i;
		}
	}
	for (int num : res) {
		cout << num << " ";
	}
}
