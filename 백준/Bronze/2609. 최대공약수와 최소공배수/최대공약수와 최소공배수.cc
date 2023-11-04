#include <iostream>

using namespace std;

int main() {
	int n, m, min, idx =2, GCD = 1;

	cin >> n >> m;

	if (n < m)
		min = n;
	else
		min = m;

	while (idx <= min) {
		if (n % idx == 0 && m % idx == 0) {
			GCD *= idx;
			n /= idx;
			m /= idx;
		}
		else
			idx++;
	}

	cout << GCD << "\n" << GCD * n * m;
}