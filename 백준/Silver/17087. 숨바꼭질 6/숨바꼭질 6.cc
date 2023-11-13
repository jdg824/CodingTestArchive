#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

int gcd(int& a, int& b) {
	int r;

	while (b != 0) {
		r = a % b;
		a = b;
		b = r;
	}

	return a;
}

int main() {
	int n, s;

	cin >> n >> s;

	int gcd_tmp = -1;

	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;

		int dist = abs(s - num);

		if (gcd_tmp != -1) {
			gcd_tmp = gcd(gcd_tmp, dist);
		}
		else
			gcd_tmp = dist;
	}

	cout << gcd_tmp;

	return 0;
}