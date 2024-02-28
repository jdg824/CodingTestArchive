#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int m, n, num;
	vector<int> v;

	cin >> m;

	for (int i = 0; i < m; i++) {
		cin >> num;
		v.push_back(num);
	}

	sort(v.begin(), v.end());

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> num;
		
		if (binary_search(v.begin(), v.end(), num))
			cout << 1 << " ";
		else
			cout << 0 << " ";
	}

	return 0;
}