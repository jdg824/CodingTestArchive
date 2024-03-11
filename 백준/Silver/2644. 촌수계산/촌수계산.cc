#include <iostream>
#include <queue>

using namespace std;

int n, tx, ty, m;
int arr[101][101] = { 0, };
bool visited[101] = { 0, };
int cal[101] = { 0, };

int bfs(int x) {
	queue <int>q;

	q.push(x);
	visited[x] = 1;

	while (!q.empty()) {
		int rx = q.front();
		q.pop();

		for (int i = 1; i <= n; i++) {
			if (arr[rx][i] == 1 && visited[i] == false) {
				cal[i] = cal[rx] + 1;
				q.push(i);
				visited[i] = true;
			}
		}
	}

	if (visited[ty] == true)
		return cal[ty];
	else
		return -1;
}

int main() {
	cin >> n >> tx >> ty >> m;

	for (int i = 0; i < m; i++) {
		int x, y;
		cin >> x >> y;

		arr[x][y] = 1;
		arr[y][x] = 1;
	}

	cout << bfs(tx);

	return 0;
}