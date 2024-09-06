#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	int a, b;
	string str = "";
	vector <string>v;

	cin >> a >> b;

	for (int i = 1; i <= 1000; i++) {
		string st = to_string(i);
		for (int j = 0; j < i; j++) {
			v.push_back(st);
		}
	}

	int ans = 0;
	for (int i = a - 1; i < b; i++) {
		ans += stoi(v[i]);
	}

	cout << ans;

	return 0;
}