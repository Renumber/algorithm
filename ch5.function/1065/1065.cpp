/*
어떤 양의 정수 X의 각 자리가 등차수열을 이룬다면, 그 수를 한수라고 한다. 등차수열은 연속된 두 개의 수의 차이가 일정한 수열을 말한다. N이 주어졌을 때, 1보다 크거나 같고, N보다 작거나 같은 한수의 개수를 출력하는 프로그램을 작성하시오.

https://www.acmicpc.net/problem/1065
*/

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool han(int num) {
	int diff = 0;
	bool res = true;
	if (num < 100) {
		res = true;
	}
	else {
		diff = (num % 10 - num % 100 / 10);
		while (num > 9) {
			if (diff != (num % 10 - num % 100 / 10)) {
				res = false;
				break;
			}
			num /= 10;
		}
	}
	return res;
}

int main()
{
	int num, cnt = 0;
	cin >> num;
	for (int i = 1; i <= num; i++) {
		if (han(i)) {
			cnt++;
		}
	}
	cout << cnt;
}
