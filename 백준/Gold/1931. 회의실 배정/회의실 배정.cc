#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(pair<int, int>a, pair<int, int>b) {
	if (a.first == b.first)
		return a.second > b.second;
	else
		return a.first > b.first;
}

int main() {
	vector<pair<int, int>> v;
	int n;
	int cnt = 0;

	cin >> n;

	for (int i = 0; i < n; i++) {
		int start, end;

		cin >> start >> end;

		v.push_back({ start, end });
	}

	sort(v.begin(), v.end(), cmp);

	int s = v[0].first;
	cnt++;

	for (int i = 1; i < v.size(); i++) {
		if (v[i].second <= s) {
			s = v[i].first;
			cnt++;
		}
	}

	cout << cnt;

	return 0;
}