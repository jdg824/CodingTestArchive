#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, k, idx = 0 , cnt = 0;
	vector <int>v;
	vector <int>ans;

	cin >> n >> k;

	for (int i = 1; i <= n; i++)
		v.push_back(i);

	while (v.size() != 0) {
		int i = k - 1;

		idx += i;
		
		if (idx <= v.size()-1) {
			ans.push_back(v[idx]);
			v.erase(v.begin() + idx);
		}

		else {
			idx %= v.size();
			ans.push_back(v[idx]);
			v.erase(v.begin() + idx);
		}
	}

	cout << "<";
	for (int i = 0; i < n; i++) {
		cout << ans[i];
		if(i < n-1)
			cout << ", ";
	}
	cout << ">";

	return 0;
}