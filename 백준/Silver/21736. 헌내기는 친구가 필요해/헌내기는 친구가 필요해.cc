#include <iostream>
#include <queue>

using namespace std;

char graph[601][601] = { 0, };
bool chk[601][601] = { 0, };

int dx[4] = { 0,0,-1,1 };
int dy[4] = { -1,1,0,0 };

int n, m;
int cnt = 0;

void bfs(int x, int y) {
	queue<pair<int, int>> q;

	q.push({ x, y });
	chk[x][y] = 1;

	while (!q.empty()) {
		int px = q.front().first;
		int py = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++) {
			int rx = px + dx[i];
			int ry = py + dy[i];

			if (rx >= 0 && rx < n && ry >= 0 && ry < m && chk[rx][ry] == 0) {
				if (graph[rx][ry] == 'O') {
					q.push({ rx, ry });
					chk[rx][ry] = 1;
				}
				else if (graph[rx][ry] == 'P') {
					q.push({ rx, ry });
					chk[rx][ry] = 1;
					cnt++;
				}
			}
		}
	}
}

int main() {
	int sx, sy;

	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> graph[i][j];

			if (graph[i][j] == 'I') {
				sx = i;
				sy = j;
			}
		}
	}

	bfs(sx, sy);

	if (cnt == 0)
		cout << "TT";
	else
		cout << cnt;

	return 0;
}