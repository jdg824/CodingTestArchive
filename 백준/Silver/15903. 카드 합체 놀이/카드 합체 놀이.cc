#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
	priority_queue<long long int, vector<long long int>, greater<long long int>> pq;
	int n, m;

	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		long long int num;
		
		cin >> num;
		pq.push(num);
	}

	while (m--) {
		long long int f = pq.top();
		pq.pop();
		long long int b = pq.top();
		pq.pop();

		pq.push(f + b);
		pq.push(f + b);
	}

	long long int sum = 0;

	while (!pq.empty()) {
		sum += pq.top();
		pq.pop();
	}

	cout << sum;

	return 0;
}