#include <iostream>
#include <stack>

using namespace std;

int main() {
	string str;
	int piece = 0, sum = 0, poll = 0;

	cin >> str;

	for (int i = 0; i < str.length(); i++) {
		if (str[i] == '(') {
			piece++;
			if (str[i + 1] == '(')
				poll++;
			else if (str[i + 1] == ')') {
				piece--;
				sum += piece;
				i++;
			}
		}
		else if (str[i] == ')') {
			piece--;
		}
	}

	cout << sum + poll;

	return 0;
}