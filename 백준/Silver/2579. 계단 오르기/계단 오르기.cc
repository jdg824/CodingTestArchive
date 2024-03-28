#include <iostream>

using namespace std;

int st[301] = { 0, };
int dp[301] = { 0, };

int main() {
	int n;

	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> st[i];
	}

	dp[1] = st[1];
	dp[2] = st[1] + st[2];
	dp[3] = max(st[1] + st[3], st[2] + st[3]);

	for (int i = 4; i <= n; i++) {
		dp[i] = max(st[i - 1] + dp[i - 3] + st[i], st[i] + dp[i - 2]);
	}

	cout << dp[n];

	return 0;
}