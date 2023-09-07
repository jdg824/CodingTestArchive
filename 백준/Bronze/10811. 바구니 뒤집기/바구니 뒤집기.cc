#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	vector <int>v;
	int n, m, a, b;

	cin >> n >> m;

	for (int i = 1; i <= n; i++) {
		v.push_back(i);
	}

	for (int i = 0; i < m; i++) {
		cin >> a >> b;
		reverse(v.begin()+a-1 , v.end()-(n-b));
	}

	for (int i = 0; i < n; i++) {
		cout << v[i] << " ";
	}

	return 0;
}