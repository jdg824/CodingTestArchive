#include <iostream>

using namespace std;

int main() {
	int num;
	int x, y;
	int paper[100][100] = { 0, };

	cin >> num;
	
	for (int i = 0; i < num; i++) {
		cin >> x >> y;

		for (int i = x - 1; i < x + 9; i++) {
			for (int j = y - 1; j < y + 9; j++) {
				if ((i > 99 || j > 99) || (i < 0 || j < 0))
					continue;

				if(paper[i][j] == 0)
					paper[i][j] = 1;
			}
		}
	}

	int count = 0;

	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			if (paper[i][j] == 1)
				count++;
		}
	}

	cout << count;

	return 0;
}