#include <iostream>

using namespace std;

int dp[100001] = { 0 };

int main() {
	int n, cnt = 0;

	cin >> n;
	
	dp[1] = -1;
	dp[2] = 1;
	dp[3] = -1;
	dp[4] = 2;
	dp[5] = 1;

	for (int i = 6; i <= n; i++) {
		if (i % 5 == 0)
			dp[i] = dp[5] * (i / 5);
		else
			dp[i] = dp[2] + dp[i - 2];
	}

	cout << dp[n];

	return 0;
}