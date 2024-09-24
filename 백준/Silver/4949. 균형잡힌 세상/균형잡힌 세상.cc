#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {
	while (1) {
		string str;
		bool chk = 1;

		getline(cin, str);

		if (str[0] == '.')
			break;

		stack<char> st;

		for (int i = 0; i < str.size(); i++) {
			if (str[i] == '(' || str[i] == '[')
				st.push(str[i]);
			
			if (str[i] == ')') {
				if (st.empty() || st.top() == '[')
					chk = 0;
				else
					st.pop();
			}

			if (str[i] == ']') {
				if (st.empty() || st.top() == '(')
					chk = 0;
				else
					st.pop();
			}
		}

		if (st.empty() && chk)
			cout << "yes\n";
		else
			cout << "no\n";

	}

	return 0;
}