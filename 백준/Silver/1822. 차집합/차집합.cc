#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int a, b;
	vector <int>ar;
	vector <int>br;

	cin >> a >> b;

	for (int i = 0; i < a; i++) {
		int num;
		cin >> num;

		ar.push_back(num);
	}

	for (int i = 0; i < b; i++) {
		int num;
		cin >> num;

		br.push_back(num);
	}

	sort(ar.begin(), ar.end());
	sort(br.begin(), br.end());

	int cnt = 0;
	vector<int> ans;

	for (int i = 0; i < a; i++) {
		if (!binary_search(br.begin(), br.end(), ar[i])) {
			cnt++;
			ans.push_back(ar[i]);
		}
	}

	cout << cnt << "\n";

	for (int i = 0; i < ans.size(); i++)
		cout << ans[i] << " ";

	return 0;
}