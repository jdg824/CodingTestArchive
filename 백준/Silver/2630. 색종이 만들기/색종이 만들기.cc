#include <iostream>

using namespace std;

int graph[129][129] = { 0, };

int blue = 0;	//1
int white = 0;	//0

void solve(int x, int y, int size) {
	int chk = graph[x][y];

	for (int i = x; i < x + size; i++) {
		for (int j = y; j < y + size; j++) {
			if (chk == 0 && graph[i][j] == 1)
				chk = 2;
			else if (chk == 1 && graph[i][j] == 0)
				chk = 2;

			if (chk == 2) {
				solve(x, y, size / 2);
				solve(x, y + size / 2, size / 2);
				solve(x + size / 2, y, size / 2);
				solve(x + size / 2, y + size / 2, size / 2);
				return;
			}
		}
	}

	if (chk == 0)
		white++;
	else
		blue++;
}

int main() {
	int n;

	cin >> n;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++)
			cin >> graph[i][j];
	}

	solve(1, 1, n);

	cout << white << "\n" << blue;

	return 0;
}