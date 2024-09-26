#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

bool cmp(pair<int, int>a, pair<int, int>b) {
	if (a.first == b.first)
		return a.second < b.second;
	else
		return a.first > b.first;
}

int main() {
	vector<int> v;
	int n;
	double sum = 0;

	cin >> n;

	for (int i = 0; i < n; i++) {
		int num;

		cin >> num;
		sum += num;
		v.push_back(num);
	}

	sort(v.begin(), v.end());

	int avg = round(sum / n);
	int mid = v[n / 2];
	int arrange = v[n - 1] - v[0];
	int many;

	vector<pair<int, int>> ans;	//cnt, value;
	for (int i = 0; i < n; i++) {
		int cnt = 1;

		for (int j = i + 1; j < n; j++) {
			if (v[i] == v[j])
				cnt++;
			else
				break;
		}
		ans.push_back({ cnt, v[i] });
		i += (cnt - 1);
	}

	sort(ans.begin(), ans.end(), cmp);

	int max = ans[0].first;
	int cnt = 0;

	for (int i = 0; i < ans.size(); i++) {
		if (ans[i].first == max)
			cnt++;
	}

	if (cnt == 1)
		many = ans[0].second;
	else
		many = ans[1].second;

	cout << avg << "\n" << mid << "\n" << many << "\n" << arrange;

	return 0;
}