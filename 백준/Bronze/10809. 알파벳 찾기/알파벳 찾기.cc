#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
	string st;

	cin >> st;

	for (int i =97; i <= 122; i++) {
		int loc = st.find(i);
		
		cout << loc << " ";
	}

	return 0;
}