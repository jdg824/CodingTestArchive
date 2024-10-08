#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    int len = p.size();
    
    for(int i=0; i< t.size()-len+1; i++){
        string tmp = t.substr(i, len);
        cout << tmp <<" ";
        
        if(stoll(tmp) <= stoll(p))
            answer++;
    }
    return answer;
}