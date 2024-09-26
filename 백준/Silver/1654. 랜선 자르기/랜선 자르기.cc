#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	long long n, m;
	vector<long long> v;

	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		long long num;

		cin >> num;
		v.push_back(num);
	}

	long long left = 1;
	long long right = *max_element(v.begin(), v.end());
	long long mid = (left + right) / 2;

	while (left <= right) {
		int cnt = 0;

		for (int i = 0; i < n; i++)
			cnt += v[i] / mid;

		if (cnt >= m)
			left = mid + 1;
		else
			right = mid - 1;

		mid = (left + right) / 2;
	}

	cout << mid << "\n";

	return 0;
}