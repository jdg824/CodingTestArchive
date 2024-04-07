#include <iostream>
#include <queue>

using namespace std;

int n, m, h;
int tomato[101][101][101] = { 0, }; //높이, n, m ;

int dx[6] = { 0,0,0,0,1,-1 };	//위, 아래, 앞, 뒤, 오, 왼
int dy[6] = { 0,0,-1,1,0,0 };
int dz[6] = { -1,1,0,0,0,0 };

queue<pair<pair<int, int>, int>>q;

void bfs() {
	while (!q.empty()) {
		int rz = q.front().first.first;
		int rx = q.front().first.second;
		int ry = q.front().second;
		q.pop();

		for (int i = 0; i < 6; i++) {
			int pz = rz + dz[i];
			int px = rx + dx[i];
			int py = ry + dy[i];

			if (pz >= 0 && pz < h && px >= 0 && px < n && py >= 0 && py < m && tomato[pz][px][py] == 0) {
				tomato[pz][px][py] = tomato[rz][rx][ry] + 1;
				q.push({ {pz, px}, py });
			}
		}
	}
}

int main() {
	cin >> m >> n >> h;

	for (int i = 0; i < h; i++) {
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < m; k++) {
				cin >> tomato[i][j][k];
				
				if (tomato[i][j][k] == 1)
					q.push({ {i, j}, k });
			}
		}
	}

	bfs();

	int ans = 0;
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < m; k++) {
				if (tomato[i][j][k] == 0) {
					cout << -1;
					return 0;
				}
				ans = max(tomato[i][j][k], ans);
			}
		}
	}

	cout << ans - 1;
	return 0;
}