#include <iostream>

using namespace std;

int main() {
	int t;
	bool flag = 0;
	int f = 0, o = 0, t1 = 0;

	cin >> t;

	while (1) {
		if (t % 10 != 0) {
			cout << -1;
			flag = 1;
			break;
		}

		if (t == 0)
			break;

		if (t / 300 != 0) {
			f += t / 300;
			t %= 300;
		}
		else if (t / 60 != 0) {
			o += t / 60;
			t %= 60;
		}
		else if (t / 10 != 0) {
			t1 += t / 10;
			t %=10;
		}
	}

	if (flag == 0)
		cout << f << " " << o << " " << t1;

	return 0;
}