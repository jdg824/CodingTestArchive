#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int m, n, k;
int arr[101][101] = { 0, };

bool visit[101][101] = { 0, };
vector <int>v;

int dx[4] = { 0,0,-1,1 };
int dy[4] = { -1,1,0,0 };

void bfs(int x, int y) {
	queue<pair<int, int>>q;

	q.push({ x, y });
	visit[x][y] = true;
	int cnt = 1;

	while (!q.empty()) {
		int rx = q.front().first;
		int ry = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++) {
			int px = rx + dx[i];
			int py = ry + dy[i];

			if (px >= 0 && px < m && py >= 0 && py < n && arr[px][py] == 0 && visit[px][py] == false) {
				cnt++;
				q.push({ px, py });
				visit[px][py] = true;
			}
		}
	}

	v.push_back(cnt);
}

int main() {
	cin >> m >> n >> k;

	for (int i = 0; i < k; i++) {
		int x1, x2, y1, y2;

		cin >> x1 >> y1 >> x2 >> y2;

		for (int j = y1; j < y2; j++)
			for (int k = x1; k < x2; k++)
				arr[j][k] = 1;
	}

	int cnt = 0;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++)
			if (visit[i][j] == false && arr[i][j] == 0) {
				cnt++;
				bfs(i, j);
			}
	}

	sort(v.begin(), v.end());

	cout << cnt << "\n";
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << " ";

	return 0;
}