#include <iostream>

using namespace std;

int m, n;
int arr[10] = { 0, };
bool chk[10] = { 0, };

void dfs(int start) {
	if (start == m) {
		for (int i = 0; i < m; i++) {
			cout << arr[i] << " ";
		}
		cout << "\n";
	}
	else {
		for (int i = 1; i <= n; i++) {
			if (chk[i] == 0) {
				chk[i] = 1;
				arr[start] = i;
				dfs(start + 1);
				chk[i] = 0;
			}
		}
	}
}

int main() {
	cin >> n >> m;

	dfs(0);

	return 0;
}