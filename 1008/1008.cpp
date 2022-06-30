/*
두 정수 A와 B를 입력받은 다음, A/B를 출력하는 프로그램을 작성하시오.
https://www.acmicpc.net/problem/1008
*/

#include <iostream>

using namespace std;

int main()
{
    double num1, num2;
    cin >> num1;
    cin >> num2;
    cout.precision(30);
    cout << (num1 / num2);
}
