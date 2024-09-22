#include <iostream>
#include <queue>

using namespace std;

int s, e;
int graph[100001] = { 0, };
bool chk[100001] = { 0, };

int dx[3] = { -1,1,2 };

int bfs(int start) {
	queue<int> q;

	q.push(start);
	chk[start] = true;

	while (!q.empty()) {
		int x = q.front();
		q.pop();

		if (x == e) {
			return graph[e];
		}

		for (int i = 0; i < 3; i++) {
			int rx;

			if (dx[i] == 2)
				rx = x * dx[i];
			else
				rx = x + dx[i];

			if (rx >= 0 && rx < 100001 && chk[rx]==false) {
				q.push(rx);
				chk[rx] = true;
				graph[rx] = graph[x] + 1;
			}
		}
	}
}

int main() {
	cin >> s >> e;

	cout << bfs(s);

	return 0;
}