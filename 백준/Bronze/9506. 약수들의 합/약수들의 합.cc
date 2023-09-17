#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, sum =0;
	vector <int>v;

	while (1) {
		cin >> n;

		if (n == -1)
			break;

		for (int i = 1; i < n; i++) {
			if (n % i == 0) {
				sum += i;
				v.push_back(i);
			}
		}

		if (sum == n) {
			cout << n << " = ";
			for (int j = 0; j < v.size() - 1; j++) {
				cout << v[j] << " + ";
			}
			cout << v[v.size() - 1] << "\n";
		}

		if (sum != n) {
			cout << n << " is NOT perfect.\n";
		}

		v.clear();
		sum = 0;
	}

	return 0;
}