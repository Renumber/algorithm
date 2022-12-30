/*
아래 <그림 1>과 같이 여러개의 정사각형칸들로 이루어진 정사각형 모양의 종이가 주어져 있고, 각 정사각형들은 하얀색으로 칠해져 있거나 파란색으로 칠해져 있다. 주어진 종이를 일정한 규칙에 따라 잘라서 다양한 크기를 가진 정사각형 모양의 하얀색 또는 파란색 색종이를 만들려고 한다.



전체 종이의 크기가 N×N(N=2k, k는 1 이상 7 이하의 자연수) 이라면 종이를 자르는 규칙은 다음과 같다.

전체 종이가 모두 같은 색으로 칠해져 있지 않으면 가로와 세로로 중간 부분을 잘라서 <그림 2>의 I, II, III, IV와 같이 똑같은 크기의 네 개의 N/2 × N/2색종이로 나눈다. 나누어진 종이 I, II, III, IV 각각에 대해서도 앞에서와 마찬가지로 모두 같은 색으로 칠해져 있지 않으면 같은 방법으로 똑같은 크기의 네 개의 색종이로 나눈다. 이와 같은 과정을 잘라진 종이가 모두 하얀색 또는 모두 파란색으로 칠해져 있거나, 하나의 정사각형 칸이 되어 더 이상 자를 수 없을 때까지 반복한다.

위와 같은 규칙에 따라 잘랐을 때 <그림 3>은 <그림 1>의 종이를 처음 나눈 후의 상태를, <그림 4>는 두 번째 나눈 후의 상태를, <그림 5>는 최종적으로 만들어진 다양한 크기의 9장의 하얀색 색종이와 7장의 파란색 색종이를 보여주고 있다.



입력으로 주어진 종이의 한 변의 길이 N과 각 정사각형칸의 색(하얀색 또는 파란색)이 주어질 때 잘라진 하얀색 색종이와 파란색 색종이의 개수를 구하는 프로그램을 작성하시오.

https://www.acmicpc.net/problem/2630
*/

#include <iostream>
#include <algorithm>

using namespace std;

int paper[128][128];

int* calc(int n, int x, int y) {
    int* cnt = new int[2];//w,b
    cnt[0] = 0;
    cnt[1] = 0;
    if (n == 1) {
        if (paper[x][y] == 0) {
            cnt[0] = 1;
        }
        else {
            cnt[1] = 1;
        }
        return cnt;
    }
    else {
        int* lefttop = calc(n / 2, x, y);
        int* righttop = calc(n / 2, x + (n / 2), y);
        int* leftbottom = calc(n / 2, x, y + (n / 2));
        int* rightbottom = calc(n / 2, x + (n / 2), y + (n / 2));
        cnt[0] += lefttop[0];
        cnt[0] += righttop[0];
        cnt[0] += leftbottom[0];
        cnt[0] += rightbottom[0];
        cnt[1] += lefttop[1];
        cnt[1] += righttop[1];
        cnt[1] += leftbottom[1];
        cnt[1] += rightbottom[1];
        if (cnt[0] == 0) {
            cnt[1] = 1;
        }
        else if (cnt[1] == 0) {
            cnt[0] = 1;
        }
        return cnt;
    }
}

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n;
    int* res;

    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> paper[i][j];
        }
    }

    res = calc(n, 0, 0);
    cout << res[0] << '\n' << res[1];

}