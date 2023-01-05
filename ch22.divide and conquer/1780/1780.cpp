/*
N×N크기의 행렬로 표현되는 종이가 있다. 종이의 각 칸에는 -1, 0, 1 중 하나가 저장되어 있다. 우리는 이 행렬을 다음과 같은 규칙에 따라 적절한 크기로 자르려고 한다.

1. 만약 종이가 모두 같은 수로 되어 있다면 이 종이를 그대로 사용한다.
2. (1)이 아닌 경우에는 종이를 같은 크기의 종이 9개로 자르고, 각각의 잘린 종이에 대해서 (1)의 과정을 반복한다.
이와 같이 종이를 잘랐을 때, -1로만 채워진 종이의 개수, 0으로만 채워진 종이의 개수, 1로만 채워진 종이의 개수를 구해내는 프로그램을 작성하시오.

https://www.acmicpc.net/problem/1780
*/

#include <iostream>
#include <algorithm>

using namespace std;

int paper[2187][2187];

int* calc(int n, int x, int y) {
    int* res = new int[3];
    res[0] = 0;
    res[1] = 0;
    res[2] = 0;
    if (n == 1) {
        res[paper[y][x]] = 1;
        return res;
    }
    else {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                int* temp = calc(n / 3, x + (n / 3 * j), y + (n / 3 * i));
                res[0] += temp[0];
                res[1] += temp[1];
                res[2] += temp[2];
            }
        }
        if (res[0] == 0 && res[1] == 0) {
            res[2] = 1;
        }
        else if (res[1] == 0 && res[2] == 0) {
            res[0] = 1;
        }
        else if (res[0] == 0 && res[2] == 0) {
            res[1] = 1;
        }
        return res;
    }
}

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> paper[i][j];
            if (paper[i][j] == -1) {
                paper[i][j] = 2;
            }
        }
    }

    int* res = calc(n, 0, 0);
    cout << res[2] << '\n' << res[0] << '\n' << res[1];

}