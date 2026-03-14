#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int ans[1025][1025] = { 0, };
	int val[1025][1025] = { 0, };
	int n, m;

	cin >> n >> m;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> ans[i][j];


			val[i][j] = val[i - 1][j] + val[i][j - 1] - val[i - 1][j - 1] + ans[i][j];
		}
	}

	for (int i = 0; i < m; i++) {
		int x1, x2, y1, y2;

		cin >> x1 >> y1 >> x2 >> y2;

		cout << val[x2][y2] - val[x1-1][y2] - val[x2][y1-1] + val[x1-1][y1-1]<< "\n";
	}

	return 0;
}