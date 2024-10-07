#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int cnt =1;
    
    for(int i=0; i<s.size(); i++){
        if(cnt %2 !=0){
            answer += toupper(s[i]);
        }
        else if(cnt %2 == 0)
            answer += tolower(s[i]);
        
        cnt++;
        
        if(s[i] == ' ')
            cnt = 1;
    }
    
    return answer;
}