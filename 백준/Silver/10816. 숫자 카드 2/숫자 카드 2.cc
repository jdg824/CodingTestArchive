#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m, num;
	vector <int>v, f;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> num;
		v.push_back(num);
	}

	sort(v.begin(), v.end());

	cin >> m;

	//upper bound는 target 값보다 초과인 index 값
	//lower bound는 targer 값보다 이상인 index 값
	//이분탐색 원리

	for (int i = 0; i < m; i++) {
		cin >> num;

		cout << upper_bound(v.begin(), v.end(), num) - lower_bound(v.begin(), v.end(), num) << " ";
	}


	return 0;
}