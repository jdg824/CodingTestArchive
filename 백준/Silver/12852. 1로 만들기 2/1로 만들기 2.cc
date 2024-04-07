#include <iostream>

using namespace std;

int dp[1000001] = { 0, };

int main() {
	int x;

	cin >> x;

	dp[0] = 0;
	dp[1] = 0;
	dp[2] = 1;
	dp[3] = 1;

	for (int i = 4; i <= x; i++) {
		if (i % 2 == 0 && i % 3 == 0)
			dp[i] = min(dp[i / 3] + 1, min(dp[i / 2] + 1, dp[i - 1] + 1));
		else if (i % 2 == 0)
			dp[i] = min(dp[i / 2] + 1, dp[i - 1] + 1);
		else if (i % 3 == 0)
			dp[i] = min(dp[i / 3] + 1, dp[i - 1] + 1);
		else
			dp[i] = dp[i - 1] + 1;
	}

	cout << dp[x] << "\n";

	while (x >= 1) {
		cout << x << " ";

		if (x % 2 == 0 && x % 3 == 0) {
			int n = min(dp[x / 3] + 1, min(dp[x / 2] + 1, dp[x - 1] + 1));

			if (n == dp[x / 3] + 1)
				x /= 3;
			else if (n == dp[x / 2] + 1)
				x /= 2;
			else
				x--;
		}
		else if (x % 2 == 0) {
			if (dp[x / 2] + 1 > dp[x - 1] + 1)
				x--;
			else
				x /= 2;
		}
		else if (x % 3 == 0) {
			if (dp[x / 3] + 1 > dp[x - 1] + 1)
				x--;
			else
				x /= 3;
		}
		else
			x--;
	}
}