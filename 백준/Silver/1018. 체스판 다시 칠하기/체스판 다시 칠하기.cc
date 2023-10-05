#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

char ans[50][50];

char wb[8][8] = {
	'W','B','W','B','W','B','W','B',
	'B','W','B','W','B','W','B','W',
	'W','B','W','B','W','B','W','B',
	'B','W','B','W','B','W','B','W',
	'W','B','W','B','W','B','W','B',
	'B','W','B','W','B','W','B','W',
	'W','B','W','B','W','B','W','B',
	'B','W','B','W','B','W','B','W'
};

char bw[8][8] = {
	'B','W','B','W','B','W','B','W',
	'W','B','W','B','W','B','W','B',
	'B','W','B','W','B','W','B','W',
	'W','B','W','B','W','B','W','B',
	'B','W','B','W','B','W','B','W',
	'W','B','W','B','W','B','W','B',
	'B','W','B','W','B','W','B','W',
	'W','B','W','B','W','B','W','B'
};

int main() {
    int n, m, result =0, result_2 = 0;
	vector <int>v;

    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
			cin >> ans[i][j];
        }
    }

	for (int i = 0; i <= n - 8; i++) {
		for (int j = 0; j <= m - 8; j++) {
			for (int k = 0; k < 8; k++) {
				for (int l = 0; l < 8; l++) {
					if (ans[i + k][j + l] != bw[k][l])
						result++;
					if (ans[i + k][j + l] != wb[k][l])
						result_2++;
				}
			}
			v.push_back(min(result, result_2));
			result = 0;
			result_2 = 0;
		}
	}

	cout << *min_element(v.begin(), v.end());
}