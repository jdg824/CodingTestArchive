#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, cost = 0;
	vector <int> load, money;

	cin >> n;

	for (int i = 0; i < n - 1; i++) {
		int len;
		cin >> len;
		load.push_back(len);
	}

	for (int i = 0; i < n; i++) {
		int gas;
		cin >> gas;

		if(i < n-1)
			money.push_back(gas);
	}

	for (int i = 0; i < n - 1; i++) {
		int cnt = 0;
		for (int j = i + 1; j < n - 1; j++) {
			if (money[i] > money[j])
				cnt++;
		}

		if (cnt == 0) {
			for (int j = i; j < n - 1; j++)
				cost += (money[i] * load[j]);
			
			break;
		}
		else
			cost += (money[i] * load[i]);
	}

	cout << cost;
}