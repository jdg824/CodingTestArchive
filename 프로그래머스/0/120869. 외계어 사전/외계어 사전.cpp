#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<string> spell, vector<string> dic) {
    int answer = 2;
    
    for(int i =0; i<dic.size(); i++){
        int cnt =0;
        string str = dic[i];
        
        for(int j =0; j<spell.size(); j++){
            string cmp = spell[j];
            
            if(count(str.begin(), str.end(), cmp[0]))
                cnt++;
        }
        
        if(cnt == spell.size()){
            answer =1;
            break;
        }
    }
    
    return answer;
}