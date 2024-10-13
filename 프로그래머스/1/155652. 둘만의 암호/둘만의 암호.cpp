#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string s, string skip, int index) {
    string answer = "";
    
    for(int i=0; i<s.size(); i++){
        char ch = s[i];
        int cnt = 0;
        
        while(cnt < index){
            ch++;
            cout << ch <<" " << cnt <<"\n";
            
            if(ch > 'z')
                ch = 'a';
            
            if(skip.find(ch) == string::npos)
                cnt++;
           
        }
        
        answer += ch;
    }
    
    return answer;
}