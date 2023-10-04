#include <iostream>

using namespace std;

int main() {
	int sugar, count =0;

	cin >> sugar;

	while (sugar != 0) {
		if ((sugar-3)% 5 == 0) {
			count += sugar / 5;
			count++;
			sugar = 0;
		}
		else if (sugar % 5 == 0) {
			count += sugar / 5;
			sugar = 0;
		}
		else {
			count++;
			sugar -= 3;
		}

		if (sugar < 0) {
			count = -1;
			break;
		}
	}

	cout << count;

	return 0;
}