#include <iostream>

using namespace std;

int n, m;
int v[9] = { 0, };
bool chk[9] = { 0, };

void dfs(int num, int cnt) {
	if (cnt == m) {
		for (int i = 0; i < m; i++) {
			cout << v[i] << " ";
		}
		cout << "\n";
	}
	else {
		for (int i = num; i <= n; i++) {
			if (chk[i] == 0) {
				v[cnt] = i;
				dfs(i, cnt + 1);
			}
		}
	}
}

int main() {
	cin >> n >> m;

	dfs(1, 0);
}