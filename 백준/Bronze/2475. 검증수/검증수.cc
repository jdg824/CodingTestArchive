#include <iostream>
#include <math.h>

using namespace std;

int main() {
	int sum = 0;

	for (int i = 0; i < 5; i++) {
		int num;
		cin >> num;

		sum += pow(num, 2);
	}

	cout << sum % 10;

	return 0;
}