#include<string>
#include <iostream>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    int len = s.length();
    int count =0;
    
    for(int i=0; i<len; i++){
        if(s[i] == '(')
            count++;
        else
            count--;
        
        if(count < 0)
            answer = false;
    }
    
    if(count != 0)
            answer = false;
    
    return answer;
}