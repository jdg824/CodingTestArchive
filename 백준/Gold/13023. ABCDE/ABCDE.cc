#include <iostream>
#include <vector>

using namespace std;

int n, m;

vector<int>arr[2001];
bool visit[2001] = { 0, };
bool ans;

void dfs(int x, int depth) {
	if (depth == 4) {
		ans = true;
		return;
	}

	visit[x] = true;

	for (int i = 0; i < arr[x].size(); i++) {
		int next = arr[x][i];
		if (!visit[next] && !ans) {
			dfs(next, depth + 1);
		}
	}
	visit[x] = false;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n >> m;

	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;

		arr[a].push_back(b);
		arr[b].push_back(a);
	}

	for (int i = 0; i < n; i++) {
		dfs(i, 0);
		if (ans)
			break;
	}
	cout << ans;

	return 0;
}