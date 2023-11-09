#include <iostream>
#include <vector>

using namespace std;

bool v[1000001] = { 0, };

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;

	for (int i = 2; i * i <= 1000001; i++) {
		for (int j = i * i; j <= 1000001; j += i)
			if(v[j] == false)
				v[j] = true;
	}

	while (1) {
		cin >> n;

		if (n == 0)
			break;

		bool chk = false;

		int idx;

		for (idx = 3; idx <= n/2; idx+=2) {
			if (!v[idx] && !v[n - idx]) {
				chk = true;
				cout << n << " = " << idx << " + " << n - idx << "\n";
				break;
			}
		}
		if(!
			chk)
			cout << "Goldbach's conjecture is wrong.\n";
	}

	return 0;
}