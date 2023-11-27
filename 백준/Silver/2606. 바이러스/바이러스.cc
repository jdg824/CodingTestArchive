#include <iostream>
#include <vector>
#include <stack>

using namespace std;

vector<int> v[101];
bool check[101] = { 0, };
int cnt = 0;

int dfs(int start) {
	stack<int>st;

	st.push(start);
	check[start] = true;

	while (!st.empty()) {
		int dist = st.top();
		st.pop();

		for (int i = 0; i < v[dist].size(); i++) {
			if (!check[v[dist][i]]) {
				cnt++;
				st.push(v[dist][i]);
				check[v[dist][i]] = true;
			}
		}
	}

	return cnt;
}

int main() {
	int n, m;

	cin >> n >> m;

	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}

	cout << dfs(1);

	return 0;
}