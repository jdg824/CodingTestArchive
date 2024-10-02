#include <set>
#include <iostream>

using namespace std;

int main() {
	int t;

	cin >> t;

	for (int i = 0; i < t; i++) {
		multiset<int> m;
		int k;

		cin >> k;

		for (int j = 0; j < k; j++) {
			char cmd;
			int num;

			cin >> cmd >> num;

			if (cmd == 'I')
				m.insert(num);
			else {
				if (!m.empty()) {
					if (num == -1)
						m.erase(m.begin());
					else {
						auto i = m.end();
						i--;

						m.erase(i);
					}
				}
			}
		}

		if (m.empty())
			cout << "EMPTY\n";
		else {
			auto i = m.end();
			i--;

			cout << *i << " " << *m.begin() << "\n";
		}
	}
}