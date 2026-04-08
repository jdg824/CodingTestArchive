#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, k;
	vector<long long> v;

	cin >> n >> k;

	for (int i = 0; i < n; i++) {
		long long num;
		cin >> num;

		v.push_back(num);
	}

	sort(v.begin(), v.end());

	cout << v[k-1];
}