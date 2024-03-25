#include <iostream>

using namespace std;

int dp_z[41] = { 0, };
int dp_o[41] = { 0, };

int main() {
	int t;

	cin >> t;

	dp_z[0] = 1, dp_o[0] = 0;
	dp_z[1] = 0, dp_o[1] = 1;

	for (int i = 0; i < t; i++) {
		int n;

		cin >> n;

		for (int j = 2; j <= n; j++) {
			dp_z[j] = dp_z[j - 2] + dp_z[j - 1];
			dp_o[j] = dp_o[j - 2] + dp_o[j - 1];
		}

		cout << dp_z[n] << " " << dp_o[n] << "\n";

		for (int j = 2; j <= n; j++) {
			dp_z[j] = 0;
			dp_o[j] = 0;
		}

	}

	return 0;
}