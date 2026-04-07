#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    string chk;

    for(int i =0; i<s.size(); i++){
        chk += tolower(s[i]);
    }
    
    int pc = 0;
    int yc = 0;
    
    for(int i = 0; i<chk.size(); i++){
        if(chk[i] == 'p')
            pc++;
        else if(chk[i] == 'y')
            yc++;
    }
    
    if(pc != yc)
        answer = false;
    
    return answer;
}