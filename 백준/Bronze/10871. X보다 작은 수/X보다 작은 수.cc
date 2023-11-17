#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, x;
	
	cin >> n >> x;

	vector <int>v;

	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		v.push_back(num);
	}

	for (int i = 0; i < v.size(); i++) {
		if (v[i] < x)
			cout << v[i] << " ";
	}

	return 0;
}