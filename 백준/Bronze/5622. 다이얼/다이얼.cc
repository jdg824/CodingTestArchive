#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
	char st[16];
	int arr[26] = { 3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10 };
	int value = 0, loc = 0, idx;

	cin >> st;

	for (int i =0; i <=15; i++) {
		for (int j = 65; j <= 90; j++) {
			if (st[i] == j) {
				loc = 1;
				idx = j;
			}
		}
		if (loc == 1)
			value += arr[idx - 65];

		loc = 0;
	}

	cout << value;

	return 0;
}