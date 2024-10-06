#include <iostream>

using namespace std;

int n, m;
int v[8] = { 0, };
bool chk[8] = { 0, };

void dfs(int cnt) {
	if (cnt == m) {
		for (int i = 0; i < m; i++)
			cout << v[i] << " ";
		cout << "\n";
	}
	else {
		for (int i = 1; i <= n; i++) {
			v[cnt] = i;
			dfs(cnt + 1);
		}
	}
}

int main() {
	cin >> n >> m;

	dfs(0);
}