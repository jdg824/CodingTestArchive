#include <iostream>
#include <queue>

using namespace std;

int arr[102][102] = { 0, };
bool chk[102][102] = { 0, };
int graph[102][102] = { 0, };

int n, m;

int dx[4] = { 0,0,1,-1 };
int dy[4] = { 1,-1,0,0 };

void bfs(int sx, int sy) {
	queue<pair<int, int>> q;

	chk[sx][sy] = 1;
	graph[sx][sy] = 1;
	q.push({ sx, sy });

	while (!q.empty()) {
		int rx = q.front().first;
		int ry = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++) {
			int px = rx + dx[i];
			int py = ry + dy[i];

			if (px >= 1 && px <= n && py >= 1 && py <= m && arr[px][py] == 1 && chk[px][py] == 0) {
				//cout << px << " " << py << "\n";
				chk[px][py] = 1;
				q.push({ px, py });
				graph[px][py] = graph[rx][ry] + 1;
			}
		}
	}
}

int main() {
	cin >> n >> m;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			scanf("%1d", &arr[i][j]);
		}
	}
	
	bfs(1, 1);

	cout << graph[n][m];
}