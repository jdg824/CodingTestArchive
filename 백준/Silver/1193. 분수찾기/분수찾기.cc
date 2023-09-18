#include <iostream>

using namespace std;

int main() {
	int x, chk = 1, get = 0, sum = 0;
	int a, b;

	cin >> x;

	while (1) {
		get = get + 1;
		sum += get;
		if (x <= sum)
			break;
		chk++;
	}

	if (chk % 2 == 0) {
		a = 1;
		b = chk;
		for (int i = sum-chk+1; i < x; i++) {
			a++;
			b--;
		}
	}
	else {
		a = chk;
		b = 1;
		for (int i = sum - chk + 1; i < x; i++) {
			a--;
			b++;
		}
	}

	cout << a << "/" << b;

	return 0;
}