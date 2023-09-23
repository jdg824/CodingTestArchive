#include <iostream>

using namespace std;

int arr[10001] = { 0, };

int main() {
	std::ios_base::sync_with_stdio(0);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int n, a;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> a;
		arr[a]++;
	}

	for (int i = 0; i < 10001; i++) {
		if (arr[i] != 0) {
			for (int j = 0; j < arr[i]; j++)
				cout << i << "\n";
		}
	}

	return 0;
}