#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main() {
	int n, num, cnt = 1;
	stack <int>st;
	vector <char>ans;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> num;

		while(cnt <= num) {
			st.push(cnt);
			cnt++;
			ans.push_back('+');
		}

		if (st.top() == num) {
			st.pop();
			ans.push_back('-');
		}
		else {
			cout << "NO";
			return 0;
		}
	}

	for (int i = 0; i < ans.size(); i++)
		cout << ans[i] << "\n";

	return 0;
}