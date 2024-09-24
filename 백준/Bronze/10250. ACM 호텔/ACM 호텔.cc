#include <iostream>

using namespace std;

int main() {
	int t, h, w, n;

	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> h >> w >> n;

		int result = 0;

		if (n % h == 0)
			result = h * 100 + (n / h);
		else
			result = (n % h) * 100 + (n / h) + 1;

		cout << result << "\n";
	}

	return 0;
}