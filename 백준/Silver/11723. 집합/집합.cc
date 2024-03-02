#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	int arr[21] = { 0, };

	cin >> n;

	for (int i = 0; i < n; i++) {
		string cmd;
		int num;

		cin >> cmd;

		if (cmd != "all" && cmd != "empty")
			cin >> num;

		if (cmd == "add")
			arr[num] = 1;
		else if (cmd == "remove") {
			if (arr[num] == 1)
				arr[num] = 0;
		}
		else if (cmd == "check") {
			if (arr[num] == 1)
				cout << "1" << "\n";
			else
				cout << "0" << "\n";
		}
		else if (cmd == "toggle") {
			if (arr[num] == 1)
				arr[num] = 0;
			else
				arr[num] = 1;
		}
		else if (cmd == "all") {
			for (int j = 1; j <= 20; j++)
				arr[j] = 1;
		}
		else if (cmd == "empty") {
			for (int j = 1; j <= 20; j++)
				arr[j] = 0;
		}
	}

	return 0;
}