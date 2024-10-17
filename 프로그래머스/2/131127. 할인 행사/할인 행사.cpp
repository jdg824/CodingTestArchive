#include <string>
#include <vector>
#include <map>
#include <iostream>

using namespace std;

int solution(vector<string> want, vector<int> number, vector<string> discount) {
    int answer = 0;
    map<string, int> m; //type, cnt
    
    for(int i=0; i<want.size(); i++){
        m[want[i]] = number[i];
    }
    
    for(int i=0; i<=discount.size() -10; i++){
        map<string, int> tmp;
        
        for(int j =0; j<10; j++){
            tmp[discount[i+j]]++;
        }
        
        if(tmp == m)
            answer++;
    }
    
    return answer;
}