/*
N개의 숫자가 공백 없이 쓰여있다. 이 숫자를 모두 합해서 출력하는 프로그램을 작성하시오.

https://www.acmicpc.net/problem/11720
*/

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


int main()
{
	int size, sum = 0;
	string str;
	cin >> size;
	cin >> str;

	for (int i = 0; i < size; i++) {
		sum += str.back() - '0';
		str.pop_back();
	}
	cout << sum;
}
