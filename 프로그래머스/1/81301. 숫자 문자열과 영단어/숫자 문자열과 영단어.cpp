#include <string>
#include <vector>

using namespace std;

string number[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

int solution(string s) {
    int answer = 0;
    string ans = "";
    
    string tmp ="";
    for(int i=0; i<s.size(); i++){
        if(isdigit(s[i]))
            ans+=s[i];
        else{
            tmp+=s[i];
            
            if(tmp.size() >=3){
                for(int j=0; j<10; j++){
                    if(number[j] == tmp){
                        ans += to_string(j);
                        tmp = "";
                        break;
                    }
                }   
            }
        }
    }
    
    answer = stoll(ans);
    return answer;
}