#include <iostream>
#include <limits.h>

using namespace std;

int main() {
	int x, y, m;
	int graph[501][501] = { 0, };
	int m_value = -1;

	cin >> x >> y >> m;

	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			cin >> graph[i][j];
			m_value = max(m_value, graph[i][j]);
		}
	}

	int ans = INT_MAX;
	int idx;

	for (int i = 0; i <= m_value; i++) {
		int dig = 0;
		int plus = 0;

		for (int j = 0; j < x; j++) {
			for (int k = 0; k < y; k++) {
				int height = graph[j][k] - i;

				if (height > 0)
					dig += height;
				else if (height < 0)
					plus -= height;
			}
		}

		if (dig + m >= plus) {
			int time = dig * 2 + plus;

			if (ans >= time) {
				ans = time;
				idx = i;
			}
		}
	}

	cout << ans << " " << idx;

	return 0;
}