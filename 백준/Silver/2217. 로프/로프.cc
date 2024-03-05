#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n;
	vector <int> v;

	cin >> n;

	for (int i = 0; i < n; i++) {
		int weight;

		cin >> weight;
		v.push_back(weight);
	}

	sort(v.begin(), v.end());

	int max = 0;

	for (int i = 0; i < v.size(); i++) {
		int weight = v[i] * (v.size() - i);

		if (max < weight)
			max = weight;
	}

	cout << max;
}