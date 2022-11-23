/*
수열 A가 주어졌을 때, 가장 긴 증가하는 부분 수열을 구하는 프로그램을 작성하시오.

예를 들어, 수열 A = {10, 20, 10, 30, 20, 50} 인 경우에 가장 긴 증가하는 부분 수열은 A = {10, 20, 10, 30, 20, 50} 이고, 길이는 4이다.

https://www.acmicpc.net/problem/11053
*/

#include <iostream>
#include <algorithm>

using namespace std;

int arr[1000];
int dp[1000];

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, maxNum, maxRes = 1;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    dp[0] = 1;

    for (int i = 1; i < n; i++) {
        maxNum = 1;
        for (int j = 0; j < i; j++) {
            if (arr[i] > arr[j]) {
                maxNum = max(maxNum, dp[j] + 1);
            }
        }
        dp[i] = maxNum;
        maxRes = max(dp[i], maxRes);
    }


    cout << maxRes;
}