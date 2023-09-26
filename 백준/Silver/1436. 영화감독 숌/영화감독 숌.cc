#include <iostream>
#include <string>

using namespace std;

int main() {
	int n, count = 0;
	int start = 665;

	cin >> n;

	while (1) {
		start++;
		int temp = start;

		while (temp >= 666) {
			if (temp % 1000 == 666) {
				count++;
				break;
			}
			temp /= 10;
		}
		if (count == n) {
			cout << start;
			break;
		}

	}

	return 0;
}