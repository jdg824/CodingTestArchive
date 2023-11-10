#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int t;

	cin >> t;

	for (int i = 0; i < t; i++) {
		int n;

		cin >> n;

		vector <int>v;
		for (int j = 0; j < n; j++) {
			int num;
			cin >> num;

			v.push_back(num);
		}

		sort(v.begin(), v.end());

		int left, right;
		long long result = 0;

		for (int j = 0; j < n; j++) {
			for (int k = j + 1; k < n; k++) {
				right = v[k];
				left = v[j];

				int cnt = 2;
				int GCD = 1;

				while (cnt <= left) {
					if (left % cnt == 0 && right % cnt == 0) {
						left /= cnt;
						right /= cnt;
						GCD *= cnt;
						continue;
					}
					else
						cnt++;
				}
				result += GCD;
			}
		}

		v.clear();
		cout << result << "\n";
	}
	
	return 0;
}