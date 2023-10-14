#include <iostream>
#include <string>

using namespace std;

int main() {
	int n;
	string f, ans;

	cin >> n;

	cin >> f;
	ans = f;

	for (int i = 0; i < n-1; i++) {
		string str;
		cin >> str;

		for (int j = 0; j < ans.size(); j++) {
			if (str[j] != ans[j])
				ans[j] = '?';
		}
	}

	cout << ans;

	return 0;
}