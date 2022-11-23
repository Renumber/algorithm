/*
N개의 수로 이루어진 수열 A1, A2, ..., AN이 주어진다. 또, 수와 수 사이에 끼워넣을 수 있는 N-1개의 연산자가 주어진다. 연산자는 덧셈(+), 뺄셈(-), 곱셈(×), 나눗셈(÷)으로만 이루어져 있다.

우리는 수와 수 사이에 연산자를 하나씩 넣어서, 수식을 하나 만들 수 있다. 이때, 주어진 수의 순서를 바꾸면 안 된다.

예를 들어, 6개의 수로 이루어진 수열이 1, 2, 3, 4, 5, 6이고, 주어진 연산자가 덧셈(+) 2개, 뺄셈(-) 1개, 곱셈(×) 1개, 나눗셈(÷) 1개인 경우에는 총 60가지의 식을 만들 수 있다. 예를 들어, 아래와 같은 식을 만들 수 있다.

1+2+3-4×5÷6
1÷2+3+4-5×6
1+2÷3×4-5+6
1÷2×3-4+5+6
식의 계산은 연산자 우선 순위를 무시하고 앞에서부터 진행해야 한다. 또, 나눗셈은 정수 나눗셈으로 몫만 취한다. 음수를 양수로 나눌 때는 C++14의 기준을 따른다. 즉, 양수로 바꾼 뒤 몫을 취하고, 그 몫을 음수로 바꾼 것과 같다. 이에 따라서, 위의 식 4개의 결과를 계산해보면 아래와 같다.

1+2+3-4×5÷6 = 1
1÷2+3+4-5×6 = 12
1+2÷3×4-5+6 = 5
1÷2×3-4+5+6 = 7
N개의 수와 N-1개의 연산자가 주어졌을 때, 만들 수 있는 식의 결과가 최대인 것과 최소인 것을 구하는 프로그램을 작성하시오.

https://www.acmicpc.net/problem/14888
*/


#include <iostream>
#include <algorithm>
#include <limits.h>

using namespace std;

int minRes = INT_MAX, maxRes = INT_MIN, n;

int arr[11], oper[4];

int calc(int a, int b, int oper) {
	int res;
	switch (oper) {
	case 0:
		res = a + b;
		break;
	case 1:
		res = a - b;
		break;
	case 2:
		res = a * b;
		break;
	case 3:
		res = a / b;
		break;
	}
	return res;
}

void dfs(int index, int res) {
	if (index == n) {
		minRes = (minRes > res) ? res : minRes;
		maxRes = (maxRes < res) ? res : maxRes;
	}
	else {
		for (int i = 0; i < 4; i++) {
			if (oper[i] != 0) {
				oper[i]--;
				dfs(index + 1, calc(res, arr[index], i));
				oper[i]++;
			}
		}
	}
}


int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < 4; i++) {
		cin >> oper[i];
	}
	dfs(1, arr[0]);
	cout << maxRes << '\n' << minRes;
}
