#include <iostream>
#include <stack>

using namespace std;

int main() {
	int n, tsk = 0;
	string str;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> str;

		stack <char>st;
		tsk = 0;
		for (int j = 0; j < str.size(); j++) {
			if (str[j] == '(')
				st.push(str[j]);

			if (str[j] == ')')
			{
				if (!st.empty())
					st.pop();
				else {
					tsk = 1;
					break;
				}
			}
		}
		
		if (!st.empty() || tsk==1)
			cout << "NO\n";
		else
			cout << "YES\n";
	}

	return 0;
}
