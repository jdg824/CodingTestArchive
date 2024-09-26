#include <iostream>
#include <string>

using namespace std;

int main() {
	int cnt = 0;
	int ans = 0;
	string str[3];

	for (int i = 0; i < 3; i++)
		cin >> str[i];

	for (int i = 0; i < 3; i++) {
		cnt++;

		if (atoi(str[i].c_str()) != 0) {
			ans = stoi(str[i]) + (4 - cnt);
			break;
		}
	}

	if (ans % 3 == 0 && ans % 5 == 0)
		cout << "FizzBuzz";
	else if (ans % 3 == 0)
		cout << "Fizz";
	else if (ans % 5 == 0)
		cout << "Buzz";
	else
		cout << ans;

	return 0;
}