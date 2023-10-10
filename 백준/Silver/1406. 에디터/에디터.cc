#include <iostream>
#include <list>

using namespace std;

int main() {
	string str;
	list <char>v;
	list<char>::iterator idx = v.begin();
	int n;
	char cmd, ch;

	cin >> str;

	for (int i = 0; i < str.size(); i++) {
		v.push_back(str[i]);
	}
	idx = v.end();

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> cmd;

		if (cmd == 'P') {
			cin >> ch;
			v.insert(idx, ch);
		}

		if (cmd == 'L') {
			if (idx == v.begin()) {
				idx == v.begin();
				continue;
			}
			idx--;
		}

		if (cmd == 'D') {
			if (idx == v.end()) {
				idx = v.end();
				continue;
			}
			idx++;
		}

		if (cmd == 'B') {
			if (idx == v.begin()) {
				continue;
			}
			idx = v.erase(--idx);	//erase하고 나서 다음 위치를 가르키기 때문에
		}
	}

	for (auto i : v) {
		cout << i;
	}

	return 0;
}