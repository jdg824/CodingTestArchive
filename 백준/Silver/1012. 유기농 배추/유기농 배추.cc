#include <iostream>	
#include <queue>

using namespace std;

int m, n;
int v[51][51] = { 0, };
bool check[51][51] = { 0, };

int dx[4] = { -1, 1, 0, 0 };
int dy[4] = { 0, 0, -1, 1 };

void bfs(int a, int b) {
	queue<pair<int, int>>q;

	q.push({ a, b });
	check[a][b] = true;

	while (!q.empty()) {
		int x = q.front().first;
		int y = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++) {
			int r_x = x + dx[i];
			int r_y = y + dy[i];
		
			if (r_x >= 0 && r_x < m && r_x >= 0 && r_y < n) {
				if (!check[r_x][r_y] && v[r_x][r_y] == 1) {
					q.push({ r_x, r_y });
					check[r_x][r_y] = true;
				}
			}
		}
	}
}

int main() {
	int t;

	cin >> t;

	for (int i = 0; i < t; i++) {
		int k;
		cin >> m >> n >> k;

		for (int j = 0; j < k; j++) {
			int x, y;

			cin >> x >> y;
			v[x][y] = 1;
		}
		int cnt = 0;

		for (int j = 0; j < m; j++) {
			for (int l = 0; l < n; l++) {
				if (v[j][l] == 1 && check[j][l] == 0) {
					bfs(j, l);
					cnt++;
				}
			}
		}
		cout << cnt << "\n";

		for (int j = 0; j <= 51; j++) {
			for (int l = 0; l <= 51; l++) {
				v[j][l] = 0;
				check[j][l] = 0;
			}
		}
	}

	return 0;
}