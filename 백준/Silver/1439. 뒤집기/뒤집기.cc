#include <iostream>

using namespace std;

int main() {
	string str;

	cin >> str;

	int zero = 0;
	int one = 0;

	char tmp_0 = '0';
	char tmp_1 = '1';

	for (int i = 0; i < str.size(); i++) {
		if (str[i] != tmp_0) {
			tmp_0 = str[i];
			zero++;

			if (tmp_0 == '0')
				zero--;
		}

		if (str[i] != tmp_1) {
			tmp_1 = str[i];
			one++;

			if (tmp_1 == '1')
				one--;
		}
	}

	cout << min(zero, one);

	return 0;
}