#include <iostream>
#include <string>

using namespace std;

int main() {
	long long n;
	
	cin >> n;

	long long cnt = 0;

	for (long long i = 1; i <= n; i *= 10) {
		cnt += n - i + 1;
	}

	cout << cnt;
}