#include <iostream>
#include <string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);

	long long a, b, cnt = 1;

	cin >> a >> b;

	while (b > a) {
		if (b % 2 == 0)
			b /= 2;
		else if (b % 10 == 1)
			b = (b - 1) / 10;
		else
			break;

		cnt++;
	}

	if (b == a)
		cout << cnt;
	else
		cout << -1;

	return 0;
}