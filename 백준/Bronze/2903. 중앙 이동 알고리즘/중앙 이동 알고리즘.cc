#include <iostream>

using namespace std;

int main() {
	int a, count = 3;

	cin >> a;

	for (int i = 1; i < a; i++) {
		count = count * 2 - 1;
	}

	cout << count * count;

	return 0;
}