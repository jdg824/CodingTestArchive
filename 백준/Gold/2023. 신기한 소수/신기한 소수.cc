#include <iostream>
#include <cmath>

using namespace std;

int n;

bool is_prime(int number) {
	for (int i = 2; i <= number / 2; i++) {
		if (number % i == 0)
			return 0;
	}

	return 1;
}

void dfs(int number, int len) {
	if (len == n) {
		if (is_prime(number) == 1)
			cout << number << "\n";
		return;
	}
	

	for (int i = 1; i <= 9; i++) {
		if (i % 2 == 0)
			continue;

		if (is_prime(number * 10 + i) == 1) {
			dfs(number * 10 + i, len+1);
		}
	}
}


int main() {
	cin >> n;

	for (int i = 2; i <= 9; i++) {
		if (is_prime(i) == 1) {
			dfs(i, 1);
		}
	}
}