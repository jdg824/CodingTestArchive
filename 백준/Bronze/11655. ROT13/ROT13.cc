#include <iostream>
#include <string>

using namespace std;

int main() {
	string str, ans;
	
	getline(cin, str);

	for (int i = 0; i < str.size(); i++) {
		if (str[i] >= 'a' && str[i] <= 'z')
			cout << char('a' + (str[i] - 'a' + 13) % 26);
		else if (str[i] >= 'A' && str[i] <= 'Z')
			cout << char('A'+ (str[i] - 'A' + 13) % 26);
		else if (str[i] == ' ')
			cout << ' ';
		else if (str[i] >= 48 && str[i] <= 57)
			cout << str[i];
	}

	return 0;
}