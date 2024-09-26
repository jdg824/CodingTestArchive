#include <iostream>
#include <map>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	map<string, string>v;
	int n, m;

	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		string add, pass;

		cin >> add >> pass;
		v[add] = pass;
	}

	for (int i = 0; i < m; i++) {
		string find;

		cin >> find;
		cout << v[find] << "\n";
	}

	return 0;
}