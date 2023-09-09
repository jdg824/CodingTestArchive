#include <iostream>
#include <vector>

using namespace std;

int main() {
	int num;
	string st;
	int count = 0;
	int sum = 0;

	cin >> num;

	for (int i = 0; i < num; i++) {
		cin >> st;

		for (int j = 0; j < st.length(); j++) {
			if (st[j] != st[j + 1]) {
				for (int k = j + 1; k < st.length(); k++) {
					if (st[j] == st[k])
						count++;
				}
			}
		}

		if (count == 0)
			sum++;
		count = 0;
	}
	cout << sum;

	return 0;
}