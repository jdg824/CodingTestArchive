#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n, k, x;
	vector <int>v;

	cin >> n >> k;

	for (int i = 0; i < n; i++) {
		cin >> x;
		v.push_back(x);
	}

	sort(v.begin(), v.end());

	cout << v[n - k];

	return 0;
}