#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);

	int dp[100001] = { 0, };
	int num, n, m;

	cin >> n >> m;

	for (int i = 1; i <= n; i++) {
		cin >> num;
		dp[i] = dp[i - 1] + num;
	}

	for (int i = 0; i < m; i++) {
		int start, end;

		cin >> start >> end;

		cout << dp[end] - dp[start - 1] <<"\n";
	}

	return 0;
}