#include <iostream>
#include <algorithm>

using namespace std;

bool cmp(char a, char b) {
	return a > b;
}

int main() {
	string n;
	int num, sum = 0;

	cin >> n;

	for (int i = 0; i < n.size(); i++) {
		num = n[i] - '0';
		sum += num;
	}

	sort(n.begin(), n.end(), cmp);

	if (sum % 3 != 0 || n[n.size() - 1] != '0')
		cout << -1;
	else {
		for (int i = 0; i < n.size(); i++)
			cout << n[i];
	}

	return 0;
}