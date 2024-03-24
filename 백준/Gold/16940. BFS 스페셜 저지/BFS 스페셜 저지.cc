#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>

using namespace std;

int n;
vector<int> v[100001];
bool visit[100001];
int graph[100001] = { 0, };
int ans[100001] = { 0, };

bool cmp(int x, int y) {
	if (ans[x] < ans[y])
		return 1;
	else
		return 0;
}

void bfs() {
	queue <int>q;
	int cnt = 1;

	q.push(1);
	visit[1] = true;

	while (!q.empty()) {
		int rx = q.front();
		q.pop();

		graph[rx] = cnt++;

		for (int i = 0; i < v[rx].size(); i++) {
			int next = v[rx][i];

			if (!visit[next]) {
				q.push(next);
				visit[next] = true;
			}
		}
	}
}

int main() {
	cin >> n;

	for (int i = 1; i < n; i++) {
		int x, y;

		cin >> x >> y;

		v[x].push_back(y);
		v[y].push_back(x);
	}

	for (int i = 1; i <= n; i++) {
		int num;
		cin >> num;

		ans[num] = i;
	}

	for (int i = 1; i <= n; i++) {
		sort(v[i].begin(), v[i].end(), cmp);
	}

	bfs();

	for (int i = 1; i <= n; i++) {
		if (graph[i] != ans[i]) {
			cout << 0;
			return 0;
		}
	}

	cout << 1;

	return 0;
}