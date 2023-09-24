#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(int a, int b) {
	return a > b;
}

int main() {
	string str;
	vector <char>v;

	cin >> str;

	for (int i = 0; i < str.length(); i++)
		v.push_back(str[i]);

	sort(v.begin(), v.end(), compare);

	for (int i = 0; i < v.size(); i++)
		cout << v[i];
}