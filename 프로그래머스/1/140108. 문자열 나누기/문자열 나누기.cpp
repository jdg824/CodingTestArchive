#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string s) {
    int answer = 0;
    int same = 0, diff = 0;
    string tmp = "";
    
    for(int i=0; i<s.size(); i++){
        if(tmp == ""){
            tmp = to_string(s[i]);
            same++;
        }
        else{
            if(tmp != to_string(s[i]))
                diff++;
            else
                same++;
        }
        
        if(diff == same){
            cout << diff<<" "<<same<<"\n";
            answer++;
            diff = 0;
            same = 0;
            tmp = "";
        }
    }
    
    if(!tmp.empty())
        answer++;
    
    return answer;
}