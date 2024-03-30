#include <iostream>

using namespace std;

int num[501][501] = { 0, };
int dp[501][501] = { 0, };

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;

	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			cin >> num[i][j];
		}
	}

	dp[0][0] = num[0][0];

	int m_num = num[0][0];

	for (int i = 1; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			if (j == 0)
				dp[i][j] = num[i][0] + dp[i - 1][0];
			else if (j == i)
				dp[i][j] = num[i][j] + dp[i - 1][j - 1];
			else
				dp[i][j] = max(num[i][j] + dp[i - 1][j - 1], num[i][j] + dp[i - 1][j]);

			m_num = max(m_num, dp[i][j]);
		}
	}

	cout << m_num;

	return 0;
}