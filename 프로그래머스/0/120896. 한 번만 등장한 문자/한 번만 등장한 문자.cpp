#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s) {
    string answer = "";
    
    for(char i = 'a'; i<='z'; i++){
        if(count(s.begin(), s.end(), i) == 1)
            answer += i;
    }
    
    return answer;
}