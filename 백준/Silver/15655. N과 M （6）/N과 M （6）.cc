#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, m;
vector<int> v;
int arr[9] = { 0, };
bool chk[9] = { 0, };

void dfs(int num, int cnt) {
	if (cnt == m) {
		for (int i = 0; i < m; i++)
			cout << arr[i] << " ";
		cout << "\n";
	}
	else {
		for (int i = num; i <= n; i++) {
			if (chk[i] == 0) {
				chk[i] = 1;
				arr[cnt] = v[i-1];
				dfs(i + 1, cnt + 1);
				chk[i] = 0;
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

	dfs(1, 0);

	return 0;
}