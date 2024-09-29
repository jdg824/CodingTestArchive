#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <limits.h>

using namespace std;

int n, m;
vector<int> v[5001];
bool visit[102] = { 0, };
int graph[102] = { 0, };

int bfs(int start, int goal) {
	if (start == goal)
		return graph[goal];
	else {
		queue<int> q;
		q.push(start);
		visit[start] = 1;

		while (!q.empty()) {
			int x = q.front();
			q.pop();

			if (x == goal)
				return graph[goal];

			for (int i = 0; i < v[x].size(); i++) {
				int rx = v[x][i];

				if (visit[rx] == 0) {
					visit[rx] = 1;
					q.push(rx);
					graph[rx] = graph[x] + 1;
				}
			}

		}
	}
}

int main() {
	cin >> n >> m;

	for (int i = 0; i < m; i++) {
		int a, b;

		cin >> a >> b;

		v[a].push_back(b);
		v[b].push_back(a);
	}

	int result = INT_MAX;
	int ans = 0;

	for (int i = 1; i <= n; i++) {
		int tmp = 0;
		for (int j = 1; j <= n; j++) {
			tmp += bfs(i, j);

			for (int k = 0; k < 102; k++) {
				visit[k] = 0;
				graph[k] = 0;
			}
		}

		if (result > tmp) {
			result = tmp;
			ans = i;
		}
	}

	cout << ans;

	return 0;
}