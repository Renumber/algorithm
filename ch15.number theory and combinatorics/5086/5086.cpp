/*
4 × 3 = 12이다.

이 식을 통해 다음과 같은 사실을 알 수 있다.

3은 12의 약수이고, 12는 3의 배수이다.

4도 12의 약수이고, 12는 4의 배수이다.

두 수가 주어졌을 때, 다음 3가지 중 어떤 관계인지 구하는 프로그램을 작성하시오.

1. 첫 번째 숫자가 두 번째 숫자의 약수이다.
2. 첫 번째 숫자가 두 번째 숫자의 배수이다.
3. 첫 번째 숫자가 두 번째 숫자의 약수와 배수 모두 아니다.

https://www.acmicpc.net/problem/5086
*/

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n, m;

	while (true) {
		cin >> n >> m;
		if (n == 0) {
			break;
		}

		if (m % n == 0) {
			cout << "factor" << '\n';
		}
		else if (n % m == 0) {
			cout << "multiple" << '\n';
		}
		else {
			cout << "neither" << '\n';
		}
	}


}