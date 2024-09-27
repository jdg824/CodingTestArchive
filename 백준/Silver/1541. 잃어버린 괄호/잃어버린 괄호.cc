#include <iostream>
#include <string>

using namespace std;

int main() {
	string str, tmp;
	int ans = 0;

	cin >> str;

	bool chk = 0;
	for (int i = 0; i <= str.size(); i++) {
		if (str[i] == '+' || str[i] == '-' || str[i] == '\0') {
			if (chk == 1) {	//처음 - 가 나오기 전까지는 더하지만 이후에는 다 빼줘도 상관없음
				ans -= stoi(tmp);
			}
			else {
				ans += stoi(tmp);
			}

			tmp = "";
			if (str[i] == '-')
				chk = 1;	//처음 나오는 - 일때 chk 1로 바꿔줌
		}
		else
			tmp += str[i];	//숫자인 경우 문자열로 만들어줘야함
	}

	cout << ans;

	return 0;
}