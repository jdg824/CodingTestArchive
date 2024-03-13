#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

bool cmp(int a, int b) {
	return a > b;
}

int main() {
	int n;
	int arr[26] = { 0, };
	
	cin >> n;

	for (int i = 0; i < n; i++) {
		string str;

		cin >> str;

		int num = pow(10, str.size()-1);
		for (int j = 0; j < str.size(); j++) {
			arr[str[j] - 'A'] += num;
			num /= 10;
		}
	}

	sort(arr, arr + 26, cmp);

	int ans = 9, sum = 0;
	for (int i = 0; i < 26; i++) {
		sum += arr[i] * ans;
		ans--;
	}

	cout << sum;

	return 0;
}