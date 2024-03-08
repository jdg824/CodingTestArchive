#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main() {
	int n;
	priority_queue <int, vector<int>, greater<>> q;
	vector <int> v;

	cin >> n;

	for (int i = 0; i < n; i++) {
		int dq;

		cin >> dq;
		q.push(dq);
	}

	int sum = 0;

	if (q.size() == 1)
		cout << 0;
	else {
		while (1) {
			int first, second;

			if (q.size() == 1)
				break;

			first = q.top();
			q.pop();

			second = q.top();
			q.pop();

			sum = first + second;

			v.push_back(sum);
			q.push(sum);
		}

		int total = 0;

		for (int i = 0; i < v.size(); i++)
			total += v[i];

		cout << total;
	}

	return 0;
}