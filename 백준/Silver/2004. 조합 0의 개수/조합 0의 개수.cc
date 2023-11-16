#include <iostream>

using namespace std;

long long find(int n, int idx) {
	long long num = 0;

	for (long long i = idx; i <= n; i *= idx) {
		num += n / i;
	}

	return num;
}

int main() {
	long long n, m;

	cin >> n >> m;

	long long five, two;

	five = find(n, 5) - find(m, 5) - find(n - m, 5);
	two = find(n, 2) - find(m, 2) - find(n - m, 2);

	cout << min(five, two);

	return 0;
}