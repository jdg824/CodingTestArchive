#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {
	string str1, str2;
	vector <int>v;

	cin >> str1 >> str2;

	for (int i = 0; i <= str2.length() - str1.length(); i++) {
		int count = 0;
		for (int j = 0; j < str1.length(); j++) {
			if (str2[i + j] != str1[j])
				count++;
		}
		v.push_back(count);
	}

	cout << *min_element(v.begin(), v.end());

	return 0;
}