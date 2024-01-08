#include <iostream>

using namespace std;

int main() {
	int n;
	int cnt = 0;
	int money[6] = { 500,100,50,10,5,1 };

	cin >> n;

	int m = 1000 - n;

	while (m > 0) {
		for (int i = 0; i < 6; i++) {
			if (m >= money[i]) {
				m -= money[i];
				cnt++;
				break;
			}
		}
	}

	cout << cnt;

	return 0;
}