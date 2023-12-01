#include <iostream>

using namespace std;

int dp[1001] = { 0, };

int main() {
	int n;

	cin >> n;

	for (int i = 1; i <= n; i++)
		cin >> dp[i];

	for (int i = 1; i <= n; i++) {
		if (i % 2 == 0) {
			for (int j = 1; j <= i / 2 + 1; j++)
				dp[i] = min(dp[j] + dp[i - j], dp[i]);
		}
		else if(i%2 != 0) {
			for (int j = 1; j <= i / 2; j++)
				dp[i] = min(dp[j] + dp[i - j], dp[i]);
		}
	}

	cout << dp[n];

	return 0;
}