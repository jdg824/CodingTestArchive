#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<string, int>&a, pair<string, int> &b) {
	if (a.second == b.second)
		return a.first < b.first;
	else
		return a.second < b.second;
}

int main() {
	int n, count = 0;
	vector<pair<string, int>>v;
	string str;
	int len;

	cin >> n;

	for (int i = 0; i < n; i++) {
		count = 0;
		cin >> str;
		len = str.length();

		for (int j = 0; j < v.size(); j++) {
			if (str == v[j].first)
				count++;
		}
		if (count == 0)
			v.push_back(make_pair(str, len));
	}

	sort(v.begin(), v.end(), compare);

	for (int i =0; i<v.size(); i++)
		cout << v[i].first << "\n";

	return 0;
}