#include <iostream>
#include <vector>

using namespace std;

int main() {
	int x, num;

	cin >> num;

	for (int i = 0; i < num; i++) {
		vector <int>dp(12, 0);

		dp[1] = 1;
		dp[2] = 2;
		dp[3] = 4;

		cin >> x;

		for (int i = 4; i <= x; i++) {
			dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
		}

		cout << dp[x] << "\n";
	}

	return 0;
}