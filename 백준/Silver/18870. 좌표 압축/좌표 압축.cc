#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long long int n, a;
	vector <long long int>v;
	vector <pair<long long int, long long int>>ans;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> a;
		v.push_back(a);
		ans.push_back(make_pair(a, 0));
	}

	sort(v.begin(), v.end());
	v.erase(unique(v.begin(), v.end()), v.end());

	for (int i = 0; i < n; i++) {
		ans[i].second = lower_bound(v.begin(), v.end(), ans[i].first) - v.begin();
		cout << ans[i].second << " ";
	}

	return 0;
}