#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

struct cmp {
	bool operator() (int i, int j) {
		if (abs(i) == abs(j))
			return i > j;
		else
			return abs(i) > abs(j);
	}
};

priority_queue<int, vector<int>, cmp> dq;

int main() {
	int n;

	cin >> n;

	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;

		if (num == 0) {
			if (dq.size() == 0)
				cout << 0 << "\n";
			else {
				cout << dq.top() << "\n";
				dq.pop();
			}
		}
		else
			dq.push(num);

	}


}