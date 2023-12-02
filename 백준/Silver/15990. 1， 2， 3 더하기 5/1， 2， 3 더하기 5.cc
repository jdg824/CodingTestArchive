#include <iostream>

using namespace std;

long long int dp[100001][4] = { 0, };

int main() {
	int n;

	dp[1][1] = dp[2][2] = 1;
	dp[3][1] = dp[3][2] = dp[3][3] = 1;

	for (int i = 4; i < 100001; i++) {
		dp[i][1] = (dp[i - 1][2] + dp[i - 1][3]) % 1000000009;
		dp[i][2] = (dp[i - 2][1] + dp[i - 2][3]) % 1000000009;
		dp[i][3] = (dp[i - 3][2] + dp[i - 3][1]) % 1000000009;
	}

	cin >> n;

	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;

		cout << (dp[num][1] + dp[num][2] + dp[num][3])% 1000000009 << "\n";
	}

	return 0;
}