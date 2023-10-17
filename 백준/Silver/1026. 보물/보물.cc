#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(int i, int j) {
	return i > j;
}

int main() {
	int n, num, sum = 0;
	vector <int>a, b;
	
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> num;
		a.push_back(num);
	}

	for (int i = 0; i < n; i++) {
		cin >> num;
		b.push_back(num);
	}

	sort(a.begin(), a.end());
	sort(b.begin(), b.end(), compare);

	for (int i = 0; i < n; i++) {
		sum += a[i] * b[i];
	}

	cout << sum;

	return 0;
}