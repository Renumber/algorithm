/*
* n choose m의 끝자리 0의 개수를 출력하는 프로그램을 작성하시오.
* 
* https://www.acmicpc.net/problem/2004
*/

#include <iostream>
#include <algorithm>

using namespace std;

long calc(int a, int b) {
	long cnt = 0;

	for (long i = a; i <= b; i *= a) {
		cnt += b / i;
	}

	return cnt;
}

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int n, m;
	long cnt5 = 0, cnt2 = 0;

	cin >> n >> m;

	cnt5 = calc(5, n) - calc(5, m) - calc(5, n - m);
	cnt2 = calc(2, n) - calc(2, m) - calc(2, n - m);

	cout << min(cnt5, cnt2);

}