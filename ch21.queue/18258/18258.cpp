/*
정수를 저장하는 큐를 구현한 다음, 입력으로 주어지는 명령을 처리하는 프로그램을 작성하시오.

명령은 총 여섯 가지이다.

push X: 정수 X를 큐에 넣는 연산이다.
pop: 큐에서 가장 앞에 있는 정수를 빼고, 그 수를 출력한다. 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.
size: 큐에 들어있는 정수의 개수를 출력한다.
empty: 큐가 비어있으면 1, 아니면 0을 출력한다.
front: 큐의 가장 앞에 있는 정수를 출력한다. 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.
back: 큐의 가장 뒤에 있는 정수를 출력한다. 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.

https://www.acmicpc.net/problem/18258
*/

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int queue[2000000];

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, front = 0, rear = -1, num;
    string str;

    cin >> n;

    getline(cin, str);

    for (int i = 0; i < n; i++) {
        getline(cin, str);
        if (str == "pop") {
            if (front > rear) {
                cout << "-1" << '\n';
            }
            else {
                cout << queue[front] << '\n';
                front++;
            }
        }
        else if (str == "size") {
            cout << rear - front + 1 << '\n';
        }
        else if (str == "empty") {
            if (front > rear) {
                cout << "1" << '\n';
            }
            else {
                cout << "0" << '\n';
            }
        }
        else if (str == "front") {
            if (front > rear) {
                cout << "-1" << '\n';
            }
            else {
                cout << queue[front] << '\n';
            }
        }
        else if (str == "back") {
            if (front > rear) {
                cout << "-1" << '\n';
            }
            else {
                cout << queue[rear] << '\n';
            }
        }
        else {
            num = stoi(str.substr(5));
            rear++;
            queue[rear] = num;
        }
    }

}