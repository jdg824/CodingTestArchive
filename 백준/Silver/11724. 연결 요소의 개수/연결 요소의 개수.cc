#include <iostream>
#include <vector>

using namespace std;

vector<int> graph[1001];
bool chk[1001] = { 0, };

int n, m;

void dfs(int start) {
	chk[start] = true;

	for (int i = 0; i < graph[start].size(); i++) {
		if (chk[graph[start][i]] == 0) {
			dfs(graph[start][i]);
		}
	}
}

int main() {
	int cnt = 0;

	cin >> n >> m;

	for (int i = 0; i < m; i++) {
		int start, end;

		cin >> start >> end;

		graph[start].push_back(end);
		graph[end].push_back(start);
	}

	for (int i = 1; i <= n; i++) {
		if (chk[i] == 0) {
			cnt++;
			dfs(i);
		}
	}

	cout << cnt;

	return 0;
}