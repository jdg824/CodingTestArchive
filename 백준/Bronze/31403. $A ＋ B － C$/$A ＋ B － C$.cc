#include <iostream>
#include <string>

using namespace std;

int main() {
	int a, b, c;

	cin >> a >> b >> c;

	cout << a + b - c;
	cout << "\n";

	string s1 = to_string(a);
	string s2 = to_string(b);
	
	s1 += s2;
	a = stoi(s1);

	cout << a - c;

	return 0;
}