#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int r_x, r_y;	//최종위치
int pan;	//말판 사이즈

bool check[301][301] = { 0, };
int graph[301][301] = { 0, };

int dx[8] = { 1,2,2,1,-1,-2,-2,-1 };
int dy[8] = { -2,-1,1,2,2,1,-1,-2 };

int bfs(int a, int b) {
	queue <pair<int, int>>q;

	q.push({ a, b });
	check[a][b] = true;

	while (!q.empty()) {
		int m_x = q.front().first;
		int m_y = q.front().second;
		q.pop();

		if (m_x == r_x && m_y == r_y)
			return graph[m_x][m_y];

		for (int i = 0; i < 8; i++) {
			int x = m_x + dx[i];
			int y = m_y + dy[i];

			if (x >= 0 && x < pan && y >= 0 && y < pan) {
				if (!check[x][y]) {
					graph[x][y] = graph[m_x][m_y] + 1;
					q.push({ x,y });
					check[x][y] = true;
				}
			}
		}
	}
}

int main() {
	int t;

	cin >> t;

	for (int i = 0; i < t; i++) {
		int x, y;
		cin >> pan >> x >> y >> r_x >> r_y;

		cout << bfs(x, y) << "\n";

		for (int j = 0; j < 301; j++) {
			for (int k = 0; k < 301; k++) {
				graph[j][k] = 0;
				check[j][k] = 0;
			}
		}
	}

	return 0;
}