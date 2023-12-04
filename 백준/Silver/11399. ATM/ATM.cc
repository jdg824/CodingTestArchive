#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;

int main() {
	int n, num;
	deque <int>v;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> num;
		v.push_back(num);
	}

	sort(v.begin(), v.end());

	int sum = v[0];

	while (v.size()!=1) {
		int temp1 = v.front();
		v.pop_front();
		int temp2 = v.front();
		v.pop_front();

		sum += (temp1 + temp2);
		v.push_front(temp1 + temp2);
	}

	cout << sum;
}