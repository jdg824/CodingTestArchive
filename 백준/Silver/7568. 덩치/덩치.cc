#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, x, y, cnt;
	vector<pair<int, int>>v;

	cin >> n;
	
	for (int i = 0; i < n; i++) {
		cin >> x >> y;

		v.push_back({ x, y });
	}

	for (int i = 0; i < n; i++) {
		cnt = 1;
		for (int j= 0; j < n; j++) {
			if (v[i].first < v[j].first && v[i].second < v[j].second)
				cnt++;
		}
		cout << cnt << " ";
	}

	return 0;
}