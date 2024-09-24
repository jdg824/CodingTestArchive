#include <iostream>
#include <math.h>

using namespace std;

int main() {
	int l;	//길이
	string str;
	long long ans = 0;

	cin >> l >> str;

	for (int i = 0; i < l; i++) {
		ans += ((str[i] - 'a')+1) * pow(31, i);
	}

	cout << ans % 1234567891;

	return 0;
}