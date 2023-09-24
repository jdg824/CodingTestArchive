#include <iostream>

using namespace std;

int main() {
	int a;

	cin >> a;

	for (int i = 1; i < a; i++) {
		int sum = i;
		int mod = i;

		while (mod != 0) {
			sum += mod % 10;
			mod /= 10;
		}

		if (a == sum){
			cout << i;

			return 0;
		}
	}

	cout << "0";
	return 0;
}