#include <iostream>
#include <vector>

using namespace std;

vector<int> v;
bool flag = 0;
int cnt = 0;
int n;

void check() {
	int chk = 0;

	for (int i = 0; i < n-1; i++) {
		if (v[i] < v[i + 1])
			chk++;
	}

	if (chk == n - 1)
		flag = 1;
	else
		flag = 0;
}

int main() {
	cin >> n;

	for (int i = 0; i < n; i++) {
		int grade;

		cin >> grade;
		v.push_back(grade);
	}

	while (1) {
		if (flag == 1)
			break;

		for (int i = 0; i < n-1; i++) {
			if (v[i] >= v[i + 1]) {
				cnt += (v[i] - v[i + 1] + 1);
				v[i] = v[i] - (v[i] - v[i+1] + 1);
			}
		}

		check();
	}

	cout << cnt;

	return 0;
}