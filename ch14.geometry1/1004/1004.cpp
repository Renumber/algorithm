/*
어린 왕자는 소혹성 B-664에서 자신이 사랑하는 한 송이 장미를 위해 살아간다. 어느 날 장미가 위험에 빠지게 된 것을 알게 된 어린 왕자는, 장미를 구하기 위해 은하수를 따라 긴 여행을 하기 시작했다. 하지만 어린 왕자의 우주선은 그렇게 좋지 않아서 행성계 간의 이동을 최대한 피해서 여행해야 한다. 아래의 그림은 어린 왕자가 펼쳐본 은하수 지도의 일부이다.



빨간 실선은 어린 왕자가 출발점에서 도착점까지 도달하는데 있어서 필요한 행성계 진입/이탈 횟수를 최소화하는 경로이며, 원은 행성계의 경계를 의미한다. 이러한 경로는 여러 개 존재할 수 있지만 적어도 3번의 행성계 진입/이탈이 필요하다는 것을 알 수 있다.

위와 같은 은하수 지도, 출발점, 도착점이 주어졌을 때 어린 왕자에게 필요한 최소의 행성계 진입/이탈 횟수를 구하는 프로그램을 작성해 보자. 행성계의 경계가 맞닿거나 서로 교차하는 경우는 없다. 또한, 출발점이나 도착점이 행성계 경계에 걸쳐진 경우 역시 입력으로 주어지지 않는다.

https://www.acmicpc.net/problem/1004
*/

#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;
# define M_PI           3.14159265358979323846

bool isIn(int x, int y, int cx, int cy, int r) {
	double dis = pow(cx - x, 2) + pow(cy - y, 2);
	if (r * r > dis) {
		return true;
	}
	return false;
}

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int t, n, x1, y1, x2, y2, cx, cy, r, cnt = 0;

	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> x1 >> y1 >> x2 >> y2;
		cin >> n;
		cnt = 0;
		for (int j = 0; j < n; j++) {
			cin >> cx >> cy >> r;
			if (isIn(x1, y1, cx, cy, r)) {
				cnt++;
				if (isIn(x2, y2, cx, cy, r)) {
					cnt--;
				}
			}
			else if (isIn(x2, y2, cx, cy, r)) {
				cnt++;
			}
		}
		cout << cnt << '\n';
	}

}