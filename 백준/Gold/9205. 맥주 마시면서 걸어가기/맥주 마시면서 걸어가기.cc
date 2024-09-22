#include <iostream>
#include <vector>
#include <math.h>
#include <queue>

using namespace std;

int n, dx, dy, sx, sy;
bool chk = 0;

void find(vector<pair<int, int>> con) {
	chk = 0;

	if (abs(dx - sx) + abs(dy - sy) <= 1000)	//한번에 갈 경우
		chk = 1;
	else {
		queue<pair<int, int>>q;

		q.push({ sx, sy });

		while (!q.empty()) {
			int rx = q.front().first;
			int ry = q.front().second;
			q.pop();

			if (abs(dx - rx) + abs(dy - ry) <= 1000)
				chk = 1;

			for (int i = 0; i < con.size(); i++) {
				int dist = abs(con[i].first - rx) + abs(con[i].second - ry);

				if (dist <= 1000) {
					q.push({ con[i].first, con[i].second });
					con.erase(con.begin() + i);
				}
			}
		}
	}
}

int main() {
	int t;

	cin >> t;

	for (int i = 0; i < t; i++) {
		vector<pair<int, int>>con;

		cin >> n >> sx >> sy;

		for (int j = 0; j < n; j++) {
			int x, y;

			cin >> x >> y;

			con.push_back({ x, y });
		}

		cin >> dx >> dy;

		find(con);

		if (chk)
			cout << "happy";
		else
			cout << "sad";

		cout << "\n";
	}

	return 0;
}