#include <iostream>
#include <string>

using namespace std;

int main() {
	int n, t = 0, f = 0, count = 0;

	cin >> n;

	for (int i = n; i > 0; i--) {
		int num = i;

		while (num % 5 == 0) {
			num /= 5;
			f++;
		}

		while (num % 2 == 0) {
			num /= 2;
			t++;
		}
	}

	if (f < t)
		count = f;
	else
		count = t;

	cout << count;

	return 0;
}