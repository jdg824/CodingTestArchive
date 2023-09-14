#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main() {
	string b;
	int n, num;
	int sum = 0;

	cin >> b >> n;
	int len = b.length() - 1;
	for (int i = 0; i < b.length(); i++) {
		if ((b[len-i] >= 'A') && (b[len-i] <= 'Z'))
			num = b[len - i] - 55;

		if ((b[len - i] >= '0') && (b[len - i] <= '9'))
			num = b[len - i] - 48;

		sum += num * pow(n, i);
	}

	cout << sum;
}