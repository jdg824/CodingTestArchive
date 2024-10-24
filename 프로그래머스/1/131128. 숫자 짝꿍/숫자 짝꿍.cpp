#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <map>

using namespace std;

string solution(string X, string Y) {
    string answer = "";
    map<int, int> x;    //type, cnt
    map<int, int> y;
    
    for(int i=0; i<X.size(); i++){
        x[X[i]-'0']++;
    }
    
    for(int i=0; i<Y.size(); i++){
        y[Y[i]-'0']++;
    }
    
    for(int i=9; i>=0; i--){
        int num = min(x[i], y[i]);
        
        for(int j =0; j<num; j++){
            answer+=to_string(i);
        }
    }
    
    if(answer == "")
        answer = "-1";
    else if(answer[0] == '0')
        answer = "0";
    
    return answer;
}