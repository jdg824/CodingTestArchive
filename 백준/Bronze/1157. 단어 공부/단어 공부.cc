#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(pair<char, int> a, pair<char, int>b) {
	return a.second < b.second;
}

int main() {
	map<char, int> mp;
	string str;

	cin >> str;

	for (int i = 0; i < str.size(); i++) {
		str[i] = toupper(str[i]);

		mp[str[i]]++;
	}

	vector<pair<char, int>> v(mp.begin(), mp.end());

	sort(v.begin(), v.end(), cmp);

	if (v.size() > 1)
	{
		if (v[v.size() - 1].second == v[v.size() - 2].second)
			cout << "?";
		else
			cout << v[v.size() - 1].first;
	}
	else
		cout << v[v.size() - 1].first;

}