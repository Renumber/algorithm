/*
시험 점수를 입력받아 90 ~ 100점은 A, 80 ~ 89점은 B, 70 ~ 79점은 C, 60 ~ 69점은 D, 나머지 점수는 F를 출력하는 프로그램을 작성하시오.
https://www.acmicpc.net/problem/9498
*/

#include <iostream>

using namespace std;

int main()
{
	int score;
	cin >> score;
	switch (score / 10) {
	case 10:
	case 9:
		cout << "A";
		break;
	case 8:
		cout << "B";
		break;
	case 7:
		cout << "C";
		break;
	case 6:
		cout << "D";
		break;
	default:
		cout << "F";
		break;
	}
}

