#include <iostream>

using namespace std;

int main() {
	int t;

	cin >> t;

	for (int i = 0; i < t; i++) {
		int k, n;
		int dp[15][15] = { 0, };

		cin >> k >> n;

		for (int i = 1; i <= 14; i++) {
			dp[0][i] = i;
		}

		for (int i = 1; i <= k; i++) {
			for (int j = 1; j <= n; j++) {
				dp[i][j] = dp[i][j-1] + dp[i - 1][j];
			}
		}

		cout << dp[k][n] << "\n";
	}

	return 0;
}