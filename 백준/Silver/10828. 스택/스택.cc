#include <iostream>
#include <stack>

using namespace std;

int main() {
	stack <int>st;
	int n, num;
	string cmd;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> cmd;

		if (cmd == "push") {
			cin >> num;
			st.push(num);
		}
		if (cmd == "pop") {
			if (st.size() == 0)
				cout << "-1\n";
			else {
				cout << st.top() << "\n";
				st.pop();
			}
		}
		if (cmd == "size") {
			cout << st.size()<<"\n";
		}
		if (cmd == "empty") {
			cout << st.empty()<<"\n";
		}
		if (cmd == "top") {
			if (st.size() == 0)
				cout << "-1\n";
			else
				cout << st.top()<<"\n";
		}
	}

	return 0;
}