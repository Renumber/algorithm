/*
준규가 가지고 있는 동전은 총 N종류이고, 각각의 동전을 매우 많이 가지고 있다.

동전을 적절히 사용해서 그 가치의 합을 K로 만들려고 한다. 이때 필요한 동전 개수의 최솟값을 구하는 프로그램을 작성하시오.

https://www.acmicpc.net/problem/11047
*/

#include <iostream>
#include <algorithm>

using namespace std;

int coin[10];

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n, k, cnt = 0, temp = 0;

    cin >> n >> k;

    for (int i = 0; i < n; i++) {
        cin >> coin[i];
    }

    for (int i = n - 1; i >= 0; i--) {
        if (k - temp >= coin[i]) {
            cnt += (k - temp) / coin[i];
            temp += ((k - temp) / coin[i]) * coin[i];
        }
    }

    cout << cnt;
}