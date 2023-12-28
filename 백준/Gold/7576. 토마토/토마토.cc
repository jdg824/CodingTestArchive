#include <iostream>
#include <queue>

using namespace std;

int n, m;
int tomato[1001][1001] = { 0, };
int check[1001][1001] = { 0, };

int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };

int graph[1001][1001] = { 0, };

queue<pair<int, int>>q;

void bfs() {
	while (!q.empty()) {
		int x = q.front().first;
		int y = q.front().second;

		q.pop();

		for (int i = 0; i < 4; i++) {
			int r_x = x + dx[i];
			int r_y = y + dy[i];

			if (r_x >= 0 && r_x < n && r_y >= 0 && r_y < m && tomato[r_x][r_y] == 0) {
				if (!check[r_x][r_y]) {
					q.push({ r_x, r_y });
					graph[r_x][r_y] = graph[x][y] + 1;
					check[r_x][r_y] = true;
				}
			}
		}
	}
}

int main() {
	int result = 0;

	cin >> m >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> tomato[i][j];

			if (tomato[i][j] == 1) {
				q.push({ i, j });
				check[i][j] = true;
			}
		}
	}

	bfs();

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (check[i][j] == false && tomato[i][j] == 0) {
				cout << "-1";
				return 0;
			}
			else {
				if (result <= graph[i][j])
					result = graph[i][j];
			}
		}
	}

	cout << result;

	return 0;
}