/*
흑백 영상을 압축하여 표현하는 데이터 구조로 쿼드 트리(Quad Tree)라는 방법이 있다. 흰 점을 나타내는 0과 검은 점을 나타내는 1로만 이루어진 영상(2차원 배열)에서 같은 숫자의 점들이 한 곳에 많이 몰려있으면, 쿼드 트리에서는 이를 압축하여 간단히 표현할 수 있다.

주어진 영상이 모두 0으로만 되어 있으면 압축 결과는 "0"이 되고, 모두 1로만 되어 있으면 압축 결과는 "1"이 된다. 만약 0과 1이 섞여 있으면 전체를 한 번에 나타내지를 못하고, 왼쪽 위, 오른쪽 위, 왼쪽 아래, 오른쪽 아래, 이렇게 4개의 영상으로 나누어 압축하게 되며, 이 4개의 영역을 압축한 결과를 차례대로 괄호 안에 묶어서 표현한다

위 그림에서 왼쪽의 영상은 오른쪽의 배열과 같이 숫자로 주어지며, 이 영상을 쿼드 트리 구조를 이용하여 압축하면 "(0(0011)(0(0111)01)1)"로 표현된다.  N ×N 크기의 영상이 주어질 때, 이 영상을 압축한 결과를 출력하는 프로그램을 작성하시오.

https://www.acmicpc.net/problem/1992
*/

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

char frame[64][64];

string calc(int n, int x, int y) {
    if (n == 1) {
        string str;
        str += frame[y][x];
        return str;
    }
    else {
        string res;
        int cnt[2] = { 0, 0 };
        string quad[4];
        quad[0] = calc(n / 2, x, y);
        quad[1] = calc(n / 2, x + (n / 2), y);
        quad[2] = calc(n / 2, x, y + (n / 2));
        quad[3] = calc(n / 2, x + (n / 2), y + (n / 2));
        for (int i = 0; i < 4;i++) {
            if (quad[i][0] == '(') {

            }
            else if (quad[i][0] == '0') {
                cnt[0]++;
            }
            else {
                cnt[1]++;
            }
        }
        if (cnt[0] == 4) {
            return res + '0';
        }
        else if (cnt[1] == 4) {
            return res + '1';
        }
        return "(" + quad[0] + quad[1] + quad[2] + quad[3] + ")";
    }
}

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> frame[i][j];
        }
    }

    string res = calc(n, 0, 0);
    cout << res;

}