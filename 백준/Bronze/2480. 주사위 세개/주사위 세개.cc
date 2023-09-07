#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	vector<int> v;
	int a, total;

	for (int i = 0; i < 3; i++) {
		cin >> a;
		v.push_back(a);
	}
	
	sort(v.begin(), v.end());

	int count = 0;

	for (int i = 0; i < 2; i++) {
		if (v[i] != v[i + 1])
			count++;
	}

	if (count == 0)
		total = 10000 + a * 1000;
	else if (count == 1)
		total = 1000 + v[1] * 100;
	else
		total = v[2] * 100;

	cout << total;

	return 0;
}