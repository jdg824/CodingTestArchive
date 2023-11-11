#include <iostream>
#include <string>

using namespace std;

int main() {
	int n;
	string str;
	int sum = 0;

	cin >> n >> str;


	for (int i = 0; i < n; i++) {
		sum += (int(str[i]) - 48);
	}
	cout << sum;

	return 0;
}