#include <iostream>
#include <queue>

using namespace std;

int n, k;

int dx[3] = { -1, 1, 2 };

int v[100001] = { 0, };
int value[100001] = { 0, };
bool check[100001] = { 0, };

int bfs(int start) {
	queue<int> q;

	q.push(start);
	check[start] = true;

	while (!q.empty()) {
		int x = q.front();
		q.pop();

		if (x == k)
			return value[x];

		for (int i = 0; i < 3; i++) {
			int nx;
			if (i == 2)
				nx = x * dx[i];
			else
				nx = x + dx[i];
			
			if (nx >= 0 && nx < 100001) {
				if (!check[nx]) {
					check[nx] = true;
					q.push(nx);
					value[nx] = value[x] + 1;
				}
			}
		}
	}
}

int main() {
	cin >> n >> k;

	cout << bfs(n);

	return 0;
}