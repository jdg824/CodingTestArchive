#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    
    for(int i=0; i<s.size(); i++){
        int ch;
        if(s[i] == ' ')
            answer+=s[i];
        else if(s[i] >= 'a' && s[i] <= 'z'){
            ch=s[i]+n;
            
            if(ch > 'z')
                ch -=26;
            
            answer += (char)ch;
        }
        else{
            ch=s[i]+n;
            
            if(ch > 'Z')
                ch -=26;
            
            answer += (char)ch;
        }
    }
    return answer;
}