#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

string solution(string s) {
    string answer = "";
    
    bool chk = 1;   //chk = 1 first letter -> upper

    for(int i=0; i<s.size(); i++){
        s[i] = tolower(s[i]);
    }
    
    for(int i=0; i<s.size(); i++){
        if(chk == 1 && s[i] != ' '){
            answer += toupper(s[i]);
            chk = 0;
        }
        else{
            if(s[i] == ' ')
                chk = 1;
            
            answer += s[i];
        }
    }
    
    return answer;
}