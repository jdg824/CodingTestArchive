#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	string str;
	vector <char> ch;
	vector <char> ans;

	cin >> str;

	for (int i = 0; i < str.length(); i++) {
		ch.push_back(str[i]);
		ans.push_back(str[str.length() - i - 1]);
	}

	int cnt = 0;

	for (int i = 0; i < str.length(); i++) {
		if (ch[i] == ans[i])
			cnt++;
	}

	if (cnt == str.length())
		cout << "1";
	else
		cout << "0";


	return 0;
}