#include <iostream>
#include <set>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, limit;
	string name;
	char game;

	set <string> s;

	cin >> n >> game;

	if (game == 'Y')
		limit = 2;
	else if (game == 'F')
		limit = 3;
	else
		limit = 4;

	for (int i = 0; i < n; i++) {
		cin >> name;
		s.insert(name);
	}

	cout << s.size() / (limit-1);

	return 0;
}