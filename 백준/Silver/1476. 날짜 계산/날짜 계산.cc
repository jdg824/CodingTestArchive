#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);

	int e, s, m, real = 0;

	cin >> e >> s >> m;

	int r_e = 0, r_s = 0, r_m = 0;

	while (1) {
		if (r_e == 16)
			r_e = 1;
		if (r_s == 29)
			r_s = 1;
		if (r_m == 20)
			r_m = 1;

		if (r_e == e && r_s == s && r_m == m)
			break;

		r_e++;
		r_s++;
		r_m++;
		real++;
	}

	cout << real;

	return 0;
}