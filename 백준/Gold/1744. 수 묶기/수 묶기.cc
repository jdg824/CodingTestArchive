#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(int a, int b) {
	if (a < 0 && b < 0)
		return a < b;
	else
		return a > b;
}

int main() {
	int n;
	vector<int> v, s;

	cin >> n;

	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;

		if (num >= 0)
			v.push_back(num);
		else
			s.push_back(num);
	}

	sort(v.begin(), v.end(), cmp);
	sort(s.begin(), s.end(), cmp);

	int idx = 0, sum = 0;

	while (1) {
		if (v.size() == 1 || v.size() == 0)
			break;

		if (v[0] * v[1] > v[0] + v[1]) {
			sum += v[0] * v[1];
			v.erase(v.begin() + 0);
			v.erase(v.begin() + 0);
		}
		else {
			sum += v[0];
			v.erase(v.begin() + 0);
		}
	}

	while (1) {
		if (s.size() == 1 || s.size() == 0)
			break;

		if (s[0] * s[1] > s[0] + s[1]) {
			sum += s[0] * s[1];
			s.erase(s.begin() + 0);
			s.erase(s.begin() + 0);
		}
		else {
			sum += s[0];
			s.erase(s.begin() + 0);
		}
	}

	if (!v.empty() && !s.empty()) {
		if (v.front() * s.front() > v.front() + s.front())
			cout << sum + v[0] * s[0];
		else
			cout << sum + v[0] + s[0];
	}
	else if (!v.empty() && s.empty())
		cout << sum + v[0];
	else if (v.empty() && !s.empty())
		cout << sum + s[0];
	else
		cout << sum;

	return 0;
}