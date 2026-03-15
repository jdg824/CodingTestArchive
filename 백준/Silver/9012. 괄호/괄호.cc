#include <iostream>
#include <stack>

using namespace std;

int main() {
	int num;

	cin >> num;

	for (int i = 0; i < num; i++)
	{
		string str;
		stack<int> st;
		int flag = 0;

		cin >> str;

		for (int j = 0; j < str.size(); j++) {
			if (str[j] == ')') {
				if (st.size() == 0) {
					cout << "NO" << "\n";
					flag = 1;
					break;
				}
				else {
					st.pop();
				}
			}
			else{
				st.push(1);
			}
		}
		if (flag == 0) {
			if (st.size() == 0)
			{
				cout << "YES" << "\n";
			}
			else {
				cout << "NO" << "\n";
			}
		}
	}

	return 0;
}