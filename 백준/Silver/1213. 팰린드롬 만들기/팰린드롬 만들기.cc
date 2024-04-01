#include <iostream>
#include <string>

using namespace std;

int main() {
	int alpa[26] = { 0, };
	string str, ans;

	cin >> str;

	for (int i = 0; i < str.size(); i++)
		alpa[str[i] - 'A']++;

	int b = 0;

	for (int i = 0; i < 26; i++) {
		if (alpa[i] % 2 != 0)
			b++;
	}

	if (b >= 2)
		cout << "I'm Sorry Hansoo";
	else {
		for (int i = 0; i < 26; i++) {
			for (int j = 0; j < alpa[i] / 2; j++)
				ans += i + 'A';
		}

		for (int i = 0; i < 26; i++) {
			if (alpa[i] % 2 == 1)
				ans += i + 'A';
		}

		for (int i = 25; i >= 0; i--) {
			for (int j = 0; j < alpa[i] / 2; j++)
				ans += i + 'A';
		}

		cout << ans;
	}


	return 0;
}