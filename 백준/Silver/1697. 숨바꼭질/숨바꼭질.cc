#include <iostream>
#include <queue>

using namespace std;

int n, k;
int mv[3] = { 1, -1, 2 };

int arr[100001] = { 0, };
bool chk[100001] = { 0, };

void bfs(int start) {
	queue<int> q;
	q.push(start);
	chk[start] = 1;

	while (!q.empty()) {
		int rx = q.front();
		q.pop();

		if (rx == k) {
			break;
		}

		for (int i = 0; i < 3; i++) {
			int dx;

			if (i == 2) {
				dx = rx * mv[i];
			}
			else {
				dx = rx + mv[i];
			}

			if (dx >= 0 && dx < 100001 &&chk[dx] == 0) {
				q.push(dx);
				arr[dx] = arr[rx] + 1;
				chk[dx] = 1;
			}
		}
	}
}

int main() {
	cin >> n >> k;

	bfs(n);

	cout << arr[k];

	return 0;
}