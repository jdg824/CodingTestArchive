#include <iostream>
#include <string>

using namespace std;

int main() {
	string str, chk;
	
	getline(cin, str);
	getline(cin, chk);

	int count = 0;
	int size = chk.size();

	while (1) {
		if (str.find(chk) == string::npos)
			break;
		else {
			int idx = str.find(chk);

			str = str.substr(idx + size, str.length());

			count++;
		}
	}

	cout << count;

	return 0;
}