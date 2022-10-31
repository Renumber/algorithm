/*
n개의 정수로 이루어진 임의의 수열이 주어진다. 우리는 이 중 연속된 몇 개의 수를 선택해서 구할 수 있는 합 중 가장 큰 합을 구하려고 한다. 단, 수는 한 개 이상 선택해야 한다.

예를 들어서 10, -4, 3, 1, 5, 6, -35, 12, 21, -1 이라는 수열이 주어졌다고 하자. 여기서 정답은 12+21인 33이 정답이 된다.

https://www.acmicpc.net/problem/1912
*/

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, temp, sum;
    int max;

    cin >> n;

    cin >> temp;
    sum = temp;
    max = temp;

    for (int i = 1; i < n; i++) {
        cin >> temp;
        sum = sum + temp > temp ? sum + temp : temp;
        max = max > sum ? max : sum;
    }

    cout << max;
}

/*
int sum[100000];

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, temp;
    int max;

    cin >> n;

    cin >> temp;
    sum[0] = temp;
    max = temp;

    for (int i = 1; i < n; i++) {
        cin >> temp;
        sum[i] = sum[i - 1] + temp > temp ? sum[i - 1] + temp : temp;
        max = max > sum[i] ? max : sum[i];
    }

    cout << max;
}
*/