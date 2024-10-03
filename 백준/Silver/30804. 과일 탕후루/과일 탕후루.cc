#include <bits/stdc++.h>
#define nl '\n'
using namespace std;
typedef long long ll;

int i, j;
int type[10];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	queue<int> q;
	int n;
	cin >> n;
	int cnt = 0;
	int result = 0;
	int len = 0;

	while(n--){
		int num;
		cin >> num;
		q.push(num);
		len ++;

		if(type[num] == 0){
			cnt ++;
		}
		type[num] ++;

		while (cnt > 2){
			int fruit = q.front();
			type[fruit] --;
			q.pop();
			len --;
			if (type[fruit] == 0){
				cnt --;
			}
		}
		result = max(result, len);
	}
	cout << result << nl;
    return 0;
}