/*
N*M크기의 행렬 A와 M*K크기의 행렬 B가 주어졌을 때, 두 행렬을 곱하는 프로그램을 작성하시오.

https://www.acmicpc.net/problem/2740
*/

#include <iostream>
#include <algorithm>

using namespace std;

int m1[100][100];
int m2[100][100];

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, m, k, temp;

    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> m1[i][j];
        }
    }

    cin >> m >> k;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < k; j++) {
            cin >> m2[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            temp = 0;
            for (int l = 0; l < m; l++) {
                temp += m1[i][l] * m2[l][j];
            }
            cout << temp << ' ';
        }
        cout << '\n';
    }
}