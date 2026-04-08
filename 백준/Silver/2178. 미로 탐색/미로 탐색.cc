#include <iostream>
#include <queue>

using namespace std;

int graph[101][101] = { 0, };
int road[101][101] = { 0, };
bool chk[101][101] = { 0, };

int dx[4] = { 0,0,-1,1 };
int dy[4] = { -1,1,0,0 };

int n, m;

void bfs(int x, int y) {
	queue<pair<int, int>>q;

	q.push({ x,y });
	chk[x][y] = 1;

	while (!q.empty()) {
		int rx = q.front().first;
		int ry = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++) {
			int px = rx + dx[i];
			int py = ry + dy[i];

			if (px >= 0 && px <= n && py >= 0 && py <= m && chk[px][py] == 0 && graph[px][py] == 1) {
				q.push({ px,py });
				chk[px][py] = 1;

				graph[px][py] = graph[rx][ry] + 1;
			}
		}
	}

}

int main() {
	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%1d", &graph[i][j]);
		}
	}

	bfs(0, 0);

	cout << graph[n - 1][m - 1];

	return 0;
}