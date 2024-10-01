#include <iostream>

using namespace std;

int main() {
	int t;

	cin >> t;

	for (int i = 0; i < t; i++) {
		int M, N, x, y;

		cin >> M >> N >> x >> y;
		
		while (1) {
			if (x == y) {
				cout << x << "\n";
				break;
			}
			else if (x > M * N) {
				cout << -1 <<"\n";
				break;
			}

			if (x < y)
				x += M;
			else
				y += N;
		}
	}

	return 0;
}