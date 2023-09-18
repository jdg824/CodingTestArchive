#include <iostream>
#include <vector>

using namespace std;

int main() {
	int a, t, b;

	cin >> a >> t >> b;

	int round = 0, count =0, res = 0; 
	while (1) {
		round++;
		vector<int> v{ 0,1,0,1 };
		for (int i = 0; i < round + 1; i++) {
			v.push_back(0);
		}
		for (int i = 0; i < round + 1; i++) {
			v.push_back(1);
		}

		for (int i = 0; i < v.size(); i++) {
			if (v[i] == b)
				count++;
			if (count == t) {
				cout << res;
				return 0;
			}
			res++;
			res %= a;
		}
		v.clear();
	}

	return 0;
}