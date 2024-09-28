#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, m;

int main() {
	vector<long long> v;

	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		long long len;
		cin >> len;

		v.push_back(len);
	}

	long long max_n = *max_element(v.begin(), v.end());

	long long left = 0;
	long long right = max_n;
	long long mid = (left + right) / 2;

	long long ans = 0;

	while (left <= right) {
		long long cnt = 0;

		for (int i = 0; i < n; i++) {
			if (v[i] > mid)
				cnt += (v[i] - mid);
		}

		if (cnt >= m) {	//cnt가 mid보다 크다는것은 작은 크기로 잘라야함
			left = mid + 1;
			
			if (cnt >= m)
				ans = max(ans, mid);
		}
		else if (cnt < m) {
			right = mid - 1;
		}

		mid = (right + left) / 2;
	}

	cout << ans;
}