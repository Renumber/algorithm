/*

*/

#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, temp;
    queue<int> q;

    cin >> n;

    for (int i = 1; i <= n; i++) {
        q.push(i);
    }

    for (int i = 0; i < n - 1; i++) {
        q.pop();
        temp = q.front();
        q.pop();
        q.push(temp);
    }

    cout << q.front();
}