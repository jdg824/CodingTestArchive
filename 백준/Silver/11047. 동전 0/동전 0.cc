#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, k;
	vector<int> money;
	int cnt = 0;

	cin >> n >> k;

	for (int i = 0; i < n; i++) {
		int data;

		cin >> data;

		money.push_back(data);
	}

	int idx = money.size() - 1;

	while (1) {
		if (k == 0)
			break;

		if (k / money[idx] != 0) {
			cnt += (k / money[idx]);
			k %= money[idx];
		}

		idx--;
	}

	cout << cnt;

	return 0;
}