#include <iostream>
#include <math.h>

using namespace std;

int main() {
	int l;	//길이
	string str;
	long long ans = 0;
	long long d = 1;

	cin >> l >> str;
	
	for (int i = 0; i < l; i++) {
		ans = ans + (long((str[i]) - 96) * d) % 1234567891;
		d = (d * 31) % 1234567891;
	}

	cout << ans % 1234567891;

	return 0;
}