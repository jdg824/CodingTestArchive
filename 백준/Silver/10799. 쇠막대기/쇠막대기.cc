#include <iostream>
#include <stack>

using namespace std;

int main() {
	string str;
	stack<char> st;
	int cnt = 0;

	cin >> str;

	for (int i = 0; i < str.size(); i++) {
		if (str[i] == '(' && str[i+1] == ')') {
			cnt += st.size();
			i++;
		}
		else if (str[i] == '(')
			st.push('(');
		else if (str[i] == ')') {
			cnt++;
			st.pop();
		}
	}

	cout << cnt;

	return 0;
}