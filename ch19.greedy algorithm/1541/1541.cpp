/*
세준이는 양수와 +, -, 그리고 괄호를 가지고 식을 만들었다. 그리고 나서 세준이는 괄호를 모두 지웠다.

그리고 나서 세준이는 괄호를 적절히 쳐서 이 식의 값을 최소로 만들려고 한다.

괄호를 적절히 쳐서 이 식의 값을 최소로 만드는 프로그램을 작성하시오.

https://www.acmicpc.net/problem/1541
*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;
vector<int> nums;
vector<char> chars;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    string str;
    int temp = 0, res = 0;
    bool isSub = false;
    cin >> str;

    for (char c : str) {
        if (c == '+' || c == '-') {
            nums.push_back(temp);
            chars.push_back(c);
            temp = 0;
        }
        else {
            temp = temp * 10 + (c - '0');
        }
    }
    nums.push_back(temp);
    res = nums[0];
    for (int i = 1; i < nums.size(); i++) {
        if (isSub) {
            res -= nums[i];
        }
        else {
            if (chars[i - 1] == '+') {
                res += nums[i];
            }
            else {
                res -= nums[i];
                isSub = true;
            }
        }
    }

    cout << res;

}