#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n, m;
	vector <int>v_n, v_m;

	cin >> n;
	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		v_n.push_back(num);
	}

	sort(v_n.begin(), v_n.end());

	cin >> m;
	for (int i = 0; i < m; i++) {
		int num;
		cin >> num;
		v_m.push_back(num);
	}

	for (int i = 0; i < m; i++) {
		if (binary_search(v_n.begin(), v_n.end(), v_m[i]))
			cout << 1 << "\n";
		else
			cout << 0 << "\n";
	}

	return 0;
}