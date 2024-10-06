#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, m;
vector<int> v;
int arr[9] = { 0, };
bool chk[10001] = { 0, };

void dfs(int cnt) {
	if (cnt == m) {
		for (int i = 0; i < m; i++)
			cout << arr[i] << " ";
		cout << "\n";
	}
	else {
		for (int i = 0; i < v.size(); i++) {
			int a = v[i];

			if (chk[a] == 0) {
				chk[a] = 1;
				arr[cnt] = a;
				dfs(cnt + 1);
				chk[a] = 0;
			}
		}
	}
}

int main() {
	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;

		v.push_back(a);
	}

	sort(v.begin(), v.end());

	dfs(0);

	return 0;
}