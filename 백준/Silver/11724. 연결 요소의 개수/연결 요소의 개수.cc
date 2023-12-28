#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int n, m;
vector<int> map[1001];
bool check[1001] = { 0, };

void bfs(int x) {
	queue <int>q;

	q.push(x);
	check[x] = true;

	while (!q.empty()) {
		int r_x = q.front();
		q.pop();

		for (int i = 0; i < map[r_x].size(); i++) {
			if (!check[map[r_x][i]]) {
				check[map[r_x][i]] = true;
				q.push(map[r_x][i]);
			}
		}
	}
}

int main() {
	int cnt = 0;

	cin >> n >> m;

	for (int i = 0; i < m; i++) {
		int u, v;
		cin >> u >> v;

		map[u].push_back(v);
		map[v].push_back(u);
	}

	for (int i = 1; i <= n; i++) {
		if (check[i] == 0) {
			bfs(i);
			cnt++;
		}
	}

	cout << cnt;

	return 0;
}