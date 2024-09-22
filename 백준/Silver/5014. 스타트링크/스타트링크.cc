#include <iostream>
#include <queue>

using namespace std;

int f, g, s, u, d;	//총 층수, 목표, 강호, 엘베 오르고, 내리기

int graph[1000001] = { 0, };
bool chk[1000001] = { 0, };

int dx[2];	//u, d;

void bfs(int start) {
	queue<int> q;

	q.push(start);
	chk[start] = true;
	graph[start] = 1;

	while (!q.empty()) {
		int x = q.front();
		q.pop();

		for (int i = 0; i < 2; i++) {
			int rx = x + dx[i];

			if (rx > 0 && rx <= f && !chk[rx]) {
				q.push(rx);
				chk[rx] = true;
				graph[rx] = graph[x] + 1;
			}
		}
	}
}

int main() {
	cin >> f >> s >> g >> u >> d;

	dx[0] = u;
	dx[1] = -d;

	bfs(s);

	if (graph[g])
		cout << graph[g]-1;
	else
		cout << "use the stairs";

	return 0;
}