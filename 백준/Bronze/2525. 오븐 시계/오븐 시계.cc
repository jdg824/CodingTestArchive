#include <iostream>

using namespace std;

int main() {
	int h, m, t;

	cin >> h >> m >> t;

	int tm = m+t;
	int th = h;

	if (tm > 59) {
		th = th + tm/60;
		tm %= 60;
		if (th > 23) {
			th -= 24;
		}
	}

	cout << th << " " <<tm;

	return 0;
}