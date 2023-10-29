#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main() {
	int n;
	vector <int>v, ans;
	stack <int>st;

	cin >> n;

	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		v.push_back(num);
		ans.push_back(-1);
	}

	for (int i = n - 1; i >= 0; i--) {
		while(!st.empty() && st.top() <= v[i])
			st.pop();

		if (st.empty()) {
			st.push(v[i]);
			continue;
		}
		else
			ans[i] = st.top();

		st.push(v[i]);
	}

	for (int i = 0; i < n; i++)
		cout << ans[i] << " ";
	
	return 0;
}