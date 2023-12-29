#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, k;
	vector <int>v;

	cin >> n >> k;

	for (int i = 0; i < n; i++) {
		int money;
		cin >> money;

		v.push_back(money);
	}

	int idx = v.size() - 1;
	int cnt = 0;

	while (k > 0) {
		cnt += k / v[idx];
		k %= v[idx];
		idx--;
	}

	cout << cnt;

	return 0;
}