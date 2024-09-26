#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, m;
	map<string, int> map;	//name, idx;
	vector<string> v;

	cin >> n >> m;

	for (int i = 1; i <= n; i++) {
		string name;
		cin >> name;
		
		map[name] = i;
		v.push_back(name);
	}

	for (int i = 0; i < m; i++) {
		string cmd;

		cin >> cmd;

		if (atoi(cmd.c_str()) == 0)
			cout << map[cmd]<< "\n";
		else
			cout << v[stoi(cmd)-1] << "\n";
	}
}