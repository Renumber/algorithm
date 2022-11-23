/*
문자열 S가 주어졌을 때, S의 서로 다른 부분 문자열의 개수를 구하는 프로그램을 작성하시오.

부분 문자열은 S에서 연속된 일부분을 말하며, 길이가 1보다 크거나 같아야 한다.

예를 들어, ababc의 부분 문자열은 a, b, a, b, c, ab, ba, ab, bc, aba, bab, abc, abab, babc, ababc가 있고, 서로 다른것의 개수는 12개이다.

https://www.acmicpc.net/problem/11478
*/

#include <iostream>
#include <algorithm>
#include <string>
#include <set>
using namespace std;


int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	set<string> s1;
	string temp;

	cin >> temp;

	for (int i = 0; i < temp.size(); i++) {
		for (int j = 0; j < temp.size() - i; j++) {
			s1.insert(temp.substr(j, i + 1));
		}
	}

	cout << s1.size();
}