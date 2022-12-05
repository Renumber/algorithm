/*
정수를 저장하는 스택을 구현한 다음, 입력으로 주어지는 명령을 처리하는 프로그램을 작성하시오.

명령은 총 다섯 가지이다.

push X: 정수 X를 스택에 넣는 연산이다.
pop: 스택에서 가장 위에 있는 정수를 빼고, 그 수를 출력한다. 만약 스택에 들어있는 정수가 없는 경우에는 -1을 출력한다.
size: 스택에 들어있는 정수의 개수를 출력한다.
empty: 스택이 비어있으면 1, 아니면 0을 출력한다.
top: 스택의 가장 위에 있는 정수를 출력한다. 만약 스택에 들어있는 정수가 없는 경우에는 -1을 출력한다.

https://www.acmicpc.net/problem/10828
*/

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int stack[10000];

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, top = -1, res, num;
    string str;

    cin >> n;

    getline(cin, str);

    for (int i = 0; i < n; i++) {
        getline(cin, str);
        if (str == "pop") {
            if (top == -1) {
                cout << "-1" << '\n';
            }
            else {
                cout << stack[top] << '\n';
                top--;
            }
        }
        else if (str == "size") {
            cout << top + 1 << '\n';
        }
        else if (str == "empty") {
            if (top == -1) {
                cout << "1" << '\n';
            }
            else {
                cout << "0" << '\n';
            }
        }
        else if (str == "top") {
            if (top == -1) {
                cout << "-1" << '\n';
            }
            else {
                cout << stack[top] << '\n';
            }
        }
        else {
            num = stoi(str.substr(5));
            top++;
            stack[top] = num;
        }
    }
}