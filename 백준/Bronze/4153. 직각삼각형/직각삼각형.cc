#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

int main() {
	while (1) {
		int v[3];

		cin >> v[0] >> v[1] >> v[2];

		sort(v, v + 3);

		if (v[0] == 0 && v[1] == 0 && v[2] == 0)
			break;

		if (v[2] == sqrt((pow(v[1], 2) + pow(v[0], 2))))
			cout << "right";
		else
			cout << "wrong";
		cout << "\n";
	}

	return 0;
}