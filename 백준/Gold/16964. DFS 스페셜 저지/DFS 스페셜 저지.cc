#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n;
vector <int>v[100001];
int ans[100001] = { 0, };
int graph[100001] = { 0, };
bool visit[100001];

int cnt = 1;

void dfs(int x) {
	visit[x] = true;

	graph[x] = cnt;

	for (int i = 0; i < v[x].size(); i++) {
		if (!visit[v[x][i]]) {
			cnt++;
			dfs(v[x][i]);
		}
	}
}

bool cmp(int x, int y) {
	if (ans[x] < ans[y])
		return 1;
	else
		return 0;
}

int main() {
	cin >> n;

	for (int i = 0; i < n - 1; i++) {
		int x, y;
		cin >> x >> y;;

		v[x].push_back(y);
		v[y].push_back(x);
	}

	for (int i = 1; i <= n; i++) {
		int x;
		cin >> x;

		ans[x] = i;
	}

	for (int i = 1; i <= n; i++) {
		sort(v[i].begin(), v[i].end(), cmp);
	}

	if (ans[1] != 1)
		cout << 0;
	else {
		dfs(1);
		
		for (int i = 1; i <= n; i++) {
			if (graph[i] != ans[i]) {
				cout << 0;
				return 0;
			}
		}

		cout << 1;
	}

	return 0;
}