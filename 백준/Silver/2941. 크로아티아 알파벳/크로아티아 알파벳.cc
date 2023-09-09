#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	vector <string>cro = { "c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z=" };
	string str;

	cin >> str;

	for (int i = 0; i < 8; i++) {
		while (1) {
			if (str.find(cro[i]) != -1)
				str.replace(str.find(cro[i]), cro[i].length(), "!");
			else
				break;
		}
	}

	cout << str.length();
}