#include <iostream>
#include <vector>

using namespace std;

int main() {
	int m, n;
	vector <int>v;

	cin >> m >> n;


	int cnt = 0, sum=0;

	for (int i = m; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			if (i % j == 0)
				cnt++;
		}

		if (cnt == 2) {
			sum += i;
			v.push_back(i);
		}
		cnt = 0;
	}

	if (sum == 0)
		cout << "-1";
	else
		cout << sum << " " << v[0];

	return 0;
}