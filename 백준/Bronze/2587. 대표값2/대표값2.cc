#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int sum = 0;
	vector <int>v;

	for (int i = 0; i < 5; i++) {
		int a;
		cin >> a;
		sum += a;
		v.push_back(a);
	}

	sort(v.begin(), v.end());

	cout << sum / 5 << "\n" << v[2];

	return 0;
}