#include <iostream>

using namespace std;

int main() {
	long int s, result = 0, cnt = 0;

	cin >> s;

	for (long int i = 1; ; i++) {
		result += i;
		cnt++;

		if ((s - result) <= i)
			break;
	}

	cout << cnt;
}