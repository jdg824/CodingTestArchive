#include <iostream>

using namespace std;

int main() {
	int n;

	cin >> n;

	if (n == 0)
		n = 1;

	for (int i = n-1; i >= 1; i--)
		n *= i;

	cout << n;

	return 0;
}