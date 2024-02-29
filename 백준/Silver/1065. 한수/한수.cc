#include <iostream>

using namespace std;

int main() {
	int n, h, t, o;	//백 십 일 자리숫자
	int cnt = 0;

	cin >> n;

	for (int i = 1; i <= n; i++) {
		int tmp;

		if (i % 100 == i)
			cnt++;
		else {
			h = i / 100;
			t = (i % 100) / 10;
			o = i % 100 % 10;

			tmp = h - t;

			if (t - tmp == o)
				cnt++;
		}
	}

	cout << cnt;

	return 0;
}