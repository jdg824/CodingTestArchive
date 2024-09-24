#include <iostream>
#include <string>

using namespace std;

int main() {
	string str;

	while (1) {
		cin >> str;

		if (str == "0")
			break;

		int cnt = 0;

		for (int i = 0; i < str.size() / 2; i++) {
			int len = str.size() - 1;

			if (str[i] == str[len - i])
				cnt++;
		}

		if (cnt == str.size() / 2)
			cout << "yes";
		else
			cout << "no";
		cout << "\n";
	}
}