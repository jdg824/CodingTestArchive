#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n, m;
	vector<int> t, e;

	cin >> n >> m;

	for (int i = 0; i < m; i++) {
		int total, each;
		cin >> total >> each;
		t.push_back(total);
		e.push_back(each);
	}

	sort(t.begin(), t.end());
	sort(e.begin(), e.end());

	int a, b, c;
	if (n % 6 == 0)
		a = n / 6 * t[0];
	else
		a = (n / 6 + 1) * t[0];

	b = e[0] * n;

	c = n / 6 * t[0] + n % 6 * e[0];

	cout << min({ a,b,c });

	return 0;
}