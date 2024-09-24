#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, k;
	vector<int> v;

	cin >> n >> k;

	for (int i = 1; i <= n; i++) {
		v.push_back(i);
	}

	int size = n;	//큐 안에 사이즈
	int idx = 0;	//현재 가르키고 있는거
	int cnt = 0;	//k-1만큼 건넜는지

	vector<int> ans;	//답 넣어두기

	while (!v.empty()) {
		if (cnt == k - 1) {
			ans.push_back(v[idx]);
			v.erase(v.begin()+idx);
			cnt = 0;
			size--;
		}
		else {
			cnt++;
			idx = (idx+1)%size;
		}
	}

	cout << "<";
	for (int i = 0; i < n - 1; i++)
		cout << ans[i] << ", ";
	cout << ans[n - 1] << ">";

	return 0;
}