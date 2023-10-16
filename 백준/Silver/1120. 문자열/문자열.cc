#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {
	string str1, str2, min_str, max_str;
	vector <int>v;

	cin >> str1 >> str2;

	if (str1.length() < str2.length()) {
		min_str = str1;
		max_str = str2;
	}
	else {
		min_str = str2;
		max_str = str1;
	}

	for (int i = 0; i <= max_str.length() - min_str.length(); i++) {
		int count = 0;
		for (int j = 0; j < min_str.length(); j++) {
			if (max_str[i + j] != min_str[j])
				count++;
		}
		v.push_back(count);
	}

	cout << *min_element(v.begin(), v.end());

	return 0;
}