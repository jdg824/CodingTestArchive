#include <iostream>

using namespace std;

int main() {
	int total, num, price, count, sum = 0;

	cin >> total >> num;

	for (int i = 0; i < num; i++) {
		cin >> price >> count;

		sum += price * count;
	}

	if (total == sum)
		cout << "Yes";
	else
		cout << "No";
}