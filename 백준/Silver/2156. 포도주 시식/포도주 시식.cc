#include <iostream>

using namespace std;

int main() {
	int n;
	int g[10001] = { 0, };
	int dp[10001] = { 0, };

	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> g[i];
	}

	dp[0] = 0;
	dp[1] = g[1];
	dp[2] = g[1] + g[2];

	for (int i = 3; i <= n; i++) {
		dp[i] = max(dp[i - 3] + g[i - 1] + g[i], max(dp[i - 2] + g[i], dp[i - 1]));
	}

	cout << dp[n];

	return 0;
}