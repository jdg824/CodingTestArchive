#include <iostream>
#include <deque>

using namespace std;

int main() {
	int n, num;
	deque <int>dq;
	string cmd;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> cmd;

		if (cmd == "push_back") {
			cin >> num;
			dq.push_back(num);
		}

		if (cmd == "push_front") {
			cin >> num;
			dq.push_front(num);
		}

		if (cmd == "front") {
			if (dq.size() == 0)
				cout << "-1\n";
			else
				cout << dq.front() <<"\n";
		}

		if (cmd == "back") {
			if (dq.size() == 0)
				cout << "-1\n";
			else
				cout << dq.back() << "\n";
		}

		if (cmd == "pop_front") {
			if (dq.size() == 0)
				cout << "-1\n";
			else {
				cout << dq.front() << "\n";
				dq.pop_front();
			}
		}

		if (cmd == "pop_back") {
			if (dq.size() == 0)
				cout << "-1\n";
			else {
				cout << dq.back() << "\n";
				dq.pop_back();
			}
		}

		if (cmd == "size")
			cout << dq.size() <<"\n";

		if (cmd == "empty") {
			if (dq.empty())
				cout << "1\n";
			else
				cout << "0\n";
		}
	}
}