#include <iostream>
#include <queue>

using namespace std;

int map[101][101] = { 0 };
int n;

queue<pair<int, char>> cmd;
queue<pair<int, int>> snake;

int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int move() {
	int x = 1, y = 2;
	int cnt = 1;
	int idx = 1;

	snake.push({ 1,1 });
	map[1][1] = 2;

	while (1) {
		if (x > n || x < 1 || y > n || y < 1 || map[x][y] == 2)
			break;

		if (!cmd.empty()) {
			if (cmd.front().first == cnt) {
				if (cmd.front().second == 'L')
					idx = (idx + 1) % 4;
				else
					idx = (idx + 3) % 4;

				cmd.pop();
			}
		}

		if (map[x][y] == 0) {
			snake.push({ x, y });
			map[snake.front().first][snake.front().second] = 0;
			snake.pop();
		}
		else if (map[x][y] == 1) {
			snake.push({ x, y });	//길이 증가
		}

		map[x][y] = 2;

		x = x + dx[idx];
		y = y + dy[idx];

		cnt++;
	}

	return cnt;
}

int main() {
	int k, l, x;
	char c;

	cin >> n >> k;

	for (int i = 0; i < k; i++) {
		int x, y;
		cin >> x >> y;

		map[x][y] = 1;	//apple
	}

	cin >> l;

	for (int i = 0; i < l; i++) {
		cin >> x >> c;
		cmd.push({ x, c });
	}

	cout << move();
	return 0;
}