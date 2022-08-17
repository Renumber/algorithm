/*

*/

#include <iostream>
#include <cmath>

using namespace std;

void rec(int from, int to, int other, int num) {
    if (num == 1) {
        cout << from << ' ' << to << '\n';
    }
    else {
        rec(from, other, to, num - 1);
        cout << from << ' ' << to << '\n';
        rec(other, to, from, num - 1);
    }
}

int main() {
    int num;
    cin >> num;
    cout << (int)pow(2, num) - 1 << '\n';

    rec(1, 3, 2, num);
}