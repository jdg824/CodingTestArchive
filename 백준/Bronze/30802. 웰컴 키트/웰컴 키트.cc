#include <iostream>

using namespace std;

int main() {
	int n;
	int size[6];
	int t, p;

	cin >> n;
	for (int i = 0; i < 6; i++)
		cin >> size[i];
	cin >> t >> p;

	int t_ans = 0;

	for (int i = 0; i < 6; i++) {
		if (size[i] <= t && size[i] > 0)
			t_ans++;
		else if (size[i] == 0)
			t_ans += 0;
		else if (size[i] % t == 0)
			t_ans = t_ans + (size[i] / t);
		else
			t_ans = t_ans + (size[i] / t) + 1;
	}

	int p_ans = n / p;
	int p_remain = n % p;

	cout << t_ans << "\n" << p_ans << " " << p_remain;

	return 0;
}