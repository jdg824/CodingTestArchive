#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<int> s[20001];
int visit[20001];
bool graph[20001];

void bfs(int start) {
	queue <int>q;

	q.push(start);
	visit[start] = 1;

	while (!q.empty()) {
		int x = q.front();
		q.pop();

		for (int i = 0; i < s[x].size(); i++) {
			int rx = s[x][i];

			if (visit[rx] == 0) {
				q.push(rx);

				if (visit[x] == 1)
					visit[rx] = 2;
				else if (visit[x] == 2)
					visit[rx] = 1;
			}
		}
	}
}

bool check(int v) {
	for (int i = 1; i <= v; i++) {
		for (int j = 0; j < s[i].size(); j++) {
			if (visit[i] == visit[s[i][j]]) {
				return 0;
			}
		}
	}
	return 1;
}

int main() {
	int k;

	cin >> k;

	for (int i = 0; i < k; i++) {
		int v, e;
		
		cin >> v >> e;

		for (int i = 0; i < e; i++) {
			int a, b;
			
			cin >> a >> b;

			s[a].push_back(b);
			s[b].push_back(a);
		}

		for (int i = 1; i <= v; i++) {
			if(visit[i]==0)
				bfs(i);
		}

		if (check(v))
			cout << "YES\n";
		else
			cout << "NO\n";


		for (int i = 1; i <= v; i++) {
			s[i].clear();
			graph[i] = 0;
			visit[i] = 0;
		}
	}

	return 0;
}