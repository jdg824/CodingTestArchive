#include <iostream>
#include <queue>

using namespace std;

int main() {
	int t;

	cin >> t;

	for (int i = 0; i < t; i++) {
		priority_queue<int> pq;
		queue<pair<int, int>> q;	//idx, value

		int n, m;

		cin >> n >> m;	//m = purpose

		for (int i = 0; i < n; i++) {
			int num;

			cin >> num;
			pq.push(num);
			q.push({ i, num });
		}

		int cnt = 0;
		while (!q.empty()) {
			int idx = q.front().first;
			int value = q.front().second;
			q.pop();
			
			if (pq.top() == value) {
				pq.pop();
				cnt++;

				if (idx == m) {
					cout << cnt << "\n";
					break;
				}
			}
			else {
				q.push({ idx, value });
			}
		}
	}

	return 0;
}