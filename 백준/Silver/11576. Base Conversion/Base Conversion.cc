#include <iostream>
#include <vector>
#include <stack>
#include <math.h>

using namespace std;

int main() {
	int A, B, m;
	vector <int>v;

	cin >> A >> B >> m;

	for (int i = 0; i < m; i++) {
		int num;
		cin >> num;
		v.push_back(num);
	}

	int dec = 0;

	for (int i = 0; i < m; i++) {
		dec += (v[i] * pow(A, m-1-i));
	}

	stack<int> st;
	while (dec) {
		st.push(dec%B);
		dec /= B;
	}
	
	while (!st.empty()) {
		cout << st.top() << " ";
		st.pop();
	}
	return 0;
}