#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {
	int a, b, cnt = 0;
	vector <string>listen, see, result;

	cin >> a >> b;

	for (int i = 0; i < a; i++) {
		string str;
		cin >> str;
		listen.push_back(str);
	}

	for (int i = 0; i < b; i++) {
		string str;
		cin >> str;
		see.push_back(str);
	}

	sort(see.begin(), see.end());

	for (int j = 0; j < a; j++) {
		if (binary_search(see.begin(), see.end(), listen[j])) {
			result.push_back(listen[j]);
			cnt++;
		}
	}
	sort(result.begin(), result.end());

	cout << cnt << "\n";
	for (int i = 0; i < cnt; i++) {
		cout << result[i] << "\n";
	}

	return 0;
}