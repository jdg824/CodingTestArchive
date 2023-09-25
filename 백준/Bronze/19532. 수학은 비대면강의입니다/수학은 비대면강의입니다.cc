#include <iostream>

using namespace std;

int main() {
	double a, b, c, d, e, f;
	double x, y;

	cin >> a >> b >> c >> d >> e >> f;

	for (double i = -999; i <= 999; i++) {
		for (double j = -999; j <= 999; j++) {
			if (((a * i + b * j) == c) && (d * i + e * j) == f) {
				x = i;
				y = j;
			}
		}
	}

	cout << x << " " <<y;

	return 0;
}