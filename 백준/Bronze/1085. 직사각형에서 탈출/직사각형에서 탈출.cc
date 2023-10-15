#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	int x, y, w, h;
	vector <int>v;

	cin >> x >> y >> w >> h;

	for (int i = 0; i <= w; i+=w) {
		for (int j = 0; j <= h; j+=h) {
			if (abs(i - x) <= abs(j - y))
				v.push_back(abs(i - x));
			else if (abs(i - x) > abs(j - y))
				v.push_back(abs(j - y));
		}
	}

	cout << *min_element(v.begin(), v.end());

	return 0;
}