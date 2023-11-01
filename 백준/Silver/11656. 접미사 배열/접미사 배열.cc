#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	string str;
	vector <char>v;
	vector <string>s;

	cin >> str;

	for (int i = 0; i < str.length(); i++)
		v.push_back(str[i]);

	for (int i = 0; i < str.length(); i++) {
		string st;
		for (int j = i; j < str.length(); j++) {
			st += str[j];
		}
		s.push_back(st);
		st.clear();
	}

	sort(s.begin(), s.end());

	for (int i = 0; i < s.size(); i++)
		cout << s[i] << "\n";

	return 0;
}