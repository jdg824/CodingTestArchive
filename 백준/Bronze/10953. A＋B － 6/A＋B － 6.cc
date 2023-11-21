#include <iostream>

using namespace std;

int main() {
	int n;
	string str;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> str;

		int a = str[0] - '0';
		int b = str[2] - '0';

		cout << a + b << "\n";
	}
}