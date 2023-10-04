#include <iostream>
#include <math.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a, b, c, d;
	int r_a, r_b, m;

	cin >> a >> b >> c >> d;

	r_b = b * d;
	r_a = a * d + c * b;

	int i = 2;

	while (i <= min(r_a,r_b)) {
		if ((r_b % i == 0) && (r_a % i == 0)) {
			r_a /= i;
			r_b /= i;
		}
		else {
			i++;
		}
	}

	cout << r_a << " " << r_b;

	return 0;
}