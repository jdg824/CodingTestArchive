#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	string ans, str;
	int n, min = -1;

	cin >> n;
	cin.ignore();

	for (int i = 0; i < n; i++) {
		getline(cin, str);
		str += ' ';

		for (int j = 0; j <= str.size(); j++) {
			if (str[j] == ' ') {
				for (int k = j-1; k > min; k--) {
					ans += str[k];
				}
				ans += ' ';
				min = j;
			}
		}
		cout << ans << "\n";
		ans.clear();
		min = -1;
	}

	return 0;
}