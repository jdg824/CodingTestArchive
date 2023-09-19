#include <iostream>

using namespace std;

int main() {
	int n, cnt = 2;

	cin >> n;

	while (n != 1) {
		if (n % cnt == 0) {
			n /= cnt;
			cout << cnt << "\n";
		}
		else
			cnt++;
	}

	return 0;
}