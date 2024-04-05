#include <iostream>

using namespace std;

int main() {
	int t, n;
	long long dp[101] = { 0, };

	cin >> t;

	dp[0] = 0;
	dp[1] = 1;
	dp[2] = 1;

	for (int i = 0; i < t; i++) {
		cin >> n;

		for (int i = 3; i <= n; i++) {
			dp[i] = dp[i - 3] + dp[i - 2];
		}

		cout << dp[n] << "\n";
	}

	return 0;
}