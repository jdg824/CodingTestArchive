#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int chess[6];
	int ans[6] = { 1,1,2,2,2,8 };

	for (int i = 0; i < 6; i++) {
		cin >> chess[i];
	}

	for (int i = 0; i < 6; i++) {
		cout << ans[i] - chess[i] << " ";
	}


	return 0;
}