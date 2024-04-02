#include <iostream>

using namespace std;

int main() {
	int t;

	cin >> t;

	for (int i = 0; i < t; i++) {
		int west, east;

		cin >> west >> east;

		long long ans = 1;
		int r = 1;
		for (int j = east; j > east - west; j--) {
			ans *= j;
			ans /= r;
			r++;
		}

		cout << ans << "\n";
	}

	return 0;
}