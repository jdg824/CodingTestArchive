#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct grade
{
	string name;
	int k, e, m;
};

bool cmp(grade a, grade b) {
	if (a.k == b.k && a.e == b.e && a.m == b.m)
		return a.name < b.name;
	else if (a.k == b.k && a.e == b.e)
		return a.m > b.m;
	else if (a.k == b.k)
		return a.e < b.e;
	else
		return a.k > b.k;
}

int main() {
	vector<grade>v;
	int num;

	cin >> num;

	for (int i = 0; i < num; i++) {
		string name;
		int kor, eng, mat;

		cin >> name >> kor >> eng >> mat;

		grade g;
		g.name = name;
		g.k = kor;
		g.e = eng;
		g.m = mat;

		v.push_back({ g.name, g.k, g.e, g.m });
	}

	sort(v.begin(), v.end(), cmp);

	for (int i = 0; i < v.size(); i++) {
		cout << v[i].name <<"\n";
	}

	return 0;
}