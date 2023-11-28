#include <iostream>
#include <queue>

using namespace std;

int n, m;
int v[101][101] = { 0, };
bool check[101][101] = {0,};
int graph[101][101] = { 0, };

int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

int bfs(int a, int b) {
	queue <pair<int, int>>q;

	q.push({ a, b });
	check[a][b] = true;
	graph[a][b] = 1;

	while (!q.empty()) {
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		
		if (x == n && y == m) {
			return graph[x][y];
		}
		
		for (int i = 0; i < 4; i++) {
			int rx = x + dx[i];
			int ry = y + dy[i];

			if (!check[rx][ry] && v[rx][ry] == 1) {
				q.push({ rx, ry });
				check[rx][ry] = true;
				graph[rx][ry] = graph[x][y] + 1;
			}
		}
	}

	return 0;
}

int main() {
	cin >> n >> m;
		
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			scanf("%1d", &v[i][j]);
		}
	}

	cout << bfs(1, 1);

	return 0;
}
