#include <iostream>
#include <queue>

using namespace std;

int v[1001][1001];
bool chk[1001][1001] = { 0, };
int graph[1001][1001] = { 0, };

int n, m;	//세로 가로

int dx[4] = { 0,0,1, -1 };
int dy[4] = { -1,1,0, 0 };

void bfs(int x, int y) {
	queue<pair<int, int>> q;

	q.push({ x, y });
	chk[x][y] = 1;

	while (!q.empty()) {
		int rx = q.front().first;
		int ry = q.front().second;
		q.pop();

		for (int i = 0; i <4 ; i++) {
			int px = rx + dx[i];
			int py = ry + dy[i];

			if (px >= 0 && px < n && py >= 0 && py < m && !chk[px][py] && v[px][py] == 1) {
				q.push({ px, py });
				graph[px][py] = graph[rx][ry] + 1;
				chk[px][py] = 1;
			}
		}
	}
}

int main() {
	int sx, sy;

	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> v[i][j];

			if (v[i][j] == 2) {
				sx = i;
				sy = j;
			}
		}
	}

	bfs(sx, sy);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (v[i][j] == 1 && chk[i][j] == 0)
				graph[i][j] = -1;
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++)
			cout << graph[i][j] << " ";
		cout << "\n";
	}

	return 0;
}