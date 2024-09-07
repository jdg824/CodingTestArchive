#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	string str;

	cin >> str;

	int count[2] = { 0, 0 };

	char ch = str[0];

	for (int i = 1; i < str.size(); i++) {
		if (ch != str[i]) {
			count[ch - '0']++;
			ch = str[i];
		}
	}
	count[ch - '0']++;

	cout << *min_element(count, count + 2);

	return 0;
}