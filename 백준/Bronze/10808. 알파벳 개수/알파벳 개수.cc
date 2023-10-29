#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<pair<char, int>> v;
	string str;

	for (int i = 0; i < 26; i++) {
		v.push_back(make_pair('a' + i, 0));
	}

	cin >> str;

	for (int i = 0; i < str.length(); i++) {
		for (int j = 0; j < 26; j++) {
			if (str[i] == v[j].first) {
				v[j].second++;
				continue;
			}
		}
	}

	for (int i = 0; i < 26; i++)
		cout << v[i].second << " ";

	return 0;
}