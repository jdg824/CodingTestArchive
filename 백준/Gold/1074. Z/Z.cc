#include <iostream>
#include <math.h>

using namespace std;

int r, c, n;
int cnt = 0;

void solve(int x, int y, int size) {
	if (x == r && y == c) {
		cout << cnt;
		return;
	}

	if (r < x + size && r >= x && c < y + size && c >= y) {
		solve(x, y, size / 2);
		solve(x, y + size / 2, size / 2);
		solve(x + size / 2, y, size / 2);
		solve(x + size / 2, y + size / 2, size / 2);
	}
	else
		cnt += (size * size);
}

int main() {
	cin >> n >> r >> c;

	int size = pow(2, n);

	solve(0, 0, size);

	return 0;
}