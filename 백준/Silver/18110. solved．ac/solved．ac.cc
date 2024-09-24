#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	int n;
	vector<int> v;

	cin >> n;

	if (n == 0)
		cout << 0;
	else {
		for (int i = 0; i < n; i++) {
			int a;
			cin >> a;
			v.push_back(a);
		}

		sort(v.begin(), v.end());

		//하위 15프로 제거
		double size = v.size() * 0.15;

		int start = round(size);

		double sum = 0;
		for (int i = start; i < v.size() - start; i++) {
			sum += v[i];
		}

		cout << round(sum / (v.size() - 2 * start));
	}

	return 0;
}