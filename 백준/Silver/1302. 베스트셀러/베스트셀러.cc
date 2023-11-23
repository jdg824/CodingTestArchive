#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<string, int>p, pair<string, int>p2) {
	if (p.second == p2.second)
		return p.first > p2.first;
	else
		return p.second < p2.second;
}

int main() {
	int n;
	vector <pair<string, int>>arr;

	cin >> n;

	for (int i = 0; i < n; i++) {
		string str;
		cin >> str;

		int cnt = 0;

		for (int j = 0; j < arr.size(); j++) {
			if (arr[j].first == str) {
				cnt++;
				arr[j].second++;
			}
		}
		if (cnt == 0) {
			arr.push_back(make_pair(str, 1));
		}
	}

	sort(arr.begin(), arr.end(), compare);

	cout << arr[arr.size()-1].first;

	return 0;
}