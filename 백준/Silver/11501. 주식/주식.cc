#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int t, n;

	cin >> t;

	for (int i = 0; i < t; i++) {
		vector<int> v;
	
		cin >> n;

		for (int j = 0; j < n; j++) {
			int num;

			cin >> num;

			v.push_back(num);
		}

		int idx = v.size() - 1;
		long long result = 0;

		for (int j = v.size() - 2; j >= 0; j--) {
			if (v[idx] > v[j])
				result += v[idx] - v[j];
			else
				idx = j;
		}

		cout << result << "\n";
		v.clear();
	}

	return 0;
}