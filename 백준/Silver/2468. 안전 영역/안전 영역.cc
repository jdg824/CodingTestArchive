#include <iostream>
#include <queue>

using namespace std;

int n;
int map[101][101] = { 0, };
bool check[101][101] = { 0, };

int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

void bfs(int x, int y, int chk) {
	queue<pair<int, int>>q;

	q.push({ x, y });
	check[x][y] = true;

	while (!q.empty()) {
		int r_x = q.front().first;
		int r_y = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++) {
			int d_x = r_x + dx[i];
			int d_y = r_y + dy[i];

			if (d_x >= 0 && d_x < n && d_y >= 0 && d_y < n && check[d_x][d_y] == 0 && map[d_x][d_y] > chk) {
				q.push({ d_x, d_y });
				check[d_x][d_y] = true;
			}
		}
	}
}

int main() {
	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> map[i][j];
		}
	}

	int result = 0;
	for (int i = 0; i <= 100; i++) {
		int cnt = 0;

		for (int j = 0; j < n; j++) {
			for (int k = 0; k < n; k++) {
				if (map[j][k] > i && check[j][k] == 0) {
					bfs(j, k, i);
					cnt++;
				}
			}
		}

		if (result < cnt) {
			result = cnt;
		}

		for (int j = 0; j < n; j++) {
			for (int k = 0; k < n; k++) {
				check[j][k] = 0;
			}
		}
	}

	cout << result;

	return 0;
}