/*
승재는 인간-컴퓨터 상호작용에서 생체공학 설계를 공부하다가 키보드 자판이 실용적인지 궁금해졌다. 이를 알아보기 위해 승재는 다음과 같은 생각을 했다.

'문자열에서 특정 알파벳이 몇 번 나타나는지 알아봐서 자주 나타나는 알파벳이 중지나 검지 위치에 오는 알파벳인지 확인하면 실용적인지 확인할 수 있을 것이다.'

승재를 도와 특정 문자열 S, 특정 알파벳 a와 문자열의 구간 [l,r]이 주어지면 S의 l번째 문자부터 r번째 문자 사이에 a가 몇 번 나타나는지 구하는 프로그램을 작성하여라. 승재는 문자열의 문자는 0번째부터 세며, l번째와 r번째 문자를 포함해서 생각한다. 주의할 점은 승재는 호기심이 많기에 (통계적으로 크게 무의미하지만) 같은 문자열을 두고 질문을 q번 할 것이다.

https://www.acmicpc.net/problem/16139
*/

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

string s;
int sum[200002][26];

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int q, l, r;
    char c;

    cin >> s;
    cin >> q;

    for (int i = 0; i <= s.size(); i++) {
        for (int j = 0; j < 26; j++) {
            sum[i + 1][j] = sum[i][j];
            if (s[i] - 'a' == j) {
                sum[i + 1][j]++;
            }
        }
    }

    for (int i = 0; i < q; i++) {
        cin >> c >> l >> r;
        cout << sum[r + 1][c - 'a'] - sum[l][c - 'a'] << '\n';
    }

}