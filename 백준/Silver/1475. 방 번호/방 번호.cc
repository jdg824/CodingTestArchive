#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(pair<char, int>a, pair<char, int>b) {
	return a.second < b.second;
}

int main() {
	map<char, int> mp;
	string str;
	int cnt = 0;

	cin >> str;

	for (int i = 0; i < str.size(); i++) {
		if (str[i] == '6' || str[i] == '9') {
			if (mp['6'] > mp['9']) {
				mp['9']++;
			}
			else if (mp['6'] < mp['9']) {
				mp['6']++;
			}
			else
				mp[str[i]]++;
		}
		else {
			mp[str[i]]++;
		}
	}

	vector <pair<char, int>> v(mp.begin(), mp.end());

	sort(v.begin(), v.end(), cmp);

	cout << v[v.size()-1].second;

	return 0;
}