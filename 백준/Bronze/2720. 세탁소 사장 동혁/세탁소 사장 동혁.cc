#include <iostream>
#include <vector>

using namespace std;

int main() {
	int t, c, q;
	vector <int>v;

	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> c;

		q = c / 25;
		c -= q * 25;
		v.push_back(q);

		q = c / 10;
		c -= q * 10;
		v.push_back(q);

		q = c / 5;
		c -= q * 5;
		v.push_back(q);

		q = c / 1;
		v.push_back(q);

		for (int j = 4 * i; j < 4 * i + 4; j++)
			cout << v[j] << " ";
		cout << "\n";
	}

	return 0;
}