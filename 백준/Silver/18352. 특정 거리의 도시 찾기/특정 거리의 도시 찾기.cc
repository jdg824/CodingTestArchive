#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int n, m, k, x;	//도시, 도로, 거리, 출발

bool visit[300001] = { 0, };
int graph[300001] = { 0, };
vector<int> v[300001];

void bfs() {
	queue<int> q;

	q.push(x);
	visit[x] = 1;

	while (!q.empty()) {
		int ax = q.front();
		q.pop();

		for (int i = 0; i < v[ax].size(); i++) {
			int dx = v[ax][i];

			if (visit[dx] == 0) {
				q.push(dx);
				visit[dx] = 1;
				graph[dx] = graph[ax] + 1;
			}
		}
	}
}

int main() {
	cin >> n >> m >> k >> x;

	vector<int>ans;

	for (int i = 0; i < m; i++) {
		int a, b;

		cin >> a >> b;

		v[a].push_back(b);
	}

	bfs();

	for (int i = 1; i <= n; i++) {
		if (graph[i] == k)
			ans.push_back(i);
	}

	if (ans.size() == 0)
		cout << -1;
	else {
		for (int i = 0; i < ans.size(); i++)
			cout << ans[i] <<"\n";
	}
}