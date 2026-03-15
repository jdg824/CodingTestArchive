#include <iostream>

using namespace std;

string search[8] = { "c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z=" };
int len[8] = { 2, 2, 3, 2, 2, 2, 2, 2 };

int main() {
	string str;
	int cnt = 0;
	int idx = 0;

	cin >> str;

	for (int i = 0; i < 8; i++) {
		while (1)
		{
			idx = str.find(search[i]);

			if (idx == string::npos)
				break;
			str.replace(idx, len[i], " ");
		}
	}

	cout << str.size();
	
	return 0;
}