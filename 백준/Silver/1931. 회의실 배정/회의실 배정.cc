#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool compare(pair<int, int>x, pair<int, int>y) {
	if (x.second == y.second)
		return x.first < y.first;

	return x.second < y.second;
}

int main() {
	int n;
	vector<pair<int, int>>v;
	vector<int> arr;

	cin >> n;

	for (int i = 0; i < n; i++) {
		int start, end;

		cin >> start >> end;
		v.push_back({ start, end });
	}

	sort(v.begin(), v.end(), compare);

	int start = v[0].second;
	int cnt = 1;

	for (int i = 1; i < n; i++) {
		if (start <= v[i].first) {
			start = v[i].second;
			cnt++;
		}
	}

	cout << cnt;

	return 0;
}