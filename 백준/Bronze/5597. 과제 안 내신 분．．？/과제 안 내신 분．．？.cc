#include <iostream>

using namespace std;

bool check[31] = { 0, };

int main() {
	for (int i = 0; i < 28; i++) {
		int num;

		cin >> num;
		
		check[num] = true;
	}

	for (int i = 1; i < 31; i++) {
		if (check[i] == false)
			cout << i << "\n";
	}

	return 0;
}