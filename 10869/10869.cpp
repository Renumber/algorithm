/*
두 자연수 A와 B가 주어진다. 이때, A+B, A-B, A*B, A/B(몫), A%B(나머지)를 출력하는 프로그램을 작성하시오.
https://www.acmicpc.net/problem/10869
*/

#include <iostream>

using namespace std;

int main()
{
    int num1, num2;
    cin >> num1;
    cin >> num2;
    cout << (num1 + num2) << endl;
    cout << (num1 - num2) << endl;
    cout << (num1 * num2) << endl;
    cout << (num1 / num2) << endl;
    cout << (num1 % num2) << endl;
}
