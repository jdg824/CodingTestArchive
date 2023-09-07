#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	vector <double>v;
	double n, grade, total = 0;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> grade;
		v.push_back(grade);
	}

	int m_grade = *max_element(v.begin(), v.end());

	for (int i = 0; i < n; i++) {
		v[i] = v[i] / m_grade * 100;
		total += v[i];
	}

	cout << total / n;

	return 0;
}