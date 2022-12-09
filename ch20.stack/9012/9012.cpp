/*
괄호 문자열(Parenthesis String, PS)은 두 개의 괄호 기호인 ‘(’ 와 ‘)’ 만으로 구성되어 있는 문자열이다. 그 중에서 괄호의 모양이 바르게 구성된 문자열을 올바른 괄호 문자열(Valid PS, VPS)이라고 부른다. 한 쌍의 괄호 기호로 된 “( )” 문자열은 기본 VPS 이라고 부른다. 만일 x 가 VPS 라면 이것을 하나의 괄호에 넣은 새로운 문자열 “(x)”도 VPS 가 된다. 그리고 두 VPS x 와 y를 접합(concatenation)시킨 새로운 문자열 xy도 VPS 가 된다. 예를 들어 “(())()”와 “((()))” 는 VPS 이지만 “(()(”, “(())()))” , 그리고 “(()” 는 모두 VPS 가 아닌 문자열이다.

여러분은 입력으로 주어진 괄호 문자열이 VPS 인지 아닌지를 판단해서 그 결과를 YES 와 NO 로 나타내어야 한다.

https://www.acmicpc.net/problem/9012
*/

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, top = -1;
    bool flag = false;
    string s;

    cin >> n;

    for (int i = 0; i < n; i++) {
        top = -1;
        flag = false;
        cin >> s;
        for (char c : s) {

            if (c == '\(') {
                top++;
            }
            else if (c == '\)') {
                if (top == -1) {
                    flag = true;
                    break;
                }
                top--;
            }
        }
        if (flag) {
            cout << "NO\n";
        }
        else if (top == -1) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
}