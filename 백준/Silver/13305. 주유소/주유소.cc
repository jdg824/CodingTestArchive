#include <iostream>
#include <vector>

using namespace std;

int main() {
	long long n, cost = 0;
	long long now;
	vector <long long> load, money;

	cin >> n;

	for (int i = 0; i < n - 1; i++) {
		long long len;
		cin >> len;
		load.push_back(len);
	}

	for (int i = 0; i < n; i++) {
		long long gas;
		cin >> gas;
		money.push_back(gas);
	}

	now = money[0];

	for (int i = 0; i < n - 1; i++) {
		if (now < money[i])
			cost += (now * load[i]);
		else {
			now = money[i];
			cost += (now * load[i]);
		}
	}

	cout << cost;
}