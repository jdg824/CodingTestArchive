#include <iostream>
#include <stack>

using namespace std;

int main() {
	string str;
	stack <int> st;

	cin >> str;

	if (str == "0") {
		cout << 0;
		return 0;
	}

	for (int i = str.size()-1; i >= 0; i--) {
		int num = str[i] - '0';
		
		for (int j = 0; j < 3; j++) {
			int res = num % 2;
			num /= 2;
			st.push(res);
		}
	}

	while (st.top() != 1) {
		st.pop();
	}

	while (!st.empty()) {
		cout << st.top();
		st.pop();
	}

	return 0;
}