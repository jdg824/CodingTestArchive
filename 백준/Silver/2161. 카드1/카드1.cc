#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
	int n;
	vector<int> v;
	queue<int> q;

	cin >> n;

	for (int i = 1; i <= n; i++) {
		q.push(i);
	}

	while (1) {
		int tmp;

		if (q.size() == 1)
			break;

		cout << q.front() << " ";
		q.pop();

		tmp = q.front();
		q.pop();
		q.push(tmp);
	}
	cout << q.front();
	

	return 0;
}