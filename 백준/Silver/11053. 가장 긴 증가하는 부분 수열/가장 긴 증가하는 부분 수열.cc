#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int n;
	int num[1001] = { 0, };
	int dp[1001] = { 0, };

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++) {
			if (num[i] > num[j])
				dp[i] = max(dp[j] + 1, dp[i]);
		}
	}

	cout << *max_element(dp, dp + 1001)+1;
}