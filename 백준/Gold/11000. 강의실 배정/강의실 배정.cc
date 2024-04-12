#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;


int main() {
	int n;
	vector<pair<int, int>> v;
	priority_queue<int, vector<int>, greater<int>> pq;

	cin >> n;

	for (int i = 0; i < n; i++) {
		int s, e;

		cin >> s >> e;

		v.push_back({ s, e });
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < n; i++) {
		pq.push(v[i].second);

		if (pq.top() <= v[i].first)
			pq.pop();
	}
	

	cout << pq.size();

	return 0;
}