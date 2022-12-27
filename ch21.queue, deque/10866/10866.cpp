﻿/*
정수를 저장하는 덱(Deque)를 구현한 다음, 입력으로 주어지는 명령을 처리하는 프로그램을 작성하시오.

명령은 총 여덟 가지이다.

push_front X: 정수 X를 덱의 앞에 넣는다.
push_back X: 정수 X를 덱의 뒤에 넣는다.
pop_front: 덱의 가장 앞에 있는 수를 빼고, 그 수를 출력한다. 만약, 덱에 들어있는 정수가 없는 경우에는 -1을 출력한다.
pop_back: 덱의 가장 뒤에 있는 수를 빼고, 그 수를 출력한다. 만약, 덱에 들어있는 정수가 없는 경우에는 -1을 출력한다.
size: 덱에 들어있는 정수의 개수를 출력한다.
empty: 덱이 비어있으면 1을, 아니면 0을 출력한다.
front: 덱의 가장 앞에 있는 정수를 출력한다. 만약 덱에 들어있는 정수가 없는 경우에는 -1을 출력한다.
back: 덱의 가장 뒤에 있는 정수를 출력한다. 만약 덱에 들어있는 정수가 없는 경우에는 -1을 출력한다.

https://www.acmicpc.net/problem/10866
*/

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int deque[20000];

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, front = 10000, rear = 10000 - 1, num;
    string str;

    cin >> n;

    getline(cin, str);

    for (int i = 0; i < n; i++) {
        getline(cin, str);
        if (str == "pop_front") {
            if (front > rear) {
                cout << "-1" << '\n';
            }
            else {
                cout << deque[front] << '\n';
                front++;
            }
        }
        else if (str == "pop_back") {
            if (front > rear) {
                cout << "-1" << '\n';
            }
            else {
                cout << deque[rear] << '\n';
                rear--;
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
                cout << deque[front] << '\n';
            }
        }
        else if (str == "back") {
            if (front > rear) {
                cout << "-1" << '\n';
            }
            else {
                cout << deque[rear] << '\n';
            }
        }
        else {
            if (str[5] == 'f') {
                num = stoi(str.substr(11));
                front--;
                deque[front] = num;

            }
            else {
                num = stoi(str.substr(10));
                rear++;
                deque[rear] = num;
            }
        }
    }

}