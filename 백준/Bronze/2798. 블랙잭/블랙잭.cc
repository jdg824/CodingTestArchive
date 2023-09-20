#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, m, num, sum = 0, max = 0;
	vector <int>v;

	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		cin >> num;
		v.push_back(num);
	}

	for (int i = 0; i <= n - 3; i++) {
		for (int j = i + 1; j <= n - 2; j++) {
			for (int k = j + 1; k <= n - 1; k++) {
				sum = v[i] + v[j] + v[k];

				if ((sum <= m) && (sum >= max))
					max = sum;

				sum = 0;
			}
		}
	}

	cout << max;

	return 0;
}