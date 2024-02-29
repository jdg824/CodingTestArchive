#include <iostream>
#include <map>

using namespace std;

int main() {
	int n;
	map<string, string, greater<>>m;

	cin >> n;

	for (int i = 0; i < n; i++) {
		string name, cmd;

		cin >> name >> cmd;
		m[name] = cmd;
	}

	for (auto iter = m.begin(); iter != m.end(); iter++) {
		if (iter->second == "enter")
			cout << iter->first << "\n";
	}

	return 0;
}