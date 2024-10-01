#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int arr[101][101] = { 0, };
vector<int> v[101];
int graph[101][101] = { 0, };
bool chk[101] = { 0, };

void bfs(int start) {
	queue<int> q;

	q.push(start);

	while (!q.empty()) {
		int px = q.front();
		q.pop();

		for (int i = 0; i < v[px].size(); i++) {
			int rx = v[px][i];

			if (chk[rx] == 0) {
				chk[rx] = 1;
				graph[start][rx] = 1;
				q.push(rx);
			}
		}
	}
}

int main() {
	int n;

	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
			
			if (arr[i][j] == 1)
				v[i].push_back(j);
		}
	}

	for (int i = 0; i < n; i++) {
		bfs(i);

		for (int i = 0; i < 101; i++) {
			chk[i] = 0;
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			cout << graph[i][j] << " ";
		cout << "\n";
	}

}