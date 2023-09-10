#include <iostream>

using namespace std;

int main() {
	int v[9][9];
	int a, x, y;
	int max = 0;

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			cin >> v[i][j];

			if (v[i][j] >= max) {
				max = v[i][j];
				x = i+1;
				y = j+1;
			}
		}
	}

	cout << max << "\n" << x << " " << y;
}