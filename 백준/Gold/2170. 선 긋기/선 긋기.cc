#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(pair<int, int>a, pair<int, int>b) {
	if (a.second >= b.first)
		return a < b;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	vector <pair<int, int>>v;

	cin >> n;

	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;

		v.push_back({ a, b });
	}

	sort(v.begin(), v.end(), cmp);

	int min = v[0].first;
	int max = v[0].second;
	int len = 0;

	int idx = 1;
	while (idx != v.size()) {
		if (max >= v[idx].first && max < v[idx].second) {
			max = v[idx].second;
		}
		else if (max < v[idx].first) {
			len += max - min;
			min = v[idx].first;
			max = v[idx].second;
		}
		idx++;
	}

	cout << len + max - min;

	return 0;
}