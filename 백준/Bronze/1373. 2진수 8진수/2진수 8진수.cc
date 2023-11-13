#include <iostream>

using namespace std;

int main() {
	string str;
	cin >> str;

	int len = str.length();
	int idx = 0;

	if (len % 3 == 1) {
		cout << str[0];
		idx = 1;
	}
	else if (len % 3 == 2) {
		cout << (str[0] - '0') * 2 + (str[1] - '0');
		idx = 2;
	}

	for(; idx<len; idx+=3)
		cout << ((str[idx] - '0') * 4) + ((str[idx + 1] - '0') * 2) + (str[idx + 2] - '0');

	return 0;
}