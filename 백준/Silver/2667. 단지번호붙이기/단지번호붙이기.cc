#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int n;
int v[26][26];
int graph[26][26];
bool check[26][26] = { 0, };
vector <int>d;

int dx[4] = { -1,1,0,0 };
int dy[4] = { 0,0,-1,1 };

void bfs(int a, int b) {
	queue<pair<int, int>> q;
	int depth = 1;

	q.push({ a, b });
	check[a][b] = true;

	while (!q.empty()) {
		int x = q.front().first;
		int y = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++) {
			int r_x = x + dx[i];
			int r_y = y + dy[i];

			if (r_x >= 0 && r_x < n && r_y >= 0 && r_y < n) {
				if (!check[r_x][r_y] && v[r_x][r_y] == 1) {
					check[r_x][r_y] = true;
					q.push({ r_x, r_y });
					depth++;
				}
			}
		}
	}

	d.push_back(depth);
}

int main() {
	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%1d", &v[i][j]);
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (v[i][j] == 1 && check[i][j] == 0)
				bfs(i, j);
		}
	}

	cout << d.size() << "\n";
	sort(d.begin(), d.end());

	for (int i = 0; i < d.size(); i++) {
		cout << d[i] << "\n";
	}

	return 0;
}