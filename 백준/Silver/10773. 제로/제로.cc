#include <iostream>
#include <stack>

using namespace std;

int main() {
	int n;
	stack<int>st;

	cin >> n;

	for (int i = 0; i < n; i++) {
		int k;
		cin >> k;

		if (k == 0)
			st.pop();
		else
			st.push(k);
	}

	int sum = 0;

	while (!st.empty()) {
		sum += st.top();
		st.pop();
	}

	cout << sum;

	return 0;
}