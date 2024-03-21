#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>

using namespace std;

int arr[10] = { 0, };

bool chk(int n) {
	string num = to_string(n);

	for (int i = 0; i < num.size(); i++) {
		if (arr[num[i] - '0'] == 1)
			return false;
	}

	return true;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);

	int m, n;
	int cnt;

	cin >> n >> m;

	for (int i = 0; i < m; i++) {
		int b;

		cin >> b;
		arr[b] = 1;
	}

	cnt = abs(n - 100);

	for (int i = 0; i <= 1000000; i++) {
		if (chk(i) == true) {
			int cnt2 = abs(n - i) + to_string(i).length();
			cnt = min(cnt, cnt2);
		}
	}

	cout << cnt;

	return 0;
}

//다시풀기