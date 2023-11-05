#include <iostream>
#include <string>

using namespace std;

int main() {
	while (1) {
		string str;
		getline(cin, str);

		if (str.find('#') == 0)
			break;

		for (int i = 0; i < str.size(); i++)
			str[i] = tolower(str[i]);

		int cnt = 0;
		for (int i = 0; i < str.length(); i++) {
			if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
				cnt++;
		}
		cout << cnt << "\n";
	}

	return 0;
}