#include <iostream>
#include <queue>

using namespace std;

int a, b;

bool chk[10001] = { 0, };

int D(int start) {
	return (2 * start) % 10000;
}

int S(int start) {
	if (start == 0)
		return 9999;
	else
		return start-1;
}

int L(int start) {
	return (start % 1000) * 10 + start / 1000;
}

int R(int start) {
	return (start / 10) + (start % 10) * 1000;
}

void bfs(int start) {
	queue<pair<int, string>> q;

	q.push({ start, "" });	//first start, cmd;
	chk[start] = 1;

	while (!q.empty()) {
		int n = q.front().first;
		string cmd = q.front().second;
		q.pop();

		if (n == b) {
			cout << cmd <<"\n";
			return;
		}
		
		int sx;	//next value

		sx = D(n);
		if (chk[sx] == 0) {
			q.push({ sx, cmd + "D" });
			chk[sx] = 1;
		}

		sx = S(n);
		if (chk[sx] == 0) {
			q.push({ sx, cmd + "S" });
			chk[sx] = 1;
		}

		sx = L(n);
		if (chk[sx] == 0) {
			q.push({ sx, cmd + "L" });
			chk[sx] = 1;
		}

		sx = R(n);
		if (chk[sx] == 0) {
			q.push({ sx, cmd + "R" });
			chk[sx] = 1;
		}
	}
}

int main() {
	int t;

	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> a >> b;

		bfs(a);

		for (int j = 0; j < 10001; j++)
			chk[j] = 0;
	}
}