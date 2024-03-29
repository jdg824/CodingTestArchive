#include <iostream>

using namespace std;

int main() {
	string str, ans;

	cin >> str;

	int cnt = 0;

	for (int i = 0; i < str.size(); i++) {

		if (str[i] == 'X')
			cnt++;

		if (str[i] == '.') {
			ans += '.';

			if (cnt % 2 != 0)
				break;
			else
				cnt = 0;
		}

		if (cnt == 2 && str[i+1] != 'X') {
			ans += "BB";
			cnt = 0;
		}
		if (cnt == 4) {
			ans += "AAAA";
			cnt = 0;
		}
	}

	if (cnt % 2 != 0)
		cout << -1;
	else
		cout << ans;

	return 0;
}