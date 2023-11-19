#include <iostream>

using namespace std;

int dp[1000001] = { 0, };

int main() {
	int x;

	cin >> x;

	dp[1] = 1; 
	dp[2] = 3;

	for (int i = 3; i <= x; i++) {
		if (i % 2 == 0)
			dp[i] = (dp[i - 1] * 2 + 1) % 10007;
		else if(i%2!=0)
			dp[i] = (dp[i - 1] * 2 - 1) % 10007;
	}

	cout << dp[x]%10007;

	return 0;
}