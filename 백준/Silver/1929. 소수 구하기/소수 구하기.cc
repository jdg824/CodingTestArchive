#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, m;
	vector <bool>v;

	cin >> n >> m;

	for (int i = 0; i <= m; i++)
		v.push_back(true);

	for (int i = 2; i * i <= m; i++) {
		if (v[i]) {
			for (int j = i * i; j <= m; j+=i)
				v[j] = false;
		}
	}

	if (n == 1)
		n++;

	for (int i = n; i <= m; i++) {
		if (v[i])
			cout << i << "\n";
	}

	return 0;
}