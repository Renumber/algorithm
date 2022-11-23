/*
세 점이 주어졌을 때, 축에 평행한 직사각형을 만들기 위해서 필요한 네 번째 점을 찾는 프로그램을 작성하시오.

https://www.acmicpc.net/problem/3009
*/

#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;


int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int points[3][2] = {};

	cin >> points[0][0] >> points[0][1];
	cin >> points[1][0] >> points[1][1];
	cin >> points[2][0] >> points[2][1];

	if (points[0][0] == points[1][0]) {
		cout << points[2][0] << ' ';
	}
	else if (points[0][0] == points[2][0]) {
		cout << points[1][0] << ' ';
	}
	else {
		cout << points[0][0] << ' ';
	}
	if (points[0][1] == points[1][1]) {
		cout << points[2][1] << ' ';
	}
	else if (points[0][1] == points[2][1]) {
		cout << points[1][1] << ' ';
	}
	else {
		cout << points[0][1] << ' ';
	}



}