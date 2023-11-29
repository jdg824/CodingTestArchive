#include <iostream>
#include <string>

using namespace std;

int main() {
	int arr[10] = { 0, };
	int sum = 1;

	for (int i = 0; i < 3; i++) {
		int num;
		cin >> num;

		sum *= num;
	}

	string str = to_string(sum);

	for (int i = 0; i < str.size(); i++) {
		int idx = int(str[i]) - '0';

		arr[idx]++;
	}

	for (int i = 0; i < 10; i++) {
		cout << arr[i] << "\n";
	}

	return 0;
}