#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int n;
	int num[1001] = { 0, };
	int dp[1001] = { 0, };

	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> num[i];
		dp[i] = num[i];
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j < i; j++) {
			if (num[i] > num[j])
				dp[i] = max(dp[i], dp[j] + num[i]);
		}
	}

	cout << *max_element(dp, dp + n+1);

	return 0;
}