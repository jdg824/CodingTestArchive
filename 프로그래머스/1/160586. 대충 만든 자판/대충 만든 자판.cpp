#include <string>
#include <vector>
#include <map>
#include <iostream>

using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets) {
    vector<int> answer;
    map<char, int> m;   //word, idx
    
    for(int i =0; i<keymap.size(); i++){
        for(int j=0; j<keymap[i].size(); j++){
            if(m[keymap[i][j]] == 0)
                m[keymap[i][j]] = j+1;
            else{
                m[keymap[i][j]] = min(j+1, m[keymap[i][j]]);
            }
        }
    }
    
    for(int i = 0; i<targets.size(); i++){
        int ans = 0;
        bool chk = 0;
        
        for(int j = 0; j<targets[i].size(); j++){
            if(m[targets[i][j]] == 0){
                chk = 1;
                break;
            }
            else{
                ans+=m[targets[i][j]];
            }
        }
        
        if(chk == 1)
            answer.push_back(-1);
        else
            answer.push_back(ans);
    }
    
    return answer;
}