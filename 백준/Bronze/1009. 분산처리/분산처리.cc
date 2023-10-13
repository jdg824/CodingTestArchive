#include <iostream>
#include <math.h>

using namespace std;

int main() {
	long long int n;

	cin >> n;

	for (int i = 0; i < n; i++) {
		long long int a, b;
		cin >> a >> b;

		long long int data = 1;

		for (int j = 0; j < b; j++) {
			data = data * a % 10;
			if (data == 0)
				data = 10;
		}

		cout << data << "\n";
	}

	return 0;
}