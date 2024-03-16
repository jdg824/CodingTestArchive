#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	vector <int> v;
	int sum = 0;

	for (int i = 0; i < 9; i++) {
		int n;

		cin >> n;
		v.push_back(n);
		sum += n;
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < 9; i++) {
		//cout << i << " ";
		for (int j = i + 1; j < 9; j++) {
			if (sum - (v[i] + v[j]) == 100) {
				for (int k = 0; k < 9; k++) {
					if (k == i || k == j)
						continue;
					cout << v[k] << "\n";
				}
				return 0;
			}
		}
	}
}