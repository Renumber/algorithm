/*
자연수 A를 B번 곱한 수를 알고 싶다. 단 구하려는 수가 매우 커질 수 있으므로 이를 C로 나눈 나머지를 구하는 프로그램을 작성하시오.

https://www.acmicpc.net/problem/1629
*/

#include <iostream>
#include <algorithm>

using namespace std;

long long a, b, c, temp;

long long calc(long long num) {
    if (num == 0) {
        return 1;
    }
    else if (num == 1) {
        return a % c;
    }

    temp = calc(num / 2) % c;
    if (num % 2 == 0) {
        return temp * temp % c;
    }
    return temp * temp % c * a % c;
}

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> a >> b >> c;

    cout << calc(b);
}