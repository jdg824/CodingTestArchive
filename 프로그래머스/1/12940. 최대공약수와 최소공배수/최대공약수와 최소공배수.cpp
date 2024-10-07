#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;
    
    int mv = min(n, m);
    int cnt = 1;
    int value;

    while(cnt <= mv){
        if(n%cnt ==0 && m%cnt==0){
            value = cnt;
        }
        cnt++;
    }
    
    answer.push_back(value);
    answer.push_back(value * (n/value) * (m/value));
    
    return answer;
}