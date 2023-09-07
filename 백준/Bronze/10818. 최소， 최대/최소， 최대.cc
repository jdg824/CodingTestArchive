#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	vector <int>v;
	int num, a;

	cin >> num;

	for (int i = 0; i < num; i++) {
		cin >> a;
		v.push_back(a);
	}

	sort(v.begin(), v.end());

	cout << v[0] << " " << v[num - 1];
}