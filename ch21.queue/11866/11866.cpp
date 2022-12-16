/*
요세푸스 문제는 다음과 같다.

1번부터 N번까지 N명의 사람이 원을 이루면서 앉아있고, 양의 정수 K(≤ N)가 주어진다. 이제 순서대로 K번째 사람을 제거한다. 한 사람이 제거되면 남은 사람들로 이루어진 원을 따라 이 과정을 계속해 나간다. 이 과정은 N명의 사람이 모두 제거될 때까지 계속된다. 원에서 사람들이 제거되는 순서를 (N, K)-요세푸스 순열이라고 한다. 예를 들어 (7, 3)-요세푸스 순열은 <3, 6, 2, 7, 5, 1, 4>이다.

N과 K가 주어지면 (N, K)-요세푸스 순열을 구하는 프로그램을 작성하시오.

https://www.acmicpc.net/problem/11866
*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, k, temp, cnt = 0;
    queue<int> q;
    vector<int> v;

    cin >> n >> k;

    for (int i = 1; i <= n; i++) {
        q.push(i);
    }
    while (true) {
        if (q.empty()) {
            break;
        }
        temp = q.front();
        q.pop();
        cnt++;
        if (cnt == k) {
            cnt = 0;
            v.push_back(temp);
        }
        else {
            q.push(temp);
        }
    }
    cout << '<' << v[0];

    for (int i = 1; i < v.size(); i++) {
        cout << ", " << v[i];
    }
    cout << '>';
}