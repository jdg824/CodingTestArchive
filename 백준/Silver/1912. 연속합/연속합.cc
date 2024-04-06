#include <iostream>
#include <algorithm>
#include <limits.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, cnt =0;
	int ans[100001] = { 0, };
	int dp[100001] = { 0, };

	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> ans[i];

		if(ans[i]<0)
			cnt++;
	}

	int m = ans[1];

	for (int i = 1; i <= n; i++) {
		if (cnt == n) {
			dp[i] = max(ans[i], ans[i] + dp[i - 1]);
			
			m = max(m, dp[i]);
		}
		else {
			dp[i] = max(dp[i-1] + ans[i], 0);

			m = max(m, dp[i]);
		}
	}

	cout << m;

	return 0;
}