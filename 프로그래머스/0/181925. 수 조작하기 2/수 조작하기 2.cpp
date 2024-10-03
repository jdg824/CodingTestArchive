#include <string>
#include <vector>

using namespace std;

string solution(vector<int> numLog) {
    string answer = "";
    int tmp = numLog[0];
    
    for(int i=1; i<numLog.size(); i++){
        if(tmp +1 == numLog[i])
            answer += 'w';
        else if(tmp -1 == numLog[i])
            answer += 's';
        else if(tmp +10 == numLog[i])
            answer += 'd';
        else if(tmp-10 == numLog[i])
            answer +='a';
        
        tmp = numLog[i];
    }
    
    return answer;
}