/*
한수는 지금 (x, y)에 있다. 직사각형은 각 변이 좌표축에 평행하고, 왼쪽 아래 꼭짓점은 (0, 0), 오른쪽 위 꼭짓점은 (w, h)에 있다. 직사각형의 경계선까지 가는 거리의 최솟값을 구하는 프로그램을 작성하시오.

https://www.acmicpc.net/problem/1085
*/

#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;


int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int x, y, w, h, imin = 1000;

	cin >> x >> y >> w >> h;

	imin = min(imin, x);
	imin = min(imin, y);
	imin = min(imin, w - x);
	imin = min(imin, h - y);


	cout << imin;
}