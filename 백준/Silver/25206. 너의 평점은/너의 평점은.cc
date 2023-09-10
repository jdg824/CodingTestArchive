#include <iostream>

using namespace std;

int main() {
	string subject, input;
	double grade, total = 0, count=0;

	for (int i = 0; i < 20; i++) {
		cin >> subject >> grade >> input;
		count += grade;

		if (input == "P") {
			count -= grade;
			continue;
		}
		if (input == "A+")
			total += 4.5 * grade;
		if (input == "A0")
			total += 4 * grade;
		if (input == "B+")
			total += 3.5 * grade;
		if (input == "B0")
			total += 3 * grade;
		if (input == "C+")
			total += 2.5 * grade;
		if (input == "C0")
			total += 2 * grade;
		if (input == "D+")
			total += 1.5 * grade;
		if (input == "D0")
			total += 1 * grade;
		if (input == "F")
			total += 0 * grade;
	}

	cout << total / count;
}