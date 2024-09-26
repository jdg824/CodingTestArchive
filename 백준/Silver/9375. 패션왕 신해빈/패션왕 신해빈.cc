#include <iostream>
#include <map>

using namespace std;

int main() {
	int t;

	cin >> t;

	for (int i = 0; i < t; i++) {
		int n;
		map<string, int> v;

		cin >> n;

		int ans = 1;
		for (int j = 0; j < n; j++) {
			string clothe, genre;

			cin >> clothe >> genre;

			v[genre]++;	//갯수
		}

		for (auto a : v) {
			ans *= (a.second + 1);
		}

		cout << ans - 1 << "\n";
	}

	return 0;
}