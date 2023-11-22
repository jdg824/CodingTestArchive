#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	vector<string>cmp;

	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		string str;
		cin >> str;
		cmp.push_back(str);
	}

	sort(cmp.begin(), cmp.end());

	int cnt = 0;
	for (int i = 0; i < m; i++) {
		string str;
		cin >> str;

		if (binary_search(cmp.begin(), cmp.end(), str))
			cnt++;
	}

	cout << cnt;

	return 0;
}