#include <iostream>
#include <string>

using namespace std;

int main() {
	int n, m;	//compare length, str length
	string str;
	string cmp = "";

	cin >> n >>m >> str;
	
	for (int i = 1; i <= n * 2 + 1; i++) {
		if (i % 2 != 0)
			cmp += 'I';
		else
			cmp += "O";
	}

	int cnt = 0;

	for (int i = 0; i <= m; i++) {
		int chk = 0;
		if (str[i] == 'I') {
			while (str[i + 1] == 'O' && str[i + 2] == 'I') {
				chk++;
				if (chk == n) {
					chk--;
					cnt++;
				}
				i += 2;
			}
			chk = 0;
		}
	}

	cout << cnt;

	return 0;
}