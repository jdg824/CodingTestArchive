#include <iostream>

using namespace std;

int dp[1000001] = { 0, };

int main() {
	int x;

	cin >> x;

	dp[1] = 1;
	dp[2] = 2;

	for (int i = 3; i <= x; i++) {
		dp[i] = (dp[i - 2] + dp[i - 1])%10007;

	}

	cout << dp[x]%10007;

	return 0;
}