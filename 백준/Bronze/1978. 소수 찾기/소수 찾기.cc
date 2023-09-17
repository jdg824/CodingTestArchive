#include <iostream>

using namespace std;

int main() {
	int n, a, count =0, total=0;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> a;

		for (int j = 1; j <= a; j++) {
			if (a % j == 0)
				count++;
		}
		if (count == 2)
			total++;

		count = 0;
	}

	cout << total;
	return 0;
}