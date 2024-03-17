#include <iostream>

using namespace std;

char arr[101][101];

int main() {
	int n;

	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
		}
	}

	int x = 0, y = 0;

	for (int i = 0; i < n; i++) {
		int cnt = 0;
		int tmp = 0;

		for (int j = 0; j < n; j++) {
			if (arr[i][j] == '.') {
				cnt++;
			}
			else if (arr[i][j] == 'X') {
				if (cnt >= 2) {
					cnt = 0;
					x++;
				}
				else {
					cnt = 0;
				}
			}
		}
		if (cnt >= 2)
			x++;
	}

	for (int i = 0; i < n; i++) {
		int cnt = 0;
		for (int j = 0; j < n; j++) {
			if (arr[j][i] == '.') {
				cnt++;
			}
			else if (arr[j][i] == 'X') {
				if (cnt >= 2) {
					cnt = 0;
					y++;
				}
				else {
					cnt = 0;
				}
			}
		}
		if (cnt >= 2)
			y++;
	}

	cout << x << " " << y;

	return 0;
}