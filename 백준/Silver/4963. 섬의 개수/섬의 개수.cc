#include <iostream>
#include <queue>

using namespace std;

int w, h;
int graph[51][51] = { 0, };
bool chk[51][51] = { 0, };

int dx[8] = { 1,1,1,-1,-1,-1,0,0 };
int dy[8] = { 0,-1,1,0,-1,1,-1,1 };

void bfs(int height, int width) {
	queue <pair<int, int>>q;

	q.push({ height, width });
	chk[height][width] = true;

	while (!q.empty()) {
		int x = q.front().first;
		int y = q.front().second;
		q.pop();

		for (int i = 0; i < 8; i++) {
			int r_x = x + dx[i];
			int r_y = y + dy[i];

			if (r_x >= 0 && r_x < h && r_y >= 0 && r_y < w && chk[r_x][r_y] == false && graph[r_x][r_y] == 1) {
				q.push({ r_x, r_y });
				chk[r_x][r_y] = true;
			}
		}
	}
}

int main() {
	while (1) {
		int cnt = 0;

		cin >> w >> h;

		if (w == 0 && h == 0)
			break;

		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				cin >> graph[i][j];
			}
		}

		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				if (!chk[i][j] && graph[i][j] == 1) {
					bfs(i, j);
					cnt++;
				}
			}
		}

		cout << cnt << "\n";

		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				graph[i][j] = 0;
				chk[i][j] = false;
			}
		}

	}


	return 0;
}