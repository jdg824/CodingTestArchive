#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string skill, vector<string> skill_trees) {
    int answer = 0;
    
    for(int i=0; i<skill_trees.size(); i++){
        int idx = 0;    //chk for skill
        int chk = 0;
        
        for(int j=0; j<skill_trees[i].size(); j++){
            if(skill.find(skill_trees[i][j]) != string::npos){
                if(skill_trees[i][j] != skill[idx]){
                    chk = -1;
                    break;
                }
                else
                    idx++;
            }
        }
        
        if(chk != -1)
            answer++;
    }
    
    return answer;
}