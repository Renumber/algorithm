/*
한 개의 회의실이 있는데 이를 사용하고자 하는 N개의 회의에 대하여 회의실 사용표를 만들려고 한다. 각 회의 I에 대해 시작시간과 끝나는 시간이 주어져 있고, 각 회의가 겹치지 않게 하면서 회의실을 사용할 수 있는 회의의 최대 개수를 찾아보자. 단, 회의는 한번 시작하면 중간에 중단될 수 없으며 한 회의가 끝나는 것과 동시에 다음 회의가 시작될 수 있다. 회의의 시작시간과 끝나는 시간이 같을 수도 있다. 이 경우에는 시작하자마자 끝나는 것으로 생각하면 된다.

https://www.acmicpc.net/problem/1931
*/

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector <pair<int, int>> v;

bool compare(pair<long long, long long> p1, pair <long long, long long > p2) {
    if (p1.second < p2.second) {
        return true;
    }
    if (p1.second == p2.second && p1.first < p2.first) {
        return true;
    }
    else return false;
}

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, cnt = 0;

    long long num1, num2, last = 0;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> num1 >> num2;
        v.push_back(pair<long long, long long >(num1, num2));
    }

    sort(v.begin(), v.end(), compare);

    for (int i = 0; i < n; i++) {
        if (v[i].first >= last) {
            cnt++;
            last = v[i].second;
        }
    }

    cout << cnt;

}