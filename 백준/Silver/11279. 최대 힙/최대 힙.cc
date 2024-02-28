#include <iostream>
#include <queue>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, num;
	priority_queue<int> q;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> num;
		
		if (num != 0)
			q.push(num);
		else {
			if (q.size() == 0)
				cout << 0 << "\n";
			else {
				cout << q.top() << "\n";
				q.pop();
			}
		}
	}

}