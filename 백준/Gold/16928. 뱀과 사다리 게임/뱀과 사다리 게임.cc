#include <iostream>
#include <queue>

using namespace std;

int map[101] = { 0, };
bool chk[101] = { 0, };

void bfs(int start, int cnt) {
	queue<pair<int, int>> q;

	q.push({start, cnt});
	chk[start] = 1;

	while (!q.empty()) {
		int px = q.front().first;
		int c = q.front().second;
		q.pop();

		for (int i = 1; i <= 6; i++) {
			int rx = px + i;

			if (rx == 100) {
				cout << c + 1;
				return;
			}
			else if (rx < 100) {
				while (map[rx] != 0) {
					rx = map[rx];
				}

				if (chk[rx] == 0) {
					q.push({rx, c+1});
					chk[rx] = 1;
				}
			}
		}
	}
}

int main() {
	int n, m;

	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		map[x] = y;
	}

	for (int i = 0; i < m; i++) {
		int x, y;
		cin >> x >> y;
		map[x] = y;
	}

	bfs(1, 0);
}