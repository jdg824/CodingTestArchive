#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int a, b;
	vector <int> v1, v2;

	cin >> a >> b;

	for (int i = 0; i < a; i++) {
		int num;
		cin >> num;
		v1.push_back(num);
	}

	for (int i = 0; i < b; i++) {
		int num;
		cin >> num;
		v2.push_back(num);
	}

	sort(v2.begin(), v2.end());

	int cnt = 0;

	for (int i = 0; i < a; i++) {
		if (binary_search(v2.begin(), v2.end(), v1[i]))
			cnt++;
	}

	cout << (a + b) - 2 * cnt;

	return 0;
}