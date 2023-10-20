#include <iostream>

using namespace std;

int main() {
	int n;

	cin >> n;

	for (int i = 0; i < n; i++) {
		string str;
		cin >> str;

		cout << str[0] << str[str.length()-1] <<'\n';
	}

	return 0;
}