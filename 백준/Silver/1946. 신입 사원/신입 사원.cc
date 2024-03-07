#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b) {
	return a.first < b.first;
}

int main() {
	int t;

	cin >> t;

	for (int i = 0; i < t; i++) {
		int n, cnt = 0;
		vector <pair<int, int>>v;

		cin >> n;

		for (int j = 0; j < n; j++) {
			int t, r;

			cin >> t >> r;
			v.push_back({ t, r });
		}

		sort(v.begin(), v.end(), cmp);

		int std = v[0].second;

		for (int j = 0; j < v.size(); j++) {
			if (v[j].second < std) {
				std = v[j].second;
				cnt++;
			}
		}

		cout << cnt+1 << "\n";
	}

	return 0;
}