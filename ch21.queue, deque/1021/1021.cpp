/*
지민이는 N개의 원소를 포함하고 있는 양방향 순환 큐를 가지고 있다. 지민이는 이 큐에서 몇 개의 원소를 뽑아내려고 한다.

지민이는 이 큐에서 다음과 같은 3가지 연산을 수행할 수 있다.

    1. 첫 번째 원소를 뽑아낸다. 이 연산을 수행하면, 원래 큐의 원소가 a1, ..., ak이었던 것이 a2, ..., ak와 같이 된다.
    2. 왼쪽으로 한 칸 이동시킨다. 이 연산을 수행하면, a1, ..., ak가 a2, ..., ak, a1이 된다.
    3. 오른쪽으로 한 칸 이동시킨다. 이 연산을 수행하면, a1, ..., ak가 ak, a1, ..., ak-1이 된다.

큐에 처음에 포함되어 있던 수 N이 주어진다. 그리고 지민이가 뽑아내려고 하는 원소의 위치가 주어진다. (이 위치는 가장 처음 큐에서의 위치이다.) 이때, 그 원소를 주어진 순서대로 뽑아내는데 드는 2번, 3번 연산의 최솟값을 출력하는 프로그램을 작성하시오.
*/

#include <iostream>
#include <algorithm>
#include <string>
#include <deque>

using namespace std;

deque<int> de;
int n, m;

void printDe() {
    for (int i = 0; i < de.size(); i++) {
        cout << de[i] << ' ';
    }
    cout << '\n';
}

int calc(int num) {
    int index = -1, res = 0;
    if (de.size() == 1) {
        return 0;
    }
    for (int i = 0; i < de.size(); i++) {
        if (de[i] == num) {
            index = i;
        }
    }
    if (de.size() / 2 >= index) {//2번 연산 실행
        res = index;
        for (int i = 0; i < index; i++) {
            de.push_back(de.front());
            de.pop_front();
        }
        de.pop_front();
    }
    else {//3번 연산 실행
        res = de.size() - index;
        for (int i = 0; i < de.size() - index - 1; i++) {
            de.push_front(de.back());
            de.pop_back();
        }
        de.pop_back();
    }
    return res;
}

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int temp, cnt = 0;

    cin >> n >> m;

    if (n == 1) {
        cin >> temp;
        cout << 0;
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        de.push_back(i);
    }

    for (int i = 0; i < m; i++) {
        cin >> temp;
        cnt += calc(temp);
    }

    cout << cnt;


}