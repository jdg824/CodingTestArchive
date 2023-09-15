#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	int n, b, mod;
	vector <char>v;

	cin >> n >> b;

	while ((n != 0) || (n ==1)) {
		mod = n % b;
		n = n / b;

		if ((mod >= 10) && (mod <= 36)) {
			mod += 55;
		}

		if ((mod >= 0) && (mod <= 9)) {
			mod += 48;
		}

		v.insert(v.begin(), mod);
	}

	for (int i = 0; i < v.size(); i++)
		cout << v[i];

	return 0;
}