/*
RGB거리에는 집이 N개 있다. 거리는 선분으로 나타낼 수 있고, 1번 집부터 N번 집이 순서대로 있다.

집은 빨강, 초록, 파랑 중 하나의 색으로 칠해야 한다. 각각의 집을 빨강, 초록, 파랑으로 칠하는 비용이 주어졌을 때, 아래 규칙을 만족하면서 모든 집을 칠하는 비용의 최솟값을 구해보자.

1번 집의 색은 2번 집의 색과 같지 않아야 한다.
N번 집의 색은 N-1번 집의 색과 같지 않아야 한다.
i(2 ≤ i ≤ N-1)번 집의 색은 i-1번, i+1번 집의 색과 같지 않아야 한다.

https://www.acmicpc.net/problem/1149
*/

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int r, g, b, n, res;
    int rPre, gPre, bPre;

    cin >> n;
    cin >> rPre >> gPre >> bPre;
    for (int i = 1; i < n; i++) {
        cin >> r >> g >> b;
        r = r + min(gPre, bPre);
        g = g + min(rPre, bPre);
        b = b + min(rPre, gPre);
        rPre = r;
        gPre = g;
        bPre = b;

    }

    res = min(r, g);
    res = min(res, b);

    cout << res;
}