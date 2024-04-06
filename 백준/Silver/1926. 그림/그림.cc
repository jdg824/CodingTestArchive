#include <iostream>
#include <queue>

using namespace std;

int n, m, cnt = 0, mv = -1, tmp = 0;
int graph[501][501];
int ans[501][501] = { 0, };
bool visit[501][501] = { 0, };

int dx[4] = { -1,1,0,0 };
int dy[4] = { 0,0,-1,1 };

void bfs(int x, int y) {
	queue<pair<int, int>>q;

	q.push({ x, y });
	visit[x][y] = true;

	while (!q.empty()) {
		int rx = q.front().first;
		int ry = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++) {
			int px = rx + dx[i];
			int py = ry + dy[i];

			if (px >= 0 && px < n && py >= 0 && py < m && visit[px][py] == false && graph[px][py] == 1) {
				q.push({ px, py });
				visit[px][py] = true;
				tmp++;
			}
		}
	}
}

int main() {
	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++)
			cin >> graph[i][j];
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (visit[i][j] == 0 && graph[i][j] == 1) {
				tmp = 1;
				bfs(i, j);
				cnt++;
			}

			mv = max(tmp, mv);
		}
	}

	cout << cnt << "\n" << mv;

	return 0;
}