#include <iostream>
#include <deque>
#include <algorithm>
#include <string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int t;

	cin >> t;

	for (int i = 0; i < t; i++) {
		string p;	//function
		int n;
		string x;	//arr int
		deque<int> v;

		cin >> p >> n >> x;

		string str = "";
		bool dir = 0;	//1 reverse
		bool chk = 0;	//1 out

		for (int i = 0; i < x.size(); i++) {
			if (isdigit(x[i])) {
				str += x[i];
			}

			if (x[i] == ',' || x[i] == ']') {
				if (str != "") {
					v.push_back(stoi(str));
					str = "";
				}
			}
		}

		for (int i = 0; i < p.size(); i++) {
			if (p[i] == 'R')
				dir = !dir;
			else {
				if (v.empty()) {
					chk = 1;
					break;
				}
				else {
					if (dir == 0)
						v.pop_front();
					else
						v.pop_back();
				}
			}
		}

		if (chk == 1)
			cout << "error\n";
		else {
			if (dir == 1) {
				if(!v.empty())
					reverse(v.begin(), v.end());
			}

			cout << "[";
			for (int i = 0; i < v.size(); i++){
				if(i == v.size()-1)
					cout << v[i];
				else
					cout << v[i] << ",";
			}
			cout << "]\n";
		} 
	}
}