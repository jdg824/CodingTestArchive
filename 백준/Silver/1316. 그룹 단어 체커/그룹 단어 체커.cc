#include <iostream>
#include <map>
#include <stack>

using namespace std;

int main() {
	int n;
	int cnt = 0;

	cin >> n;

	for (int i = 0; i < n; i++) {
		map<char, int> m;
		stack<char> st;
		string str;
		bool chk = 0;

		cin >> str;

		st.push(str[0]);
		m[str[0]]++;

		for (int j = 1; j < str.size(); j++) {
			if (st.top() != str[j]) {
				//cout << str[j] << " " << m[str[j]] <<"\n";
				if (m[str[j]] == 0) {
					st.push(str[j]);
					m[str[j]]++;
				}
				else {
					chk = 1;
					break;
				}
			}
			else {
				st.push(str[j]);
			}
		}

		if (chk == 0)
		{
			cnt++;
			//cout << str << "\n";
		}
	}

	cout << cnt;

	return 0;
}