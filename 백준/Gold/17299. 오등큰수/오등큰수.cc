#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>

using namespace std;

int s[1000001] = { 0, };

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	vector <int>v, ans;
	stack <pair<int, int>>st;

	cin >> n;

	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;

		v.push_back(num);
		ans.push_back(-1);
		s[num]++;
	}

	for (int i = n-1; i >= 0; i--) {
		while (!st.empty() && st.top().second <= s[v[i]])
			st.pop();

		if (st.empty()) {
			st.push(make_pair(v[i], s[v[i]]));
			continue;
		}
		else {
			ans[i] = st.top().first;
		}

		st.push(make_pair(v[i],s[v[i]]));
	}

	for (int i = 0; i < n; i++)
		cout << ans[i] << " ";

	return 0;
}