#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int n, sx;
bool flag = 0;

vector<int> v[3001];
bool visit[3001] = { 0, };
int circle[3001] = { 0, };

void find_circle(int x, int line) {
	for (int i = 0; i < v[x].size(); i++) {
		int rx = v[x][i];
		
		if (rx == sx && line >= 2) {
			flag = 1;
			return;
		}

		if (visit[rx])
			continue;
		
		visit[rx] = true;
		find_circle(rx, line + 1);
	}
}

int graph[3001] = { 0, };

int bfs(int x) {
	queue <int>q;

	q.push(x);
	visit[x] = 1;

	while (!q.empty()) {
		int x = q.front();
		visit[x] = 1;
		q.pop();

		//cout <<"graph" << x << " " << graph[x] << "\n";

		if (circle[x] == 1)
			return graph[x];

		for (int i = 0; i < v[x].size(); i++) {
			int rx = v[x][i];

			if (visit[rx] == 0) {
				q.push(rx);
				graph[rx] = graph[x] + 1;
				visit[rx] = 1;
			}
		}
	}
}

int main() {
	vector<int> cnt;

	cin >> n;

	for (int i = 0; i < n; i++) {
		int x, y;

		cin >> x >> y;

		v[x].push_back(y);
		v[y].push_back(x);
	}

	for (int i = 1; i <= n; i++) {
		sx = i;

		visit[i] = 1;
		find_circle(i, 0);

		if (flag == 1)
			circle[i] = 1;

		flag = 0;

		for (int i = 1; i <= n; i++)
			visit[i] = 0;
	}

	for (int i = 1; i <= n; i++) {
		if (circle[i] == 1)
			cnt.push_back(0);
		else
			cnt.push_back(bfs(i));

		for (int i = 1; i <= n; i++) {
			visit[i] = 0;
			graph[i] = 0;
		}
	}

	for (int i = 0; i < cnt.size(); i++)
		cout << cnt[i] << " ";

	return 0;
}