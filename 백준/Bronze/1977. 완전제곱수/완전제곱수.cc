#include <iostream>
#include <math.h>

using namespace std;

int main() {
	int m, n, min = 100001;
	int sum = 0;

	cin >> m >> n;

	for (int i = 1; i <= 100; i++) {
		if (m <= pow(i, 2) && pow(i, 2) <= n) {
			sum += pow(i, 2);

			if (min > pow(i, 2))
				min = pow(i, 2);
		}
	}

	if (sum == 0)
		cout << "-1";
	else
		cout << sum << "\n" << min;

	return 0;
}