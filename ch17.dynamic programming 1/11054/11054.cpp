/*
수열 S가 어떤 수 Sk를 기준으로 S1 < S2 < ... Sk-1 < Sk > Sk+1 > ... SN-1 > SN을 만족한다면, 그 수열을 바이토닉 수열이라고 한다.

예를 들어, {10, 20, 30, 25, 20}과 {10, 20, 30, 40}, {50, 40, 25, 10} 은 바이토닉 수열이지만,  {1, 2, 3, 2, 1, 2, 3, 2, 1}과 {10, 20, 30, 40, 20, 30} 은 바이토닉 수열이 아니다.

수열 A가 주어졌을 때, 그 수열의 부분 수열 중 바이토닉 수열이면서 가장 긴 수열의 길이를 구하는 프로그램을 작성하시오.

https://www.acmicpc.net/problem/11054
*/

#include <iostream>
#include <algorithm>

using namespace std;

int arr[1000];
int asc[1000];
int desc[1000];

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, maxRes = 1;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    asc[0] = 1;
    desc[0] = 1;

    for (int i = 1; i < n; i++) {
        asc[i] = 1;
        desc[i] = 1;
        for (int j = 0; j < i; j++) {
            if (arr[i] > arr[j]) {
                asc[i] = max(asc[i], asc[j] + 1);
            }
            if (arr[i] < arr[j]) {
                desc[i] = max(desc[i], max(desc[j], asc[j]) + 1);
            }
        }
        maxRes = max(maxRes, max(asc[i], desc[i]));
    }


    cout << maxRes;
}