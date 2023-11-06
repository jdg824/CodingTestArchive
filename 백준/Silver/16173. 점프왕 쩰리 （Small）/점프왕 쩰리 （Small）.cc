#include <iostream>
#include <vector>
#include <stack>

using namespace std;


//젤리가 오른쪽으로 가거나 밑으로 가거나 둘중 하나임
int mv_x[2] = { 1,0 };
int mv_y[2] = { 0, 1 };

int n;
vector <vector<int>>v;
vector <int>d;

//check 0, 1 방문여부
vector <vector<bool>>check;
vector <bool>ch;

bool DFS() {
	stack <pair<int, int>>st;
	st.push({ 0,0 });
	check[0][0] = true;

	while (!st.empty()) {
		//현재 위치의 좌표
		int x = st.top().first;
		int y = st.top().second;
		st.pop();

		if (v[x][y] == -1)
			return true;

		for (int i = 0; i < 2; i++) {
			//움직였을때
			int xx = x + mv_x[i] * v[x][y];
			int yy = y + mv_y[i] * v[x][y];

			if (xx >= 0 && xx <= n - 1 && yy >= 0 && yy <= n - 1) {
				if (!check[xx][yy]) {
					st.push(make_pair(xx, yy));
					check[xx][yy] = true;
				}
			}
		}
	}

	return false;
}

int main() {
	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			int num;
			cin >> num;
			d.push_back(num);
			ch.push_back(false);
		}
		v.push_back(d);
		check.push_back(ch);
		d.clear();
	}

	if (DFS())
		cout << "HaruHaru";
	else
		cout << "Hing";

	return 0;
}