#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main() {
	int n;
	stack<double>st;
	vector <double>v;
	string str;

	cin >> n >> str;
	
	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		v.push_back(num);
	}

	int idx = 0;

	for (int j = 0; j < str.length(); j++) {
		double ans = 0, tmp = 0;

		if (str[j] == '*') {
			ans += st.top();
			st.pop();
			ans *= st.top();
			st.pop();
			st.push(ans);
			continue;
		}
		else if (str[j] == '-') {
			tmp = st.top();
			st.pop();
			ans = st.top() - tmp;
			st.pop();
			st.push(ans);
			continue;
		}
		else if (str[j] == '+') {
			tmp = st.top();
			st.pop();
			ans = st.top() + tmp;
			st.pop();
			st.push(ans);
			continue;
		}
		else if (str[j] == '/') {
			tmp = st.top();
			st.pop();
			ans = st.top() / tmp;
			st.pop();
			st.push(ans);
			continue;
		}
		else {
			st.push(v[str[j] - 'A']);
		}
	}
	
	cout << fixed;
	cout.precision(2);
	cout << st.top();

	return 0;
}