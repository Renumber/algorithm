/*
* N!에서 뒤에서부터 처음 0이 아닌 숫자가 나올 때까지 0의 개수를 구하는 프로그램을 작성하시오.
* 
* https://www.acmicpc.net/problem/1676
*/

#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n, cnt = 0;
	cin >> n;

	for (int i = 5; i <= n; i *= 5) {
		cnt += n / i;
	}

	cout << cnt;
}