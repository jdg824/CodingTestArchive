#include <iostream>
#include <string>

using namespace std;

int main() {
	string str;

	while (1) {
		int s, b, n, sp;
		s = 0, b = 0, n = 0, sp = 0;

		getline(cin, str);

		if (cin.eof())
			break;

		for (int i = 0; i < str.length(); i++) {

			if (str[i] >= 65 && str[i] <= 90)
				b++;
			else if (str[i] >= 97 && str[i] <= 122)
				s++;
			else if (str[i] == ' ')
				sp++;
			else if (str[i] >= 48 && str[i] <= 57)
				n++;
		}

		cout << s << " " << b << " " << n << " " << sp << "\n";
	}

	return 0;
}