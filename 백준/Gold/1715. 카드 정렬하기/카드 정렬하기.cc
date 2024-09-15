#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main() {
	priority_queue<int, vector<int>, greater<int>> q;
	int n;
	vector<int> v;

	cin >> n;

	for (int i = 0; i < n; i++) {
		int a;

		cin >> a;

		q.push(a);
	}

	if (q.size() >= 2) {
		while (q.size() != 1) {
			int a = q.top();
			q.pop();
			v.push_back(a);
			int b = q.top();
			q.pop();
			v.push_back(b);
			q.push(a + b);
		}
		
		int sum = 0;
		for (int i = 0; i < v.size(); i++) {
			sum += v[i];
		}

		cout << sum;
	}
	else {
		cout << 0;
	}

	return 0;
}