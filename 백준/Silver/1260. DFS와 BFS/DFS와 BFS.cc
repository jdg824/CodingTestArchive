#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

vector <int>g[1001];
bool d_check[1001] = { 0, };
bool b_check[1001] = { 0, };

void dfs(int start) {
	d_check[start] = true;

	cout << start << " ";

	int size = g[start].size();
	for (int i = 0; i < size; i++) {
		int r_x = g[start][i];

		if (!d_check[r_x])
			dfs(r_x);
	}
}

void bfs(int start) {
	queue <int>q;

	q.push(start);
	b_check[start] = true;
	cout << start << " ";

	while (!q.empty()) {
		int x = q.front();
		q.pop();

		int size = g[x].size();
		for (int i = 0; i < size; i++) {
			int r_x = g[x][i];

			if (!b_check[r_x]) {
				q.push(r_x);
				b_check[r_x] = true;
				cout << r_x << " ";
			}
		}
	}
}

int main() {
	int n, m, v;

	cin >> n >> m >> v;

	for (int i = 0; i < m; i++) {
		int a, b;

		cin >> a >> b;

		g[a].push_back(b);
		g[b].push_back(a);
	}

	for (int i = 0; i <= n; i++) {
		sort(g[i].begin(), g[i].end());
	}

	dfs(v);
	cout << "\n";
	bfs(v);
}