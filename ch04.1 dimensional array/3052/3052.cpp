/*
두 자연수 A와 B가 있을 때, A%B는 A를 B로 나눈 나머지 이다. 예를 들어, 7, 14, 27, 38을 3으로 나눈 나머지는 1, 2, 0, 2이다.

수 10개를 입력받은 뒤, 이를 42로 나눈 나머지를 구한다. 그 다음 서로 다른 값이 몇 개 있는지 출력하는 프로그램을 작성하시오.

https://www.acmicpc.net/problem/3052
*/

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int cnt = 0;
	vector<int> input(10);
	vector<int> temp(42);

	for (int i = 0; i < input.size(); i++) {
		cin >> input[i];
		temp[input[i] % 42]++;
		if (temp[input[i] % 42] == 1) {
			cnt++;
		}
	}
	cout << cnt;

}