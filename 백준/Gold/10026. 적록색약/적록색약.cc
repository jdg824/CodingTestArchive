#include <iostream>
#include <queue>

using namespace std;

int n;
char arr[101][101] = { 0, };
bool visit[101][101] = { 0, };

char t_arr[101][101] = { 0, };
bool t_visit[101][101] = { 0, };

int dx[4] = { 0,0,-1,1 };
int dy[4] = { -1,1,0,0 };

int normal = 0, n_normal = 0;

void bfs(int x, int y, char chk) {
	queue<pair<int, int>>q;

	q.push({ x,y });
	visit[x][y] = true;

	while (!q.empty())
	{
		int rx = q.front().first;
		int ry = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++) {
			int px = rx + dx[i];
			int py = ry + dy[i];

			if (px >= 0 && px < n && py >= 0 && py < n && visit[px][py] == false && arr[px][py] == chk) {
				q.push({ px, py });
				visit[px][py] = true;
			}
		}
	}
}

void t_bfs(int x, int y, char chk) {
	queue<pair<int, int>>q;

	q.push({ x,y });
	t_visit[x][y] = true;

	while (!q.empty())
	{
		int rx = q.front().first;
		int ry = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++) {
			int px = rx + dx[i];
			int py = ry + dy[i];

			if (px >= 0 && px < n && py >= 0 && py < n && t_visit[px][py] == false && t_arr[px][py] == chk) {
				q.push({ px, py });
				t_visit[px][py] = true;
			}
		}
	}
}

int main() {
	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];

			if (arr[i][j] == 'G')
				t_arr[i][j] = 'R';
			else
				t_arr[i][j] = arr[i][j];
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if(visit[i][j] == false)
			{
				bfs(i, j, arr[i][j]);
				normal++;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (t_visit[i][j] == false)
			{
				t_bfs(i, j, t_arr[i][j]);
				n_normal++;
			}
		}
	}

	cout << normal << " " << n_normal;
}