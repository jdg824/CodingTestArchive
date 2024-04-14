#include <iostream>

using namespace std;

int main() {
	int n;
	long long dp[101][10] = { 0, };

	cin >> n;

	for (int i = 1; i < 10; i++)
		dp[1][i] = 1;

	for (int i = 2; i <= n; i++) {
		for (int j = 0; j <= 9; j++) {
			if (j == 0)
				dp[i][0] = dp[i - 1][j + 1];
			else if (j == 9)
				dp[i][9] = dp[i - 1][j - 1];
			else
				dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j + 1];

			dp[i][j] %= 1000000000;
		}
	}

	long long result = 0;

	for (int i = 0; i < 10; i++) {
		result = (result + dp[n][i]) % 1000000000;
	}

	cout << result % 1000000000;

	return 0;
}