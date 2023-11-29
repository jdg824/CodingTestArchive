#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> v;

	for (int i = 0; i < 8; i++) {
		int num;

		cin >> num;
		v.push_back(num);
	}

	int cnt = 0;
	for (int i = 0; i < 8; i++) {
		if (v[i] == i + 1)
			cnt++;

		if (v[i] == 8 - i)
			cnt--;
	}

	if (cnt == 8)
		cout << "ascending";
	else if (cnt == -8)
		cout << "descending";
	else
		cout << "mixed";

	return 0;
}